#include <stdio.h>
#include "myclass.h"


struct MyStruct //������
{
	int a;
};


class CMyClass//������
{


	int m_b; //Ŭ���� �ȿ� ����� ������ ��� ������� �Ѵ�. (�����ڵ��� ���������� ���������°� ǥ���ϱ� ���� m_�� ���̱⵵ �Ѵ�.)

public:
	//������
	//Ŭ������ �����ɶ� ȣ��Ǵ� �Լ�
	//���� ���� �ʾƵ� �⺻ �����ڰ� ����
	//�����ڵ� private���� �ܺο��� ȣ�� �Ұ�, �ݵ�� public���� ����
	//�����ڵ� �Ķ��Ÿ�� ������ Ÿ�Կ� ���� overload(Ÿ�� �� ���� �� �Լ��� ����) �� �� �ִ�.
	//(int valueA) �̷� ������� ������ �Ķ��Ÿ�� �־��� �� �ִ�.
	// (valueA), m_b(0), c(0)<-�̷�������� ������ ��� ������ �ʱ� ���� ������ �� �ִ�.
	//�Ķ��Ÿ ������ ���°� �Է¹�Ŀ� ���� ������ �Ұ��� �ϸ� ������ �߻�

CMyClass(int valueA) : a(valueA), m_b(0), c(0)
{
	printf("������Aȣ��\n");
}
//�ı���
//Ŭ������ �ı��� �� ȣ��Ǵ� �Լ�
//���� ���� �ʾƵ� �⺻ �ı��� ����
//�ı��ڵ� public�� �ƴϸ� ȣ���� �Ұ���,�ݵ�� public���� ����
CMyClass(int valueA,int valueB) : a(valueA), m_b(valueB), c(0)
{
	printf("������Bȣ��\n");
}

CMyClass(int valueA, int valueB, int valueC) : a(valueA), m_b(valueB), c(valueC)
{
	printf("������Cȣ��\n");
}
~CMyClass()
{
	printf("�ı���ȣ��\n");
}
void printb()
{
	printf("b=%d", m_b);
}

void printallvalue()
{
	printf("a=%d, b=%d, c=%d\n", a, m_b, c);
}

void setc(int num)
{
	// �Ϲ������� this Ű����� ������
	// this Ŭ���� �ȿ� �Լ��� ȣ���� ��� ��ü�� �ǹ���
	this->c = num;
}


//������ �����ε�(operator overloading)
//���� ������(�⺻������ ������)
//const CMyClass& : �������� ��ȯ�� ������
//operator = ; �����ε� �� ������
//(const CMyClass& other) : �����ʿ� �Էµ� ����

// cmy3 = cmy+ cmy2
// cmy3 = CMyClass(a + other.a, m_b + other.m_b, c + other.c);
const CMyClass& operator = (const CMyClass& other)
{
	a = other.a;
	m_b = other.m_b;
	c = other.c;

	return *this;
}

const CMyClass& operator = (const CMyClass& other)
{
	return CMyClass(a + other.a, m_b + other.m_b, c + other.c);
}
public :
	int a;
protected :
private:
	int c;

};

int main()
{
	{
		//���۷��� ����
		//�޸� ������ ���� �ʰ� ������ �����Ͽ� �޸𸮸� ȿ�������� ����ϱ� ���� ������
		int num = 100;
		MyStruct sttest;
		
		//������ ������ ������ ������ �ּҰ��� �����Ѵ�
		//������ ������ �ּҰ��� ������ ����Ű�� �ִ� �ּ� ���� �ٸ���.
		int* pnum = &num;//pnum ������ �������� num�� �ּ� ���� ���� �� pnum�� num������ ����Ű�� �ִ�.
		MyStruct* ptest = &sttest;
		ptest->a = 0;
		printf("&pnum ! = &num ? %d\n", int(&pnum) != int(&num));
		//���۷��� ������ ���� ����� �ּ� ���� ����
		int& refnum = num;
		MyStruct& retest = sttest;
		retest.a = 0;
		printf("&refnum == &num ? %d\n", (int(&refnum) == int(&num)));

	}
	MyStruct stmy;
	stmy.a = 0;

	CMyClass cmy(100);//->������a ȣ���
	CMyClass cmy2(100,200);//->������b ȣ���
	cmy.a = 0;
	cmy.setc(0);
	cmy.setc(10);//Ư�� ������ �����ϱ� ���� �Լ��� �����ؼ� �����ϴ°� �⺻��Ģ
	//cmy.setc(100);//���� ������ private�� �Ǿ��ִٸ� �����ڰ� ���� �������� ����� �ǵ��� �ִ�
	
	CMyClass aa;


	CMyClass cmy3:
	cmy.a = 1000;
	cmy.printallvalue();
	cmy2.printallvalue();
	cmy3 = cmy+cmy2;
	cmy3.printallvalue();
	







}// �İ��� ȣ���/