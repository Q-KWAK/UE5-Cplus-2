#include <stdio.h>

// c++ �� ������
// c++���� ����� �ۼ��� �ҽ��ڵ带 ��ǻ�Ͱ� ���� �� �ִ� �ڵ�� ��ȯ�Ͽ� ���� �� �� �ִ� ���Ϸ� ��ȯ�ϴ� ����

// 1. ��ó�� (preprocessing) �ܰ� : #include �� #define �� ���� ��ó���� ��ũ�ε��� ó���ϴ� �ܰ�
// 2. ������ (compile) �ܰ� : ������ �ҽ� ���ϵ��� ����� ��ɾ�� ��ȯ
// 3. �����(assemble) �ܰ� : ����� �ڵ���� ���� ��Ծ�� �̷���� ���� �ڵ� (object file)�� ��ȯ�ϴ� �ܰ�
// 4. ��ŷ(linking) �ܰ� : ������ ���� �ڵ���� �ѵ� ��� �ϳ��� ���� ������ �����ϴ� �ܰ� 


//�޸� ����
// 1. Code ���� : ���� �� �ڵ尡 ����Ǿ� �ִ� ����(����� ����)
// 2. Data ���� : ��������, Static �������� ����, ���μ����� ����ɶ����� �޸𸮿� ����
// 3. Stack ����: ��������, �Ű��������� ����, �Լ��� ȣ��Ǹ� �����ǰ� �Լ��� ����Ǹ� �ý��ۿ� ��ȯ
// 4. Heap ���� : malloc �Ǵ� new �Լ��� ���ؼ� �������� �Ҵ�Ǵ� ����, molloc() or new �����ڷ� �Ҵ�, free() or delate �����ڷ� ����

//int g_Money =  0; // �������� ��ü ���α׷� �󿡼� ��� ���̴� ���� (���̾��� �޸� ���� �ɷ���)
//
//static int s_Money = 0; // static ������ DATA ������ ����, ������ ����ȴ�. ������ CPP�� �����ϱ� ��
//						// �ٸ� CPP ���� ���ȉ�
//#include "money.h"

#include "calcfunc.h"

int ADD(int a, int b)
{
	printf("int ADD�� ���\n");
	return a + b;
}

float ADD2(float a, float b)
{
	printf("float ADD�� ���\n");
	return a + b;
}

double ADD3(double a, double b)
{
	printf("doble ADD�� ���\n");
	return a + b;
}

struct fruitshop
//struct�� ����ü�� ����ü�� int main �ٱ����ٰ� ������ ����X
//����ü ���� ������ ������ ����ü�� ������� ������ ������� �ʴ´�.
{
	int appleA;
	int mangoA;
	int pearA;

	//����ü ������ ":" ���� �����ʿ� ������ �ʱⰪ�� �����Ѵ�.
	fruitshop() : appleA(1000), mangoA(1000), pearA(1000)
	{

	}
	//����ü�� �Լ� ���� -> ����ü���� �Լ��� ����� �ִ�.
	void setfruitvalue(int apple, int mango, int pear)
	{
		int appleB = apple; // setfruitvalue �Լ��� ����Ǹ� �������.
		appleA = apple;
		mangoA = mango;
		pearA = pear;
	}
	//����ü�� ����ϴ� �Լ��� �����ϸ� ���ϰ� �̿��� ���ִ�.
	void printshopvalue()
	{
		printf("���ϰ��� ���� ���:%d, ����:%d, ��:%d\n", appleA, mangoA, pearA);
	}
};
struct Phoneshop
{
	int iphone; int zflip; int s23; int fold;
	Phoneshop() : iphone(100), zflip(100), s23(100), fold(100)
	{}
	void setPhonevalue(int niphone, int nzflip, int ns23, int nfold)
	{
		
		iphone = niphone;
		zflip = nzflip; 
		s23 = ns23; 
		fold = nfold;
	}
	void printShopvalue()
	{
		printf("�츮���� ���� ���� ������: %d, ��Ʈ�ø� : %d, s23 : %d, ���� : %d\n", iphone, zflip, s23, fold
		);
	}


};






