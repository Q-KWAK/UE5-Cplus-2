#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "card.h"
#include <random>

/*
* 1. 52개의 카드로 진행, 52개의 카드는 무작위로 셔플
* 2. 게임이 시작되면 카드 하나를 오픈합니다
* 3. 플레이어는 다음 카드가 오픈된 카드보다 높은 카드인지 낮은 카드인지에 대해 배팅
* 4. 다음 카드를 올픈하고 높은지 낮은지에 대한 선택이 맞으면 승리 틀리면 패배
* 5. 카드는 1이 가장 낮고 k가 가장 높다 같은 숫자라면 높은 문양의 카드가 승리
* 6. 문양은 스>다>하>클 순
*/
void Shuffle(std::vector<CCard>& Cards)
{
	//표준 기능 random_device를 가져오고 이것을 rd라고 선언한다. 
	std::random_device rd;
	// random_device <사용법>
	// 1234은 시드(seed)값이라고 해서 초기에 주어지는 키값
	// 같은 시드면은 랜덤 숫자가 정하게 나온다.
	// std::mt19937 mt(1234); 
	
	// mt19937라는 표준 기능을 호출하고 이것을 mt라는 지역변수를 만들어 선언하겠다.mt라는 변수를 (rd라는 표준기능을 이용해서 무작위적으로 채운다)
	std::mt19937 mt(rd.entropy());// 시드 값도 랜덤으로 부여해서 거의 같은 결과가 나오지 않는다.
	
	//uniform_int_distribution<> 난수 속 정수를 균일 분포 기능
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1);
	//랜덤 값이 나오는 범위를 지정 
	//(0, Cards.size() - 1) -> 0부터 card.size(0{카드갯수} -1만큼

															//저 위의 3줄은 동반자 

	//  int i = 0; for 문의 초기설정 
	//	i < 100;  for 문의 반복 조건 (i가 100보다 작다) 아니면 종료
	//  i++ 반복이 시행되는 동안 발생
	for (int i = 0; i < 100; i++)
	{	
		//정수형 변수 firstIndex에 dist(mt)를 넣는다.
		int firstIndex = dist(mt);
		//정수형 변수 secondIndex에 dist(mt)를 넣는다.
		int secondIndex = dist(mt);
									
		
		//A는 덱의 위치
		CCard temp = Cards[firstIndex]; // A
		//B는 숫자
		Cards[firstIndex] = Cards[secondIndex];// B
		Cards[secondIndex] = temp; // C 
	}



}

// 함수이름 : CompareCard
// 파라메타 : const CCard& CardA, const CCard& CardB
// 반환값 : bool
// 함수기능 : CardA와 CardB를 비교하여 CardA가 크다면 true, CardB가 크면 false 반환 

//const를 붙힌 이유는 배열 내 값을 참조만 하고 변경하지 않게 하기 위해서 붙임
bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark;

	return ScoreA > ScoreB;
}



int main()
{	//std::vector-> 기본적인 라이브러리 요소 vector를 호출한다 
	//<CCard>라는 class를 배열화하고 이것을 Cards라고 선언한다.
	std::vector<CCard> Cards;
	//(int i = CardMark::Clover) -> 초기 설정한다 (CardMark::Clover == 1)
	//(i < CardMark::MaxMark) -> 반복하는 조건체크 (CardMark::MaxMark == 5)
	//(++i) -> 반복하는 후 처리 i에 1을 더한다.
	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		// int j = 1; 초기 설정 (변수형 j에 1을 대입한다.)
		// j <= 13; 반복조건 (j는 13과 작거나 같다) 아니면 종료
		// ++j 반복 후 행동 (j에 +1한다)
		for (int j = 1; j <= 13; ++j)
		{
			//CCard라는 class에 card라고 선언
			CCard card;
			//card.m_mark에 (CardMark)라는 문자열값을 i라 한다
			card.m_mark = (CardMark)i;
			//card.m_number j를 넣는다
			card.m_number = j;
			//Cards 배열뒤에 card를 넣는다.
			Cards.push_back(card);
		}

		//이 for 문이 하는 역할은 각 문양과 숫자가 매칭된 카드를 만들고 
		//마지막에 배열에 넣어주는 것을 말한다.
	}

	//Shuffle이라는 함수를 동작
	Shuffle(Cards);

	// bRun이라는 참 거짓만을 따지는 변수 bool을 생성
	bool bRun = true;
	// int i이라는 공간에 0 대입
	int i = 0;

	// bRun이 참일 경우 계속 반복인데 위에 bool을 오로지 참으로 만들어놔서 무한작동
	while (bRun)
	{

		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str());

		int input = 0;//input = 1 이면 Cards[0] 높다.
		printf("두번째 카드가 높으면 0, 낮으면 1을 입력해주세요 : ");
		scanf_s("%d", &input);
		system("cls");

		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str());
		printf("두번째 카드는 %s 입니다.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 이면 Cards[0] 높다.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);

		if (IsFirstHigh == input)
		{
			printf("WIN.\n");
		}
		else
		{
			printf("LOSE.\n");
		}

		i += 2;
	}

	

	//	for (CCard& card : Cards)
	//	{
	//		card.printCard();
	//	}
	//}
}


