#include <stdio.h>

void buyitem(int* money, int price)
{
	// �޸𸮿� ȿ������ ����, ������ ������ ���ϴ�.
	// int*money�� �������� �ʴ´�. ���� �Ӵϰ� ���ϴ� ���� ��ȯ������ �ʾƵ� �ȴ�.
	*money -= price;
}

enum ephoneType
{
 iphone = 0,
 g23,
 gfold, 
 gZ
};

struct stphoneshop
{
	int iphoneCnt;
	int g23;
	int gfold;
	int gZ;

	void printPhonecnt()
	{
		printf("iphoneCnt=%d, g23=%d, gfold=%d, gZ=%d\n", iphoneCnt, g23, gfold, gZ);
	}
};													   
	void Buyiphone(ephoneType phoneType,stphoneshop* pPs)
	{
	switch (phoneType)
	{
	case ephoneType:: iphone:
		pPs->iphoneCnt--;
		break;
	case ephoneType::g23:
		pPs->g23--;
		break;
	case ephoneType :: gfold:
		pPs->gfold--;
		break;
	case ephoneType ::gZ:
		pPs->gZ--;
		break;
	default:
		break;
	
	}
	
	pPs->iphoneCnt--; // ����Ʈ�� �����ϴ� ����ü�� ������ '->' Ű����� �����Ѵ�.
}
	// number �޾Ƽ� ȣ���Ѵ�.	
	void printnum(int* number)
	{
		printf("print number=%d\n", *number);
	}

	void printnum2(const int& number)
	{
		// number = nullptr;
		//*number = 2;
		// number = 4;
		printf("print number=%d\n", number);
	}

	void printphoneshop(const stphoneshop* ps)
	{
		printf("print iphoneCnt=%d\n", ps -> iphoneCnt);

	}


	void printphoneshop(const stphoneshop& ps)
	{
		printf("print iphoneCnt=%d\n", ps.iphoneCnt);

	}





