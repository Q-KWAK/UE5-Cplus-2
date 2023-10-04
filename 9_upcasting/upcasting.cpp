#include <stdio.h>

//상속
//기존 클래스에 기능 추가하거나 재정의 하여 새로운 클래스를 정의하는 기능
//생물 - 기본 최상위 클래스라고 정의
//동물 : 생물 + 움직인다는 기능을 추가한다
// 동물은 생물의 기능을 상속받음
//포유류 : 동물 + 젖먹이를 한다 기능을 추가
// 포유류는 동물의 기능을 상속받음
//사람 : 포유류 + 지적능력을 기능을 추가
// 사람은 포유류의 기능을 상속받음

class cbase
{
public:
	cbase(int x) : m_x(x)
	{
		printf("부모 클래스 생성\n");
	}

public :
	int m_x;
	~cbase()
	{
		printf("부모 클래스 파괴\n");
	}
};

//상속 방법 ":public cbase" 클래스 뒤에 부모 클래스를 선언
class cchild : public cbase
{
public:
	//","에 뒤에 부모클래스(cbase)를 넣어서 부모 클래스가 생성자 호출
	// 부모 클래스에 생성자가 먼저 호출 후 자식 생성자가 호출 됨
	cchild(int x, int y) : m_y(y) , cbase(x)
	{
		printf("자식 클래스 생성\n");
	}
public:
	int m_y;

	//자식 파괴자 먼저 호출 후 부모 파괴자 호출됨
	~cchild()
	{
		printf("자식 클래스 파괴\n");
	}

};

int main()
{
	cbase base(10);
	base.m_x = 100;

	cchild child(10 , 20);
	child.m_x = 200; // 상속 받은 부모의 기능을 그대로 사용가능

}