#include <stdio.h>

// c++ 의 컴파일
// c++에서 사람이 작성한 소스코드를 컴퓨터가 읽을 수 있는 코드로 변환하여 실행 할 수 있는 파일로 변환하는 과정

// 1. 전처리 (preprocessing) 단계 : #include 와 #define 과 같은 전처리기 매크로들을 처리하는 단계
// 2. 컴파일 (compile) 단계 : 각각의 소스 파일들을 어셈블리 명령어로 변환
// 3. 어셈블(assemble) 단계 : 어셈블리 코드들을 실제 기게어로 이루어진 목적 코드 (object file)로 변환하는 단계
// 4. 링킹(linking) 단계 : 각각의 목적 코드들을 한데 모아 하나의 실행 파일을 생성하는 단계 


//메모리 영역
// 1. Code 영역 : 실행 할 코드가 저장되어 있는 영역(기계어로 존재)
// 2. Data 영역 : 전역변수, Static 변수들이 저장, 프로세스가 종료될때까지 메모리에 저장
// 3. Stack 영역: 지역변수, 매개변수들이 저장, 함수가 호출되면 생성되고 함수가 종료되면 시스템에 반환
// 4. Heap 영역 : malloc 또는 new 함수에 의해서 동적으로 할당되는 영역, molloc() or new 연산자로 할당, free() or delate 연산자로 해제

//int g_Money =  0; // 전역변수 전체 프로그램 상에서 계속 쓰이는 변수 (많이쓰면 메모리 부하 걸려용)
//
//static int s_Money = 0; // static 변수는 DATA 영역에 존재, 별도로 저장된다. 하지만 CPP에 존재하긴 함
//						// 다른 CPP 에선 사용안됌
//#include "money.h"

#include "calcfunc.h"

int main()
{
	//int t_Money = 0; // 지역변수 특정 함수 내에서만 적용되는 변수
	//addMoney(100);
	//addMoney(100);
	//addMoney(100);
	//addMoney(100);
	//addMoney(100); // 링크업 예제// 링크업 실습
	
	/*printf("main t_Money=%d\n", t_Money);
	printf("main g_Money=%d\n", g_Money);*/ // 링크업 실습


	bool bRun = true;
	while (bRun)
	{
		int nlput = 0;
		int num1, num2;

		printf("어떤 연산을 하시겠습니까? 0: +,2: *, 3: /, 4: % ): ");
		scanf_s("%d", &nlput);

		switch (nlput)
		{
		case 0:
		{
			printf("숫자 2개를 입력(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("두수의 합은 %d\n", add(num1, num2));
		}
		break;

		case 1:
		{
			printf("숫자 2개를 입력(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("두수의 차는 %d\n", minus(num1, num2));
		}
		break;

		case 2:
		{
			printf("숫자 2개를 입력(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("두수의 곱은 %d\n", multi(num1, num2));
		}
		break;
		case 3:
		{
			printf("숫자 2개를 입력(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("두수의 분은 %d\n", divide(num1, num2));
		}
		break;

		case 4:
		{
			printf("숫자 2개를 입력(num1 num2)");
			scanf_s("%d %d", &num1, &num2);
			printf("두수의 나머지는 %d\n", remain(num1, num2));
		}
		break;
	}



		printf("계산기를 종료하시겠습니까?(0:N 1:Y)");
		scanf_s("%d", &nlput);

		switch (nlput)
		{
		case 1:
			bRun = false;
			break;
		}



	}









}