int main()
{
	//int t_Money = 0; // �������� Ư�� �Լ� �������� ����Ǵ� ����
	//addMoney(100);
	//addMoney(100);
	//addMoney(100);
	//addMoney(100);
	//addMoney(100); // ��ũ�� ����// ��ũ�� �ǽ�

	/*printf("main t_Money=%d\n", t_Money);
	printf("main g_Money=%d\n", g_Money);*/ // ��ũ�� �ǽ�

	/*bool bRun = true;*/
	/*while (bRun)
	{
		int nlput = 0;
		int num1, num2;

		printf(("� ������ �Ͻðڽ��ϱ�? 0: +,2: *, 3: /, 4: % "));
		scanf_s("%d", &nlput);

		switch (nlput)
		{
		case 0:
		{
			printf("���� 2���� �Է�(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d\n", add(num1, num2));
		}
		break;

		case 1:
		{
			printf("���� 2���� �Է�(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d\n", minus(num1, num2));
		}
		break;

		case 2:
		{
			printf("���� 2���� �Է�(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %d\n", multi(num1, num2));
		}
		break;
		case 3:
		{
			printf("���� 2���� �Է�(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� ���� %e\n", divide(num1, num2));
		}
		break;

		case 4:
		{
			printf("���� 2���� �Է�(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("�μ��� �������� %d\n", remain(num1, num2));
		}
		break;
		}



		printf("���⸦ �����Ͻðڽ��ϱ�?(0:N 1:Y)");
		scanf_s("%d", &nlput);

		switch (nlput)
		{
		case 1:
			bRun = false;
			break;
		}
	//}
	/*ADD(1);
	ADD2(1.0f, 1.0f); //f�� ���̰� �Ǽ��� ���� �÷���
	ADD3(1.0, 1.0);*/ //f�� �Ⱥ��̰� �Ǽ��� ���� ������

	// �迭
	// int arrInt[10] = {0}; // ���� 0���� �ʱ�ȭ
	// int arrInt[10] = {0 ,}; // ���� 0���� �ʱ�ȭ
	int arrInt[10] = { 0, 1 , 2 , 3 , 4,  5 , 6 , 7 , 8 , 9 };//�迭 ���� �� ������ �迭�� �ʱⰪ �ִ� ���
	arrInt[0] = 10; //�迭 1��° ���� �ֱ�
	arrInt[4] = 40; //�迭 5��°�� ���� �ֱ�
	arrInt[9] = 90;// 0�� ���� �迭�� ���۵ǹǷ� 10��° �迭�� 9��

	for (int i = 0; i < 10; i++)
	{
		printf("%d��° �迭 ���� %d�Դϴ�.\n", i, arrInt[ i ]); // 2�� �̻��� �Ķ���� ��¹�
	}

	int number = 0;
	// for each ����: �迭������ ����� �����ϰ�, �迭 ������ ��� �Է����ִ� ���� �����⿡.
	//                Ư�� �迭�� ��� ����ϸ� �������� �������⿡ �迭 ���� ũ�⸸ ������ ���̴�.
	for (int value : arrInt) 
		                    
	{
		printf("%d��° �迭 ���� %d�Դϴ�.\n", number, value);
		number++;
	}

	
	fruitshop shop[3];
	// sturct�� ���
	// fruitshop : ������
	// shop : ������ �̸�
	// ������ �̸� ����.�� ���� ����ü ����Ҽ� �ִ�.  
	//shop.appleA = 1000; //shop�� appleA ������ �� �ֱ�
	//shop.mangoA = 2000;
	//shop.pearA = 3000;
	shop[0].setfruitvalue(1000, 2000, 3000);
	shop[1].setfruitvalue(1100, 2100, 3100);
	shop[2].setfruitvalue(900, 1900, 2900);
	
	for (fruitshop stvalue : shop)
	{
		stvalue.printshopvalue();
	}

	Phoneshop phoneshop[3];
	phoneshop[0].setPhonevalue(100, 90, 80, 150);
	phoneshop[1].setPhonevalue(110, 100, 90, 160);
	phoneshop[2].setPhonevalue(90, 80, 70, 140);

	for ( Phoneshop Stvalue : phoneshop)
	{
		Stvalue.printShopvalue();
	}


	






}


		
