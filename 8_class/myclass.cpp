#include "myclass.h"
#include <stdio.h>

CMyClass2::CMyClass2(int valueA) :a(valueA), m_b(0), c(0)
{
	printf("������Aȣ��\n");
}

CMyClass2::CMyClass2 (int valueA, int valuleB) :a(valueA), m_b(valuleB), c(0)
{
	printf("������Bȣ��\n");
}
CMyClass2::~CMyClass2()
{
	printf("�ı���ȣ��\n");
}
void CMyClass2::printb()
{
	printf("b=%d", m_b);
}

void CMyClass2::setc(int num)
{
	c = num;
}
