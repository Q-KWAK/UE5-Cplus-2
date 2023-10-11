#include "Card.h"
#include <stdio.h>


//CCard::CCard��� class�� ȣ���ϰڴ�. 
//CCard(CardMark mark, int number) -> CCard �� �Լ��� �μ��� CardMark mark int number���� �ְڴ�. 
//:m_mark(mark), m_number(number) -> class ���� ��� ������ ȣ��
CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number)
{

}

//std::string ǥ�� ��� string�� ȣ�� (���ڿ�)
//CCard::GetMarkStr() class CCard�� GetMarkStr() �Լ��� ȣ���ϰڴ�.

std::string CCard::GetMarkStr()
{
	//switch() m_mark ����(����)����
	//case�� clover, Heart, Dia, Spade �϶� �����Ѵ�.
	// switch���� if���� �ݺ��ϱ� ���� �����.
	//�� ������ none
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
//std::string ǥ�� ��� string�� ȣ�� (���ڿ�)
//CCard::GetMarkStr() class CCard�� GetMarkStr() �Լ��� ȣ���ϰڴ�.
std::string CCard::GetCardStr()
{
	//return GetMarkStr()�� ȯ���ϰ�
	return GetMarkStr() + "[" + std::to_string(m_number) + "]";
}

void CCard::printCard()
{
	printf("%s[%d]\n", GetMarkStr().c_str(), m_number);
}