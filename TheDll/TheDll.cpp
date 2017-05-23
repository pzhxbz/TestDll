// TheDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "TheDll.h"

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

void TestClass::Sayhello()
{
	std::cout << "test\n" << std::endl;
}

THEDLL_API BaseClass * Create()
{
	return new TestClass();
}

THEDLL_API void Remove(BaseClass *p)
{
	delete(p);
	return;
}
