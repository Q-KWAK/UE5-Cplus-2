#include"money.h"
//cpp는 정확한 식을 적어놓은 책, 헤더 파일에 적혀져있는 목차의 내용을 불러오는 역할을 한다. 
//이를 하는 이유는 컴파일 속도의 증가와, 메모리 관리를 위해서이다.
#include <stdio.h>

static int s_Money = 0;

extern int g_Money; // 코드가 있을 것이라고 미리 알려주는 역할.

//int addMoney(int Money)
//{
//	int t_Money = 0;
//	t_Money += Money;
//	g_Money += Money;
//
//	printf("t_Money=%d\n", t_Money);
//	printf("g_Money=%d\n", g_Money);
//	return 0;
//}
//
//int useMoney(int Money)
//{
//	return 0;
//}