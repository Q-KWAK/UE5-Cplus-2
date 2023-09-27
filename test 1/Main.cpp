#include <stdio.h>
#include <iostream>




//for (/*초기설정*/ int i = 0;/*반복조건체크*/ i < 10; /*반복 후 처리*/++i)
	//	{// 반복 처리 할 코드 시작

	//		printf("%d hello\n",i);
	//	}// 반복 처리할 코드 끝
	//	
	//	/*for (int i = 0; i < 10; ++i)
	//	{
	//		printf("hello\n");
	//	}*/


//{ int a = 0;
	//std::cin >> a;
	//std::cout << a << "를 입력하셨습니다";


int main()
{
	////Q1
	//// 2의 배수 출력 하기 (0~100)
	//// 0 2 4 6 8~
	//// 0~100까지 2의 배수 출력
	//
	//int n = 100;
	//int i = 0;
	//int count = 0; // 출력 횟수를 저장할 변수
	////1번으로 작동, 그후 for 괄호 안에 내용 처리 for문 안이 참일시 3번실행, 거짓일시 3번 처리 안하고 다시 2번 i값에 따라 1번실행 
	//// 1번       2번    3번
	//// |		  |		|
	//// V		  V	    V
	////for문 시작시 초기설정 int i = n 작동
	//// i>=0이, 참일시 for{}안의 내용을 작동 아니면 for문 종료
	//// for{}안의 내용이 종료시 --i를 작동
	//for (int i = n; i >= 0; --i)	
	//{
	//	if (i % 2 == 0)
	//	{ //continue; // continue를 만날시 for()을 다시 반복한다.
	//		++count; // 짝수를 출력할 때마다 count를 증가
	//		printf("%d\n",i);
	//	}
	//	//return n;    // return 를 만날시 함수 자체가 종료.
	//}
	//printf("횟수: %d\n", count); // 출력된 횟수 출력
	//
	
	//Q2 n은 숫자 하나를 입력 받기
	//	 n에 배수 출력하기
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
		//		{ //continue; // continue를 만날시 for()을 다시 반복한다.
		//			++count; // 짝수를 출력할 때마다 count를 증가
		//			printf("%d\n", i);
		//		}
		//		//return n;    // return 를 만날시 함수 자체가 종료.
		//}
	
		//printf("횟수: %d\n", count); // 출력된 횟수 출력

	
	//Q3 abcdef를 역으로 출력하기 
		wchar_t swichinput[20] = L"abcdef";
		
		//wchar_t 형으로  문자 입력 받기
		//wchar_t 변수형을
		//[20]의 크기로 생성하고
		//L""값을 초기값으로 넣는다.
		wchar_t swichinput[20] = L"";
		
		// wchar_s는 입력을 받는 기능을 사용하겠다.
		// L"%|s" 변수형태로 입력을 받겠다.
		// "swichinput"변수에 입력한 값을 넣어주겠다.
		// "(unsigned)_contof(swichinput)" 는 값을 넣을 변수에 크기
		wscanf_s(L"%S", swichinput , (unsigned)_countof(swichinput));
		
		//wprintf는 출력을 하는 기능 사용하겠다.
		//L"swichinput=%s" 문자 형태로 출력하겠다.
		//%s위치에 swichinput 값을 출력하겠다.
		wprintf(L"swichinput=%s", swichinput);

	//Q4
	//입력 받은 문자열에서 'a'문자 갯수 출력

}