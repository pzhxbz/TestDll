// TestDll.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BaseClass.h"
#include <windows.h>
#include <cstdlib>

typedef BaseClass* (*Create)();
typedef void(*Remove)(BaseClass*);

int main()
{
	HINSTANCE hDllInst = LoadLibrary(L"TheDll.dll");
	Create creat = (Create)GetProcAddress(hDllInst, "Create");
	Remove remove = (Remove)GetProcAddress(hDllInst, "Remove");
	if (creat == NULL)
	{
		system("pause");
	}
	auto mode = creat();
	mode->Sayhello();
	//remove(mode);
	delete(mode);
	FreeLibrary(hDllInst);

	system("pause");
	return 0;
}

