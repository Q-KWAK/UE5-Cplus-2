#include"money.h"
//cpp�� ��Ȯ�� ���� ������� å, ��� ���Ͽ� �������ִ� ������ ������ �ҷ����� ������ �Ѵ�. 
//�̸� �ϴ� ������ ������ �ӵ��� ������, �޸� ������ ���ؼ��̴�.
#include <stdio.h>

static int s_Money = 0;

extern int g_Money; // �ڵ尡 ���� ���̶�� �̸� �˷��ִ� ����.

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