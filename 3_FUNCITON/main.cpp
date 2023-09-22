#include <stdio.h>

//함수형
// unsigned int : 반환 자료형
// calculatorsum : 함수 이름
// (int x, int y) : 매개변수 (파라메타)

unsigned int calculatorsum(int x, int y)
{// 함수 시작
	printf("fx started.\n");
	return x + y; // 반환 및 종료 처리

	printf("fx ended.\n");
}// 함수 끝

	// 빼기 함수 만들기 
	// calculatorminus
		unsigned int calculatorminus(int x, int y)
		{
			printf("fx started.\n");
			return x - y;
		}
		
	// 곱하기 함수 만들기
	// calculatormultiply
		unsigned int calculatormultiply(int x, int y)
		{
			printf("fx started.\n");
			return x * y;
		}
		
	// 나누기 함수 만들기
	// calculatordivide
		unsigned int calculatordivide(int x, int y)
		{
			printf("fx started.\n");
			return x / y;
		}
	// 나머지 함수 만들기
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