int main()
{
	int a = 0; //4Byte
	int b = 5;
	// �����͸� ����ϴ� ����
	// �޸𸮿� ȿ������ ����, ������ ������ ���ϴ�.
	// int * pA: ������ ������ ���� (pA�� ���ִ� �ּҿ� INT���� ũ�� ��ŭ �����ϰڴ�.)
	// nullptr : ������ ������ �ʱ�ȭ �� (�ּҰ��� �������)
	// �������� null�� ����ߴµ� (null=0�� �ǹ�) 0�̶� �ǹ̰� �����ؼ� ������ �߻�
	// �ּ� ���� ��������̶�� ��Ȯ�� �ǹ̸� ���� nullptr ���
	// �����Ϳ� ũ��(x32�� 4Byte, x64���� 8Byte)
	int* pA = nullptr;
	pA = &a; // a�ּ� ���� pA�� �ִ´�. 
	// * : ���۷��� �����Ѵ�. (�ּҰ� ����Ű�� �ִ� ���� �����Ѵ�.)
	b = *pA; // b�� pA�� ����Ű�� �ִ� �ּҿ� ���� �ִ´�.
	*pA = 10; // pA�� ����Ű�� �ִ� �ּҿ� ���� 10���� �����Ѵ�.
	printf("*pa : %d, a: %d, b: %d\n",*pA, a, b);
	//-----------------------------------------------------------------------------------------//

	//int N1 = 0; // ���� ���� N1���� ���� 0
	//int N2 = 0; // ���� ���� N2���� ���� 0
	//int* pN = nullptr; //pN�̶�� ������ ���� ���� �� �� pN�� �ּҸ� �ʱ�ȭ 
	//pN = &N1; // ���� N1�� ���� �޴� �ּҸ� pN�� ���� �޴� �ּҷ� ���� 
	//*pN = 20; // pN�� 20�� ���� �ִ´� ������ ���� ���� ������� ���� N1�� ���� �޴� ���� ����
	//		  //���� ���� N1�� ���� 20�̴� �ص� ��������.
	//pN = &N2; // ���������� �ٽ� N2�� ���� ���� �ּҸ� pN�� �޴� �ּҷ� �����Ѵ�. (���ͳ� ������ ���� �� ����� �Ŷ� ����)
	//*pN = 30; // �׷� *pN�� �ּҰ��� 30�� �ִ´�. ������ ���� pN�� �޴� �ּҴ� N2�̱⿡ int N2�� ���� 30���� �ٲ��.

	//--------------------------------------------------------------------------------------------------//
	
	int money = 10000;
	buyitem(&money, 1000);
	printf("my money=%d\n", money);

	stphoneshop stPS;
	stPS.iphoneCnt = 100;
	stPS.g23 = 100;
	stPS.gfold = 100;
	stPS.gZ = 100;
	
	Buyiphone(ephoneType::gfold, &stPS);
	stPS.printPhonecnt();
	 //---------------------------------------------------------------------------------------------------------//

	// �迭�� ������

	int arrint[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int* pInt = nullptr;
	pInt = arrint;
	printf("plnt=%d\n", *pInt);
	pInt += 1;// ���� �迭 �����Ϳ� �ּҸ� ����Ų��.
	printf("plnt=%d\n", *pInt);

	short arrS[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	//(int*)�� ����Ͽ� int*�� ������ ����ȯ(Cast)�Ѵ�. �ӵȸ��� �� �̰� �´� ��� �����
	// ���ذ� �ȵǸ� �������Ʈ���� Ư�� �������Ʈ�� ���� �������Ʈ�� ��ȯ�Ҷ��� �����غ���!
	pInt = (int*)arrS;//(int*)�� ����Ͽ� int*�� ������ ����ȯ(Cast)�Ѵ�.
	pInt += 1; // pInt�� int*�̹Ƿ� int(4Byte)��ŭ ���� �ּ� ���� �����Ѵ�.
	short* pS = (short*)pInt;//int(4Byte)��ŭ �̵��� �ּ� ���� Short(2Byte) 2�� �̵��� ��
	printf("pS=%d\n", *pS);

	//x32 ��Ű���� = x86 ��Ű����
	//int32(4Byte) - 0~ 4,294,967,295(Byte)

	// �Ʒ� �迭�� ���� ���ڴ�� ��� // �̰� ���� �Ҽ� ������...?
	int arr[10] = { 10, 2, 78, 53, 6, 33, 27, 99, 7, 31 };

	for (int i = 0; i < 10; i++) 
	{
		int lowestindex = i; // ���� ���� index ����
		for (int j = i + 1; j < 10; j++) 
		{ 
			if (arr[lowestindex] > arr[j]) 
			{
				// lowestindex�� j�� ������� ���ϸ鼭 j index ���� ����
				// j index�� ���� ������ j�� ���ο� lowestindex
				lowestindex = j;
			}
		}
		// j for ���� ����Ǹ� lowestindex���� ���� ���� ���� index ���� �����
		// i�� ���������� ���鼭 ���� ���� ���� ���ߵ�
		// lowestindex ���� i index ���� ��ü�Ѵ�.
		int temp = arr[i];
		arr[i] = arr[lowestindex];
		arr[lowestindex] = temp;
	}

	// ���ĵ� �迭 ���
	printf("����: ");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", arr[i]);
	}
	
	//const ���ȭ
	// �Ǽ��� ���� �� �־�, ����� Ƚ���� ���� �� �ֵ�. (����� : ���׸� ã�ų� �����ϴ� ����)
	const int cint = 100;//���

	int value = 0;
	int value2 = 0;
	int* pvalue = &value;

	//const int* pvalue = &value; // �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� ����, ���� ����
	//int const* pvalue = &value; // �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� ����. ���� ����
	//int* const pvalue = &value; // �����Ͱ� ����Ű�� ���� ���� ����, ������ �� ���� �Ұ�, ���� ����
	//	int const* const pvalue = &value; // �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� �Ұ�, ���� ����
	*pvalue = 2;
	pvalue = &value2;
	printf("pvalue=%d\n", *pvalue);
	
	printnum(&value);
	printnum2(value);


}
	

	














