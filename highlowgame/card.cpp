#include "Card.h"
#include <stdio.h>


//CCard::CCard라는 class를 호출하겠다. 
//CCard(CardMark mark, int number) -> CCard 내 함수의 인수에 CardMark mark int number값을 넣겠다. 
//:m_mark(mark), m_number(number) -> class 내의 멤버 변수를 호출
CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number)
{

}

//std::string 표준 기능 string을 호출 (문자열)
//CCard::GetMarkStr() class CCard의 GetMarkStr() 함수를 호출하겠다.

std::string CCard::GetMarkStr()
{
	//switch() m_mark 변수(공간)에서
	//case가 clover, Heart, Dia, Spade 일때 수행한다.
	// switch문은 if문을 반복하기 쉽게 만든것.
	//다 끝나면 none
	switch (m_mark)
	{
	case Clover:
		return "Clover";
		break;
	case Heart:
		return "Heart";
		break;
	case Dia:
		return "Dia";
		break;
	case Spade:
		return "Spade";
		break;
	}

	return "None";
}
//std::string 표준 기능 string을 호출 (문자열)
//CCard::GetMarkStr() class CCard의 GetMarkStr() 함수를 호출하겠다.
std::string CCard::GetCardStr()
{
	//return GetMarkStr()를 환원하고
	return GetMarkStr() + "[" + std::to_string(m_number) + "]";
}

void CCard::printCard()
{
	printf("%s[%d]\n", GetMarkStr().c_str(), m_number);
}