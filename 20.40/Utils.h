#pragma once
#include "framework.h"
#include "Offsets.h"

#define Log(format, ...) wprintf(format "\n", ##__VA_ARGS__);

class Utils {
	static inline void* _NpFH = nullptr;
public:
	template <class _Ot = void*>
	static void Hook(uint64_t _Ptr, void* _Detour, _Ot& _Orig = _NpFH) {
		MH_CreateHook((LPVOID)_Ptr, _Detour, (LPVOID*)(std::is_same_v<_Ot, void*> ? nullptr : &_Orig));
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
		if (!std::is_same_v<_Ot, void*>)
			_Orig = (_Ot)_Vt[_Ind];

		_HookVT(_Vt, _Ind, _Detour);
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

	template <class T>
	static inline T* SpawnActor(FVector Location, AActor* Owner = nullptr, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 }, ESpawnActorCollisionHandlingMethod SpawnMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn)
	{
		FQuat Quat{};
		FTransform Transform{};

		auto DEG_TO_RAD = 3.14159 / 180;
		auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

		auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
		auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

		auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
		auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

		auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
		auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

		Quat.X = CR * SP * SY - SR * CP * CY;
		Quat.Y = -CR * SP * CY - SR * CP * SY;
		Quat.Z = CR * CP * SY - SR * SP * CY;
		Quat.W = CR * CP * CY + SR * SP * SY;

		Transform.Rotation = Quat;
		Transform.Scale3D = Scale3D;
		Transform.Translation = Location;

		auto Actor = UGameplayStatics::GetDefaultObj()->BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Class, Transform, SpawnMethod, Owner);
		if (Actor)
			UGameplayStatics::GetDefaultObj()->FinishSpawningActor(Actor, Transform);
		return (T*)Actor;
	}

	template <typename _Ot = void*>
	__forceinline static void ExecHook(UFunction* _Fn, void* _Detour, _Ot& _Orig = _NpFH)
	{
		if (!_Fn)
			return;
		if (!std::is_same_v<_Ot, void*>)
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
