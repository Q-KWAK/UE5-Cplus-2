#pragma once

#include <string>

enum CardMark // ���������� ����(����!=0)�� �����Ѵ�
	//�迭�� ����� ���� 0�̶�� �������� ������ �˾Ƽ� ��ȣ�� �Ű���
{
	//��ȣ�ȿ� ��ǻ�Ϳ��� ������ �ɾ��ִ� �� �����Ǵ°��� �ƴϾ� ����. �����̶��
	//ex) 1���� ��Ű�۴�, 9���� ��Ʈ����Ŀ, 6���� ����, 8���� �߹� 
	None = 0,
	Clover,//1
	Heart,//2
	Dia,//3
	Spade,//4
	MaxMark //5
};

class CCard
{
	//public = class ���� ������ �� �� �ִ� ������� ����
	//CCard = ������ -> class�� �����ɶ� ȣ��Ǵ� '�Լ�'
	//(CardMark mark -> ���������� ������ ���ڸ� mark��� ������ ���� 
	// = CardMark::None, -> CardMark ���ο� none�� ������ ���� �����Ѵ�
	// int number = 0)  -> ������ ���� number �� 0�� �����Ѵ�
public:
	CCard(CardMark mark = CardMark::None, int number = 0);

	//std :: -> ���Ĵٵ� Ŭ���� ǥ�� ���̺귯���� �ִ� ���� Ȥ�� �Լ��� �������ڴ�
	//string -> ��Ʈ���̶�� ����
	//GetMarkStr() - > �Լ��� 
	std::string GetMarkStr();
	
	std::string GetCardStr();

	//void -> ��ȯ���� �ʰڴ�
	//printCard() -> �� �Լ���
	void printCard();

	//public = class ���� ������ �� �� �ִ� ������� ����
	//CardMark m_mark; ���ǵ� ������ ������� m_mark�� ����
	//int m_number-> ������ ������� m_number�� ����
public:
	CardMark m_mark;
	int m_number;
};

