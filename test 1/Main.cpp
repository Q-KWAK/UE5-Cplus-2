#include <stdio.h>
#include <iostream>




//for (/*�ʱ⼳��*/ int i = 0;/*�ݺ�����üũ*/ i < 10; /*�ݺ� �� ó��*/++i)
	//	{// �ݺ� ó�� �� �ڵ� ����

	//		printf("%d hello\n",i);
	//	}// �ݺ� ó���� �ڵ� ��
	//	
	//	/*for (int i = 0; i < 10; ++i)
	//	{
	//		printf("hello\n");
	//	}*/


//{ int a = 0;
	//std::cin >> a;
	//std::cout << a << "�� �Է��ϼ̽��ϴ�";


int main()
{
	////Q1
	//// 2�� ��� ��� �ϱ� (0~100)
	//// 0 2 4 6 8~
	//// 0~100���� 2�� ��� ���
	//
	//int n = 100;
	//int i = 0;
	//int count = 0; // ��� Ƚ���� ������ ����
	////1������ �۵�, ���� for ��ȣ �ȿ� ���� ó�� for�� ���� ���Ͻ� 3������, �����Ͻ� 3�� ó�� ���ϰ� �ٽ� 2�� i���� ���� 1������ 
	//// 1��       2��    3��
	//// |		  |		|
	//// V		  V	    V
	////for�� ���۽� �ʱ⼳�� int i = n �۵�
	//// i>=0��, ���Ͻ� for{}���� ������ �۵� �ƴϸ� for�� ����
	//// for{}���� ������ ����� --i�� �۵�
	//for (int i = n; i >= 0; --i)	
	//{
	//	if (i % 2 == 0)
	//	{ //continue; // continue�� ������ for()�� �ٽ� �ݺ��Ѵ�.
	//		++count; // ¦���� ����� ������ count�� ����
	//		printf("%d\n",i);
	//	}
	//	//return n;    // return �� ������ �Լ� ��ü�� ����.
	//}
	//printf("Ƚ��: %d\n", count); // ��µ� Ƚ�� ���
	//
	
	//Q2 n�� ���� �ϳ��� �Է� �ޱ�
	//	 n�� ��� ����ϱ�
		//int n = 100;
		//int i = 0;
		//int count = 0;
		//int nt = 1;

		//printf("nt?: ");
		//scanf_s("%d", &nt);
		//printf("nt = %d\n", nt);
	
		//for (int i = n; i >= 0; --i)
		//{

		//		if (i % nt == 0)
		//		{ //continue; // continue�� ������ for()�� �ٽ� �ݺ��Ѵ�.
		//			++count; // ¦���� ����� ������ count�� ����
		//			printf("%d\n", i);
		//		}
		//		//return n;    // return �� ������ �Լ� ��ü�� ����.
		//}
	
		//printf("Ƚ��: %d\n", count); // ��µ� Ƚ�� ���

	
	//Q3 abcdef�� ������ ����ϱ� 
		wchar_t swichinput[20] = L"abcdef";
		
		//wchar_t ������  ���� �Է� �ޱ�
		//wchar_t ��������
		//[20]�� ũ��� �����ϰ�
		//L""���� �ʱⰪ���� �ִ´�.
		wchar_t swichinput[20] = L"";
		
		// wchar_s�� �Է��� �޴� ����� ����ϰڴ�.
		// L"%|s" �������·� �Է��� �ްڴ�.
		// "swichinput"������ �Է��� ���� �־��ְڴ�.
		// "(unsigned)_contof(swichinput)" �� ���� ���� ������ ũ��
		wscanf_s(L"%S", swichinput , (unsigned)_countof(swichinput));
		
		//wprintf�� ����� �ϴ� ��� ����ϰڴ�.
		//L"swichinput=%s" ���� ���·� ����ϰڴ�.
		//%s��ġ�� swichinput ���� ����ϰڴ�.
		wprintf(L"swichinput=%s", swichinput);

	//Q4
	//�Է� ���� ���ڿ����� 'a'���� ���� ���

}