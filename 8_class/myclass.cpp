#include "myclass.h"
#include <stdio.h>

CMyClass::CMyClass(int valueA) :a(valueA), m_b(0), c(0)
{
	printf("������Aȣ��\n");
}

CMyClass::CMyClass(int valueA, int valuleB) :a(valueA), m_b(valuleB), c(0)
{
	printf("������Bȣ��\n");
}
CMyClass::~CMyClass()
{
	printf("�ı���ȣ��\n");
}
void CMyClass::printb()
{
	printf("b=%d", m_b);
}

void CMyClass::setc(int num)
{
	c = num;
}
