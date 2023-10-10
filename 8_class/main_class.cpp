#include <stdio.h>
#include "myclass.h"


struct MyStruct //변수형
{
	int a;
};


class CMyClass//변수형
{


	int m_b; //클래스 안에 선언된 변수를 멤버 변수라고 한다. (개발자들은 형식적으로 멤버변수라는걸 표시하기 위해 m_를 붙이기도 한다.)

public:
	//생성자
	//클래스가 생성될때 호출되는 함수
	//선언 하지 않아도 기본 생성자가 존재
	//생성자도 private면은 외부에서 호출 불가, 반드시 public으로 선언
	//생성자도 파라메타의 갯수와 타입에 따라 overload(타입 별 여러 개 함수를 생성) 할 수 있다.
	//(int valueA) 이런 방식으로 생성자 파라메타를 넣어줄 수 있다.
	// (valueA), m_b(0), c(0)<-이런방식으로 생성시 멤버 변수에 초기 값을 세팅할 수 있다.
	//파라메타 변수의 형태가 입력방식에 의해 선택이 불가능 하면 문제가 발생

CMyClass(int valueA) : a(valueA), m_b(0), c(0)
{
	printf("생성자A호출\n");
}
//파괴자
//클래스가 파괴될 때 호출되는 함수
//선언 하지 않아도 기본 파괴자 존재
//파괴자도 public이 아니면 호출이 불가능,반드시 public으로 선언
CMyClass(int valueA,int valueB) : a(valueA), m_b(valueB), c(0)
{
	printf("생성자B호출\n");
}

CMyClass(int valueA, int valueB, int valueC) : a(valueA), m_b(valueB), c(valueC)
{
	printf("생성자C호출\n");
}
~CMyClass()
{
	printf("파괴자호출\n");
}
void printb()
{
	printf("b=%d", m_b);
}

void printallvalue()
{
	printf("a=%d, b=%d, c=%d\n", a, m_b, c);
}

void setc(int num)
{
	// 일반적으로 this 키워드는 생략함
	// this 클래스 안에 함수를 호출한 대상 객체를 의미함
	this->c = num;
}


//연산자 오버로딩(operator overloading)
//대입 연산자(기본적으로 생성됨)
//const CMyClass& : 왼쪽으로 반환될 변수형
//operator = ; 오버로딩 할 연산자
//(const CMyClass& other) : 오른쪽에 입력될 변수

// cmy3 = cmy+ cmy2
// cmy3 = CMyClass(a + other.a, m_b + other.m_b, c + other.c);
const CMyClass& operator = (const CMyClass& other)
{
	a = other.a;
	m_b = other.m_b;
	c = other.c;

	return *this;
}

const CMyClass& operator = (const CMyClass& other)
{
	return CMyClass(a + other.a, m_b + other.m_b, c + other.c);
}
public :
	int a;
protected :
private:
	int c;

};

int main()
{
	{
		//레퍼런스 참조
		//메모리 복제가 되지 않고 원본을 참조하여 메모리르 효율적으로 사용하기 위한 연산자
		int num = 100;
		MyStruct sttest;
		
		//포인터 참조는 포인터 변수의 주소값을 참조한다
		//포인터 변수의 주소값도 포인터 가리키고 있는 주소 값은 다르다.
		int* pnum = &num;//pnum 포인터 변수에는 num의 주소 값이 들어간다 즉 pnum은 num변수를 가리키고 있다.
		MyStruct* ptest = &sttest;
		ptest->a = 0;
		printf("&pnum ! = &num ? %d\n", int(&pnum) != int(&num));
		//레퍼런스 참조는 원본 대상의 주소 값과 동일
		int& refnum = num;
		MyStruct& retest = sttest;
		retest.a = 0;
		printf("&refnum == &num ? %d\n", (int(&refnum) == int(&num)));

	}
	MyStruct stmy;
	stmy.a = 0;

	CMyClass cmy(100);//->생성자a 호출됨
	CMyClass cmy2(100,200);//->생성자b 호출됨
	cmy.a = 0;
	cmy.setc(0);
	cmy.setc(10);//특정 변수를 수정하기 위한 함수를 생성해서 개발하는게 기본규칙
	//cmy.setc(100);//만약 변수를 private로 되어있다면 개발자가 직접 접근하지 말라는 의도가 있다
	
	CMyClass aa;


	CMyClass cmy3:
	cmy.a = 1000;
	cmy.printallvalue();
	cmy2.printallvalue();
	cmy3 = cmy+cmy2;
	cmy3.printallvalue();
	







}// 파과자 호출됨/