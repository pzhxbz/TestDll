// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� THEDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// THEDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef THEDLL_EXPORTS
#define THEDLL_API __declspec(dllexport)
#else
#define THEDLL_API __declspec(dllimport)
#endif

#include "D:\\code\\vsProject\\TestDll\\TestDll\\BaseClass.h"
#include <iostream>

class TestClass :public BaseClass
{
public:
	TestClass();
	~TestClass();
	void Sayhello();
private:

};

extern "C" THEDLL_API BaseClass* Create();

extern "C" THEDLL_API void Remove(BaseClass *p);