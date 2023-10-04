#include "myclass.h"
#include <stdio.h>

CMyClass2::CMyClass2(int valueA) :a(valueA), m_b(0), c(0)
{
	printf("생성자A호출\n");
}

CMyClass2::CMyClass2 (int valueA, int valuleB) :a(valueA), m_b(valuleB), c(0)
{
	printf("생성자B호출\n");
}
CMyClass2::~CMyClass2()
{
	printf("파괴자호출\n");
}
void CMyClass2::printb()
{
	printf("b=%d", m_b);
}

void CMyClass2::setc(int num)
{
	c = num;
}
