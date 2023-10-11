#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "card.h"
#include <random>

/*
* 1. 52���� ī��� ����, 52���� ī��� �������� ����
* 2. ������ ���۵Ǹ� ī�� �ϳ��� �����մϴ�
* 3. �÷��̾�� ���� ī�尡 ���µ� ī�庸�� ���� ī������ ���� ī�������� ���� ����
* 4. ���� ī�带 �����ϰ� ������ �������� ���� ������ ������ �¸� Ʋ���� �й�
* 5. ī��� 1�� ���� ���� k�� ���� ���� ���� ���ڶ�� ���� ������ ī�尡 �¸�
* 6. ������ ��>��>��>Ŭ ��
*/
void Shuffle(std::vector<CCard>& Cards)
{
	//ǥ�� ��� random_device�� �������� �̰��� rd��� �����Ѵ�. 
	std::random_device rd;
	// random_device <����>
	// 1234�� �õ�(seed)���̶�� �ؼ� �ʱ⿡ �־����� Ű��
	// ���� �õ���� ���� ���ڰ� ���ϰ� ���´�.
	// std::mt19937 mt(1234); 
	
	// mt19937��� ǥ�� ����� ȣ���ϰ� �̰��� mt��� ���������� ����� �����ϰڴ�.mt��� ������ (rd��� ǥ�ر���� �̿��ؼ� ������������ ä���)
	std::mt19937 mt(rd.entropy());// �õ� ���� �������� �ο��ؼ� ���� ���� ����� ������ �ʴ´�.
	
	//uniform_int_distribution<> ���� �� ������ ���� ���� ���
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1);
	//���� ���� ������ ������ ���� 
	//(0, Cards.size() - 1) -> 0���� card.size(0{ī�尹��} -1��ŭ

															//�� ���� 3���� ������ 

	//  int i = 0; for ���� �ʱ⼳�� 
	//	i < 100;  for ���� �ݺ� ���� (i�� 100���� �۴�) �ƴϸ� ����
	//  i++ �ݺ��� ����Ǵ� ���� �߻�
	for (int i = 0; i < 100; i++)
	{	
		//������ ���� firstIndex�� dist(mt)�� �ִ´�.
		int firstIndex = dist(mt);
		//������ ���� secondIndex�� dist(mt)�� �ִ´�.
		int secondIndex = dist(mt);
									
		
		//A�� ���� ��ġ
		CCard temp = Cards[firstIndex]; // A
		//B�� ����
		Cards[firstIndex] = Cards[secondIndex];// B
		Cards[secondIndex] = temp; // C 
	}



}

// �Լ��̸� : CompareCard
// �Ķ��Ÿ : const CCard& CardA, const CCard& CardB
// ��ȯ�� : bool
// �Լ���� : CardA�� CardB�� ���Ͽ� CardA�� ũ�ٸ� true, CardB�� ũ�� false ��ȯ 

//const�� ���� ������ �迭 �� ���� ������ �ϰ� �������� �ʰ� �ϱ� ���ؼ� ����
bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark;

	return ScoreA > ScoreB;
}



int main()
{	//std::vector-> �⺻���� ���̺귯�� ��� vector�� ȣ���Ѵ� 
	//<CCard>��� class�� �迭ȭ�ϰ� �̰��� Cards��� �����Ѵ�.
	std::vector<CCard> Cards;
	//(int i = CardMark::Clover) -> �ʱ� �����Ѵ� (CardMark::Clover == 1)
	//(i < CardMark::MaxMark) -> �ݺ��ϴ� ����üũ (CardMark::MaxMark == 5)
	//(++i) -> �ݺ��ϴ� �� ó�� i�� 1�� ���Ѵ�.
	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		// int j = 1; �ʱ� ���� (������ j�� 1�� �����Ѵ�.)
		// j <= 13; �ݺ����� (j�� 13�� �۰ų� ����) �ƴϸ� ����
		// ++j �ݺ� �� �ൿ (j�� +1�Ѵ�)
		for (int j = 1; j <= 13; ++j)
		{
			//CCard��� class�� card��� ����
			CCard card;
			//card.m_mark�� (CardMark)��� ���ڿ����� i�� �Ѵ�
			card.m_mark = (CardMark)i;
			//card.m_number j�� �ִ´�
			card.m_number = j;
			//Cards �迭�ڿ� card�� �ִ´�.
			Cards.push_back(card);
		}

		//�� for ���� �ϴ� ������ �� ����� ���ڰ� ��Ī�� ī�带 ����� 
		//�������� �迭�� �־��ִ� ���� ���Ѵ�.
	}

	//Shuffle�̶�� �Լ��� ����
	Shuffle(Cards);

	// bRun�̶�� �� �������� ������ ���� bool�� ����
	bool bRun = true;
	// int i�̶�� ������ 0 ����
	int i = 0;

	// bRun�� ���� ��� ��� �ݺ��ε� ���� bool�� ������ ������ �������� �����۵�
	while (bRun)
	{

		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());

		int input = 0;//input = 1 �̸� Cards[0] ����.
		printf("�ι�° ī�尡 ������ 0, ������ 1�� �Է����ּ��� : ");
		scanf_s("%d", &input);
		system("cls");

		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());
		printf("�ι�° ī��� %s �Դϴ�.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 �̸� Cards[0] ����.
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


