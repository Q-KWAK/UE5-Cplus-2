#include <stdio.h>

	//�Լ���
	// unsigned int : ��ȯ �ڷ���
	// calculatorsum : �Լ� �̸�
	// (int x, int y) : �Ű����� (�Ķ��Ÿ)
	// �Լ��� int main�� ������ �ʴ´�. ����.

	// ���ϱ� �Լ� �����
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
			printf("fx started.\n"); //\n ���� -> enter �ļ� ����Ѵٴ� ���̴�.
			return x % y;
		}
		
	//factorial �Լ�
		int factorial(int Num) //int ���丮���̶�� �Լ��� (int NUMBER)��  ����.
		{
			int FacResult = 1; // ��Ʈ �Ѹ���Ʈ �� 1�� ���Եȴ�
			for (int i = Num; i > 0; --i) // ��Ʈ ���� i�� �Լ� ���ڸ� �ִ´�. 
										  //i�� ������ Ŭ �� ������ �۵�
			{
				FacResult *= i; // �Ѹ���Ʈ ������ ������  (1) *(���� i�� 5�� ����) 
				                // �׷��� 5*1 ���� �Ѹ���Ʈ�� ���Եǰ�, for�� ������ i ���� -1�� ����ȴ�
								// �ٽ� i���� 4�� 0���� Ŀ���⿡ �ݺ��ǰ� ������ �Ѹ���Ʈ�� 5�̱⿡ 5*4 ����
								
			}	
			return FacResult;	// ���� fasle ���� ���� �� ���� ���� �Ǿ��⿡ ��ȯ�ϰ� �����Ѵ�.
		} 
		void callfunction()
		{
		 printf("fx called!\n");
		}
	
	// Sigema �Լ� ���� ��.
		int Sigema(int Num)
		{
			int SigResult = 1;
			for (int i = Num; i > 0; --i)
			{
				SigResult += i;
			}
			return SigResult;
		}
		
	 //factorial�� �ٸ��� �����ϴ� �� (����Լ��� ����)
		int ReFactorial(int Num)
		{
			if (Num == 1)
			{
				return 1;
			}
			return Num * ReFactorial(Num - 1); // �Լ��� �Ϸ���� ������ ��� ȣ��ȴ�.(ReFactorial)
		}									   // �� ����� �޸� ������ ������ ��

	 //0~ N Ȧ����,���ϱ� 
		int ex(int Num)
		{
			int exResult = 0;
			for (int i = Num; i > 0; --i)
			{
				if (i % 2 == 0) //  (������ 2�� ���� �������� 0�� ������ ¦�� ���� ������ Ȧ�� )
					continue;
				exResult += i;
			}
			return exResult;
		}
	 
	// while ��ȭ
		int AAA()
		{
			while (1)
			{
				printf("1st while! start\n");
				break; // �극��ũ�� �׳� ���� ���� ���� �Ѿ
				printf("1st while! end\n");

			}

			while (1)
			{
				printf("2nd while! start \n");
				return 0; // ������ �׳� �Լ� ����.
				printf("2nd while! start \n");
			}

			while (1)
			{
				printf("3rd while! start \n");
				break;
				printf("3rd while! start \n");

			}
		}






int main() //�������� ������ �����Լ��� ���� ���۵ȴ�.
{
			/*unsigned int nResult = 0;
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
			callfunction();*/ 
			//���� �ȿ��� �ּ� ó�� �ϴ°��� ��������.

		//// �ݺ���
		//// for��
		//	for (/*�ʱ⼳��*/ int i = 0;/*�ݺ�����üũ*/ i < 10; /*�ݺ� �� ó��*/++i)
		//	{// �ݺ� ó�� �� �ڵ� ����

		//		printf("%d hello\n",i);
		//	}// �ݺ� ó���� �ڵ� ��
		//	
		//	/*for (int i = 0; i < 10; ++i)
		//	{
		//		printf("hello\n");
		//	}*/

		//	int a = 0;
		//	for (; a < 5; ++a)
		//	{
		//		printf("helloA\n");
		//	}

		//	for (int b = 0; b < 10; b += 2) // �׷��ϱ� b+b�� �� ��¥ �� ���ϱ� �� �� b += b+2�̴�.
		//	{
		//		printf("helloB\n");
		//	}

			// for �� �ȿ� ������ �ܺο��� ����� �ص� ������ ��ġ�� ������,
			// �ܺο��� ȣ���� ������ for���� �ְ� �ٽ� ������ �����ϱ� ���� �� �����ϸ� ���� �߻�!

			//factorial
			//5! ���ض� ��� ������ ��
			// 5+4+3+2+1=15;`
		//int FacResult = 1;
		//for (int i = 1; i <= 10;++i)
		//{
		//	FacResult *= i;
		//}

		//int FacNum = 4;
		//for (int i = FacNum; i > 0; --i)
		//{
		//	FacResult *= i;
		//}
		
		
		//int nResult = 0;
		//int i = 1;
		//while (i <= 10)/*���ǽ�*/
		//
		//	// �� ���ǽ��� ���̸�, �ڵ带 ���� 
		//	// �� ���ǽ��� �����̸�, while �� ���� ���� �ڵ� ����
		//{//�ݺ� ó�� �ڵ� ����
		//	nResult *= i;
		//	i++;
		//}//�ݺ� ó�� ���� 
	
		//break; �� ��ɾ�� while ���� ��� �����Ѵ�. ���� �ڵ�� ���� ������� ����.

		/*printf("Facsult = %d\n", factorial(10));
		printf("SigResult = %d\n", Sigema(10));
		printf("ReFactorial result = %d\n", ReFactorial(10));
		printf("while fac = %d", nResult);*/

	//int i = 0, Num = 10;
	//int nR = 0;
	//while (i <= Num) // while�� ����
	//{
	//	i++;
	//	if (i % 2 != 0)
	//		continue; // ���� �ڵ� ����x ���� while �ڵ� ����
	//	{
	//		nR += i;
	//	}

	//}
	//printf("0 ~ N Enenadd = %d", nR);

	// ���� �ڵ带 for ������ �ٲٸ�? ���� �Լ� �������� 89�� ��
	printf("issue for = %d\n", ex(10));
	AAA();

}


