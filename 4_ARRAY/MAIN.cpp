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


	bool bRun = true;
	while (bRun)
	{
		int nlput = 0;
		int num1, num2;

		printf("� ������ �Ͻðڽ��ϱ�? 0: +,2: *, 3: /, 4: % ): ");
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
			printf("�μ��� ���� %d\n", divide(num1, num2));
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



	}









}
