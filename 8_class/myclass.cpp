#include "myclass.h"
#include <stdio.h>

CMyClass::CMyClass(int valueA) :a(valueA), m_b(0), c(0)
{
	printf("생성자A호출\n");
}

CMyClass::CMyClass(int valueA, int valuleB) :a(valueA), m_b(valuleB), c(0)
{
	printf("생성자B호출\n");
}
CMyClass::~CMyClass()
{
	printf("파괴자호출\n");
}
void CMyClass::printb()
{
	printf("b=%d", m_b);
}

void CMyClass::setc(int num)
{
	c = num;
}
