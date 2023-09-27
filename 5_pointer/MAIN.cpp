#include <stdio.h>

void buyitem(int* money, int price)
{
	// 메모리에 효율적인 관리, 데이터 참조가 편하다.
	// int*money는 복제되지 않는다. 또한 머니가 변하는 값을 반환해주지 않아도 된다.
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
	
	pPs->iphoneCnt--; // 포인트로 참조하는 구조체에 변수는 '->' 키워드로 참조한다.
}
	// number 받아서 호출한다.	
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
	// 포인터를 사용하는 이유
	// 메모리에 효율적인 관리, 데이터 참조가 편하다.
	// int * pA: 포인터 변수의 선언 (pA에 들어가있는 주소에 INT형의 크기 만큼 참조하겠다.)
	// nullptr : 포인터 변수의 초기화 값 (주소값이 비어있음)
	// 이전에는 null을 사용했는데 (null=0을 의미) 0이랑 의미가 동일해서 문제가 발생
	// 주소 값이 비어있음이라는 명확한 의미를 가진 nullptr 사용
	// 포인터에 크기(x32는 4Byte, x64에는 8Byte)
	int* pA = nullptr;
	pA = &a; // a주소 값을 pA에 넣는다. 
	// * : 레퍼런스 참조한다. (주소가 가르키고 있는 값을 참조한다.)
	b = *pA; // b에 pA가 가르키고 있는 주소에 값을 넣는다.
	*pA = 10; // pA가 가르키고 있는 주소에 값을 10으로 변경한다.
	printf("*pa : %d, a: %d, b: %d\n",*pA, a, b);
	//-----------------------------------------------------------------------------------------//

	//int N1 = 0; // 현재 변수 N1원의 값은 0
	//int N2 = 0; // 현재 변수 N2원의 값은 0
	//int* pN = nullptr; //pN이라는 포인터 변수 생성 및 이 pN의 주소를 초기화 
	//pN = &N1; // 현재 N1이 값을 받는 주소를 pN이 값을 받는 주소로 변경 
	//*pN = 20; // pN에 20의 값을 넣는다 하지만 지금 값을 적용받을 곳은 N1이 값을 받는 곳과 동일
	//		  //따라서 변수 N1은 현재 20이다 밑도 마찬가지.
	//pN = &N2; // 마찬가지로 다시 N2가 값을 받을 주소를 pN이 받는 주소로 변경한다. (인터넷 아이콘 여러 개 만드는 거랑 같다)
	//*pN = 30; // 그럼 *pN의 주소값에 30을 넣는다. 이지만 현제 pN이 받는 주소는 N2이기에 int N2의 값이 30으로 바뀐다.

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

	// 배열과 포인터

	int arrint[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int* pInt = nullptr;
	pInt = arrint;
	printf("plnt=%d\n", *pInt);
	pInt += 1;// 다음 배열 포인터에 주소를 가리킨다.
	printf("plnt=%d\n", *pInt);

	short arrS[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	//(int*)를 사용하여 int*로 강제로 형변환(Cast)한다. 속된말로 너 이거 맞니 라고 물어본다
	// 이해가 안되면 블루프린트에서 특정 블루프린트에 레벨 블루프린트를 소환할때를 생각해보자!
	pInt = (int*)arrS;//(int*)를 사용하여 int*로 강제로 형변환(Cast)한다.
	pInt += 1; // pInt가 int*이므로 int(4Byte)만큼 다음 주소 값을 참조한다.
	short* pS = (short*)pInt;//int(4Byte)만큼 이동한 주소 값은 Short(2Byte) 2번 이동한 값
	printf("pS=%d\n", *pS);

	//x32 아키텍쳐 = x86 아키텍쳐
	//int32(4Byte) - 0~ 4,294,967,295(Byte)

	// 아래 배열을 낮은 숫자대로 출력 // 이거 이해 할수 있을까...?
	int arr[10] = { 10, 2, 78, 53, 6, 33, 27, 99, 7, 31 };

	for (int i = 0; i < 10; i++) 
	{
		int lowestindex = i; // 가장 낮은 index 저장
		for (int j = i + 1; j < 10; j++) 
		{ 
			if (arr[lowestindex] > arr[j]) 
			{
				// lowestindex와 j를 순서대로 비교하면서 j index 값이 저장
				// j index에 값이 낮으면 j는 새로운 lowestindex
				lowestindex = j;
			}
		}
		// j for 문이 종료되면 lowestindex에는 가장 낮은 수의 index 값이 저장됨
		// i는 순차적으로 돌면서 가장 낮은 수가 들어가야됨
		// lowestindex 값과 i index 값을 교체한다.
		int temp = arr[i];
		arr[i] = arr[lowestindex];
		arr[lowestindex] = temp;
	}

	// 정렬된 배열 출력
	printf("정답: ");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", arr[i]);
	}
	
	//const 상수화
	// 실수를 줄일 수 있어, 디버깅 횟수를 줄일 수 있따. (디버깅 : 버그를 찾거나 수정하는 행위)
	const int cint = 100;//상수

	int value = 0;
	int value2 = 0;
	int* pvalue = &value;

	//const int* pvalue = &value; // 포인터가 가르키는 내용 수정 불가, 포인터 값 수정 가능, 참조 가능
	//int const* pvalue = &value; // 포인터가 가르키는 내용 수정 불가, 포인터 값 수정 가능. 참조 가능
	//int* const pvalue = &value; // 포인터가 가르키는 내용 수정 가능, 포인터 값 수정 불가, 참조 가능
	//	int const* const pvalue = &value; // 포인터가 가르키는 내용 수정 불가, 포인터 값 수정 불가, 참조 가능
	*pvalue = 2;
	pvalue = &value2;
	printf("pvalue=%d\n", *pvalue);
	
	printnum(&value);
	printnum2(value);


}
	

	














