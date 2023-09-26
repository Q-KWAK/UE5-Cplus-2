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

int ADD(int a, int b)
{
	printf("int ADD가 사용\n");
	return a + b;
}

float ADD2(float a, float b)
{
	printf("float ADD가 사용\n");
	return a + b;
}

double ADD3(double a, double b)
{
	printf("doble ADD가 사용\n");
	return a + b;
}

struct fruitshop
//struct는 구조체고 구조체는 int main 바깥에다가 만들어야 오류X
//구조체 내부 선언한 변수는 구조체가 사라지지 않으면 사라지지 않는다.
{
	int appleA;
	int mangoA;
	int pearA;

	//구조체 생성자 ":" 구문 오른쪽에 변수에 초기값을 셋팅한다.
	fruitshop() : appleA(1000), mangoA(1000), pearA(1000)
	{

	}
	//구조체에 함수 생성 -> 구조체에는 함수를 만들수 있다.
	void setfruitvalue(int apple, int mango, int pear)
	{
		int appleB = apple; // setfruitvalue 함수가 종료되면 사라진다.
		appleA = apple;
		mangoA = mango;
		pearA = pear;
	}
	//구조체에 출력하는 함수를 생성하면 편리하게 이용할 수있다.
	void printshopvalue()
	{
		printf("과일가게 가격 사과:%d, 망고:%d, 배:%d\n", appleA, mangoA, pearA);
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
		printf("우리동네 성지 가격 아이폰: %d, 제트플립 : %d, s23 : %d, 폴드 : %d\n", iphone, zflip, s23, fold
		);
	}


};






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

	/*bool bRun = true;*/
	/*while (bRun)
	{
		int nlput = 0;
		int num1, num2;

		printf(("어떤 연산을 하시겠습니까? 0: +,2: *, 3: /, 4: % "));
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
			printf("두수의 분은 %e\n", divide(num1, num2));
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
	//}
	/*ADD(1);
	ADD2(1.0f, 1.0f); //f를 붙이고 실수를 쓰면 플롯형
	ADD3(1.0, 1.0);*/ //f를 안붙이고 실수를 쓰면 더블형

	// 배열
	// int arrInt[10] = {0}; // 전부 0으로 초기화
	// int arrInt[10] = {0 ,}; // 전부 0으로 초기화
	int arrInt[10] = { 0, 1 , 2 , 3 , 4,  5 , 6 , 7 , 8 , 9 };//배열 생성 및 각각에 배열에 초기값 넣는 방법
	arrInt[0] = 10; //배열 1번째 값에 넣기
	arrInt[4] = 40; //배열 5번째에 값에 넣기
	arrInt[9] = 90;// 0번 부터 배열이 시작되므로 10번째 배열은 9번

	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 배열 값은 %d입니다.\n", i, arrInt[ i ]); // 2개 이상의 파라미터 출력법
	}

	int number = 0;
	// for each 구문: 배열에서만 사용이 가능하고, 배열 갯수를 계속 입력해주는 것이 귀찮기에.
	//                특정 배열만 계속 사용하면 경제성이 떨어지기에 배열 값의 크기만 돌리는 것이다.
	for (int value : arrInt) 
		                    
	{
		printf("%d번째 배열 값은 %d입니다.\n", number, value);
		number++;
	}

	
	fruitshop shop[3];
	// sturct에 사용
	// fruitshop : 변수형
	// shop : 변수의 이름
	// 변수의 이름 옆에.을 찍어야 구조체 사용할수 있다.  
	//shop.appleA = 1000; //shop에 appleA 변수에 값 넣기
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


		
