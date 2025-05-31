#pragma once
#include "framework.h"
#include "Offsets.h"

#define Log(format, ...) wprintf(format "\n", ##__VA_ARGS__);

class Utils {
	static inline void* _NpFH = nullptr;
public:
	template <class _Ot = void*>
	static void Hook(uint64_t _Ptr, void* _Detour, _Ot& _Orig = _NpFH) {
		MH_CreateHook((LPVOID)_Ptr, _Detour, (LPVOID*)(is_same_v<_Ot, void*> ? nullptr : &_Orig));
	}

	__forceinline static void _HookVT(void** _Vt, uint32_t _Ind, void* _Detour)
	{
		DWORD _Vo;
		VirtualProtect(_Vt + _Ind, 8, PAGE_EXECUTE_READWRITE, &_Vo);
		_Vt[_Ind] = _Detour;
		VirtualProtect(_Vt + _Ind, 8, _Vo, &_Vo);
	}

	template <typename _Ct, typename _Ot = void*>
	__forceinline static void Hook(uint32_t _Ind, void* _Detour, _Ot& _Orig = _NpFH)
	{
		auto _Vt = _Ct::GetDefaultObj()->VTable;
		if (!is_same_v<_Ot, void*>)
			_Orig = (_Ot)_Vt[_Ind];

		_HookVT(_Vt, _Ind, _Detour);
	}

	template <typename _Ct>
	__forceinline static void HookEvery(uint32_t _Ind, void* _Detour)
	{
		for (int i = 0; i < UObject::GObjects->Num(); i++) {
			auto Obj = UObject::GObjects->GetByIndex(i);
			if (Obj && Obj->IsA<_Ct>()) {
				_HookVT(Obj->VTable, _Ind, _Detour);
			}
		}
	}

	template <typename _Ct, typename _Ot = void*>
	__forceinline static void ExecHookEvery(const char* ShortName, void* _Detour, _Ot& _Orig = _NpFH)
	{
		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			auto Obj = UObject::GObjects->GetByIndex(i);
			if (Obj && Obj->IsA<_Ct>())
			{
				ExecHook(Obj->Class->FindFunction(ShortName)->GetFullName().c_str(), _Detour, _Orig);
			}
		}
	}

	template <typename _Is>
	static __forceinline void Patch(uintptr_t ptr, _Is byte)
	{
		DWORD og;
		VirtualProtect(LPVOID(ptr), sizeof(_Is), PAGE_EXECUTE_READWRITE, &og);
		*(_Is*)ptr = byte;
		VirtualProtect(LPVOID(ptr), sizeof(_Is), og, &og);
	}

	__forceinline static UObject* InternalFindObject(const wchar_t* ObjectPath, UClass* Class)
	{
		auto StaticFindObjectInternal = (UObject * (*)(UClass*, UObject*, const wchar_t*, bool)) Sigma::Offsets::StaticFindObject;
		return StaticFindObjectInternal(Class, nullptr, ObjectPath, false);
	}

	__forceinline static UObject* InternalLoadObject(const wchar_t* ObjectPath, UClass* InClass, UObject* Outer = nullptr)
	{
		auto StaticLoadObjectInternal = (UObject * (*)(UClass*, UObject*, const TCHAR*, const TCHAR*, uint32_t, UObject*, bool)) Sigma::Offsets::StaticLoadObject;
		return StaticLoadObjectInternal(InClass, Outer, ObjectPath, nullptr, 0, nullptr, false);
	}

	static UObject* FindObject(const wchar_t*, UClass*);

	template <typename _Ot>
	static _Ot* FindObject(const wchar_t* ObjectPath, UClass* Class = _Ot::StaticClass())
	{
		return (_Ot*)FindObject(ObjectPath, Class);
	}

	static TArray<AActor*> GetAll(UClass* Class);

	template <typename _At = AActor>
	__forceinline static TArray<_At*> GetAll(UClass* Class)
	{
		return GetAll(Class);
	}

	template <typename _At = AActor>
	__forceinline static TArray<_At*> GetAll()
	{
		return GetAll(_At::StaticClass());
	}

	static AActor* SpawnActor(UClass* Class, FTransform& Transform, AActor* Owner = nullptr);

	static AActor* SpawnActor(UClass* Class, FVector& Loc, FRotator& Rot, AActor* Owner = nullptr);

	template <typename T = AActor>
	static T* SpawnActorUnfinished(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
	{
		FTransform Transform(Loc, Rot);

		return (T*)UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
	}

	template <typename T = AActor>
	static T* FinishSpawnActor(AActor* Actor, FVector Loc, FRotator Rot)
	{
		FTransform Transform(Loc, Rot);

		return (T*)UGameplayStatics::FinishSpawningActor(Actor, Transform);
	};


	template <typename T>
	static T* SpawnActor(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
	{
		return (T*)SpawnActor(Class, Loc, Rot, Owner);
	}

	template <typename T>
	static T* SpawnActor(UClass* Class, FTransform& Transform, AActor* Owner = nullptr)
	{
		return (T*)SpawnActor(Class, Transform, Owner);
	}

	template <typename T>
	static T* SpawnActor(FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
	{
		return (T*)SpawnActor(T::StaticClass(), Loc, Rot, Owner);
	}

	template <typename T>
	static T* SpawnActor(FTransform& Transform, AActor* Owner = nullptr)
	{
		return (T*)SpawnActor(T::StaticClass(), Transform, Owner);
	}

	template <typename _Ot = void*>
	__forceinline static void ExecHook(UFunction* _Fn, void* _Detour, _Ot& _Orig = _NpFH)
	{
		if (!_Fn)
			return;
		if (!is_same_v<_Ot, void*>)
			_Orig = (_Ot)_Fn->ExecFunction;

		_Fn->ExecFunction = reinterpret_cast<UFunction::FNativeFuncPtr>(_Detour);
	}


	template <typename _Ot = void*>
	__forceinline static void ExecHook(const wchar_t* _Name, void* _Detour, _Ot& _Orig = _NpFH)
	{
		UFunction* _Fn = FindObject<UFunction>(_Name);
		ExecHook(_Fn, _Detour, _Orig);
	}
};
