#include <stdio.h>

	//함수형
	// unsigned int : 반환 자료형
	// calculatorsum : 함수 이름
	// (int x, int y) : 매개변수 (파라메타)
	// 함수는 int main에 만들지 않는다. 제발.

	// 더하기 함수 만들기
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
			printf("fx started.\n"); //\n 계행 -> enter 쳐서 출력한다는 말이다.
			return x % y;
		}
		
	//factorial 함수
		int factorial(int Num) //int 팩토리얼이라는 함수는 (int NUMBER)가  들어간다.
		{
			int FacResult = 1; // 인트 팩리슐트 에 1이 대입된다
			for (int i = Num; i > 0; --i) // 인트 변수 i에 함수 숫자를 넣는다. 
										  //i가 열보다 클 때 다음줄 작동
			{
				FacResult *= i; // 팩리슐트 변수에 지금은  (1) *(현재 i는 5로 설정) 
				                // 그러면 5*1 값이 팩리슐트에 대입되고, for문 마지막 i 값에 -1이 시행된다
								// 다시 i값이 4로 0보다 커졌기에 반복되고 이제는 팩리슐트가 5이기에 5*4 시행
								
			}	
			return FacResult;	// 이제 fasle 값이 나올 때 까지 시행 되었기에 반환하고 종료한다.
		} 
		void callfunction()
		{
		 printf("fx called!\n");
		}
	
	// Sigema 함수 예제 완.
		int Sigema(int Num)
		{
			int SigResult = 1;
			for (int i = Num; i > 0; --i)
			{
				SigResult += i;
			}
			return SigResult;
		}
		
	 //factorial을 다르게 생성하는 법 (재귀함수의 이해)
		int ReFactorial(int Num)
		{
			if (Num == 1)
			{
				return 1;
			}
			return Num * ReFactorial(Num - 1); // 함수는 완료되지 않으면 계속 호출된다.(ReFactorial)
		}									   // 이 방법은 메모리 관리에 유념할 것

	 //0~ N 홀수만,더하기 
		int ex(int Num)
		{
			int exResult = 0;
			for (int i = Num; i > 0; --i)
			{
				if (i % 2 == 0) //  (변수를 2로 나눈 나머지가 0과 같으면 짝수 같지 않으면 홀수 )
					continue;
				exResult += i;
			}
			return exResult;
		}
	 
	// while 심화
		int AAA()
		{
			while (1)
			{
				printf("1st while! start\n");
				break; // 브레이크는 그냥 구문 종료 다음 넘어감
				printf("1st while! end\n");

			}

			while (1)
			{
				printf("2nd while! start \n");
				return 0; // 리턴은 그냥 함수 종료.
				printf("2nd while! start \n");
			}

			while (1)
			{
				printf("3rd while! start \n");
				break;
				printf("3rd while! start \n");

			}
		}






int main() //잊지마라 언제나 메인함수가 먼저 시작된다.
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
			//메인 안에서 주석 처리 하는것을 습관으로.

		//// 반복문
		//// for문
		//	for (/*초기설정*/ int i = 0;/*반복조건체크*/ i < 10; /*반복 후 처리*/++i)
		//	{// 반복 처리 할 코드 시작

		//		printf("%d hello\n",i);
		//	}// 반복 처리할 코드 끝
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

		//	for (int b = 0; b < 10; b += 2) // 그러니까 b+b는 걍 진짜 비 더하기 비 고 b += b+2이다.
		//	{
		//		printf("helloB\n");
		//	}

			// for 문 안에 변수는 외부에서 출력을 해도 영향을 끼치지 않지만,
			// 외부에서 호출한 변수를 for문에 넣고 다시 변수를 변형하기 위해 또 선언하면 오류 발생!

			//factorial
			//5! 구해라 라고 제시할 때
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
		//while (i <= 10)/*조건식*/
		//
		//	// 이 조건식이 참이면, 코드를 실행 
		//	// 이 조건식이 거짓이면, while 문 종료 다음 코드 실행
		//{//반복 처리 코드 실행
		//	nResult *= i;
		//	i++;
		//}//반복 처리 종료 
	
		//break; 이 명령어는 while 문을 즉시 종료한다. 밑의 코드는 전부 실행되지 않음.

		/*printf("Facsult = %d\n", factorial(10));
		printf("SigResult = %d\n", Sigema(10));
		printf("ReFactorial result = %d\n", ReFactorial(10));
		printf("while fac = %d", nResult);*/

	//int i = 0, Num = 10;
	//int nR = 0;
	//while (i <= Num) // while문 예시
	//{
	//	i++;
	//	if (i % 2 != 0)
	//		continue; // 다음 코드 실행x 다음 while 코드 진행
	//	{
	//		nR += i;
	//	}

	//}
	//printf("0 ~ N Enenadd = %d", nR);

	// 위에 코드를 for 문으로 바꾸면? 위에 함수 만들어놨음 89번 줄
	printf("issue for = %d\n", ex(10));
	AAA();

}


