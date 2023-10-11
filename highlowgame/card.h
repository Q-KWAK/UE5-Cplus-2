#pragma once

#include <string>

enum CardMark // 열거형으로 문자(변수!=0)를 정의한다
	//배열과 비슷한 개념 0이라고 정해지면 다음은 알아서 번호가 매겨짐
{
	//괄호안에 컴퓨터에게 관념을 심어주는 것 생성되는것이 아니야 관념. 생각이라고
	//ex) 1번은 골키퍼다, 9번은 스트라이커, 6번은 수미, 8번은 중미 
	None = 0,
	Clover,//1
	Heart,//2
	Dia,//3
	Spade,//4
	MaxMark //5
};

class CCard
{
	//public = class 내에 영향을 줄 수 있는 멤버들을 선언
	//CCard = 생성자 -> class가 생성될때 호출되는 '함수'
	//(CardMark mark -> 열거형으로 정의한 문자를 mark라고 변수를 설정 
	// = CardMark::None, -> CardMark 내부에 none에 접근한 것을 대입한다
	// int number = 0)  -> 정수형 변수 number 에 0을 대입한다
public:
	CCard(CardMark mark = CardMark::None, int number = 0);

	//std :: -> 스탠다드 클래스 표준 라이브러리에 있는 변수 혹은 함수를 가져오겠다
	//string -> 스트링이라는 파일
	//GetMarkStr() - > 함수를 
	std::string GetMarkStr();
	
	std::string GetCardStr();

	//void -> 반환하지 않겠다
	//printCard() -> 이 함수를
	void printCard();

	//public = class 내에 영향을 줄 수 있는 멤버들을 선언
	//CardMark m_mark; 정의된 내용을 멤버변수 m_mark로 선언
	//int m_number-> 정수형 멤버변수 m_number를 선언
public:
	CardMark m_mark;
	int m_number;
};

