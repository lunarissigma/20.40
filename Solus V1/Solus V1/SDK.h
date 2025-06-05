#pragma once
#include <string>
#include <Windows.h>
#include <cstdint>
#include <format>
#include <locale>

struct FUObjectItem
{
	// Pointer to the allocated object
	class UObject* Object;
	// Internal flags
	int Flags;
	// UObject Owner Cluster Index
	int ClusterRootIndex;
	// Weak Object Pointer Serial number associated with the object
	int SerialNumber;
};

class FFixedUObjectArray
{
public:
	/** Static primary table to chunks of pointers **/
	FUObjectItem* Objects;
	/** Number of elements we currently have **/
	int MaxElements;
	/** Current number of UObject slots */
	int NumElements;

	FORCEINLINE UObject* GetObjectPtr(int Index)
	{
		if (Index >= 0 && Index < NumElements) {
			return Objects[Index].Object;
		}
		return nullptr;
	}
};

FFixedUObjectArray* ObjObjects;

struct FMemory {
	void (*Free)(void*);
};

template <typename Element>
struct TArray {
	Element* Data;
	int32_t Count;
	int32_t Max;

	void Free() {
		Count = 0;
		Max = 0;
		FMemory::Free(Data);
		Data = nullptr;
	}
};

class FString {
private:
	typedef TArray<TCHAR> DataType;
	DataType Data;
public:
	void Free() {
		Data.Free();
	}

	std::string ToString() const {
		auto Length = std::wcslen(Data.Data);
		std::string Result(Length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data.Data, Data.Data + Length, '?', &Result[0]);
		return Result;
	}
};

void(__fastcall* ToString0)(const struct FName*, FString&);

struct FName {
	int Index;
	unsigned int Number;

	std::string ToString() const {
		FString Temp;
		ToString0(this, Temp);
		auto Str = Temp.ToString();
		Temp.Free();
		return Str;

	}
};

struct UObject {
	void** VTable;
	int					ObjectFlags;
	int							InternalIndex;
	UObject* ClassPrivate;
	FName							NamePrivate;
	UObject* OuterPrivate;

	auto GetName() const { return NamePrivate.ToString(); }

	auto GetFullName() const {
		std::string Temp;
		for (auto outer = OuterPrivate; outer; outer->OuterPrivate) {
			Temp = std::format("{}.{}", outer->GetName(), Temp);
		}

		return std::format("{} {}{}", ClassPrivate->GetName(), Temp, this->GetName());
	}
};

UObject* FindObject(const std::string name) {
	for (int i = 0; i < ObjObjects->NumElements; i++) {
		auto Object = ObjObjects->GetObjectPtr(i);
		if (!Object) continue;

		auto ObjectName = Object->GetFullName();

		if (ObjectName.contains(name)) {
			return Object;
		}
	}
}