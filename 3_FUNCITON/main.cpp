#include <stdio.h>

//�Լ���
// unsigned int : ��ȯ �ڷ���
// calculatorsum : �Լ� �̸�
// (int x, int y) : �Ű����� (�Ķ��Ÿ)

unsigned int calculatorsum(int x, int y)
{// �Լ� ����
	printf("fx started.\n");
	return x + y; // ��ȯ �� ���� ó��

	printf("fx ended.\n");
}// �Լ� ��

	// ���� �Լ� ����� 
	// calculatorminus
		unsigned int calculatorminus(int x, int y)
		{
			printf("fx started.\n");
			return x - y;
		}
		
	// ���ϱ� �Լ� �����
	// calculatormultiply
		unsigned int calculatormultiply(int x, int y)
		{
			printf("fx started.\n");
			return x * y;
		}
		
	// ������ �Լ� �����
	// calculatordivide
		unsigned int calculatordivide(int x, int y)
		{
			printf("fx started.\n");
			return x / y;
		}
	// ������ �Լ� �����
	// calculatorremain
		unsigned int calculatorremain(int x, int y)
		{
			printf("fx started.\n");
			return x % y;
		}
		
		void callfunction()
		{
		 printf("fx called!\n");
		}

		int main()
		{
			unsigned int nResult = 0;
			nResult = calculatorsum(1, 1);
			printf("f(sum) = %d\n", nResult);
			nResult = calculatorminus(5, 1);
			printf("f(minus) = %d\n", nResult);
			nResult = calculatormultiply(5, 20);
			printf("f(multi) = %d\n", nResult);
			nResult = calculatordivide(100, 10);
			printf("f(divide) = %d\n", nResult);
			nResult = calculatorremain(8, 3);
			printf("f(remain) = %d\n", nResult);
			callfunction();







}