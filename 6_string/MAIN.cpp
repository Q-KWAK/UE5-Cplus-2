#include <stdio.h>
#include <iostream>
#include <assert.h>

unsigned int getstringlength(const wchar_t* _pstring)
{
	int i = 0;
	while (1)
	{
		wchar_t c = *(_pstring + i);//���������� �ּ� ���� ���� ����
		
		//if (c == 0)
		if (c == '\0')
		{
			break;
		}
		++i;
	}
	return i;
}
//_dest : "abcde" �̴�.
//_psorce : "fghi"�̴�.
void stringcat(wchar_t* _Dest, unsigned int size, const wchar_t* _psource)
{
	int destLen = getstringlength(_Dest);
	int sourceLen = getstringlength(_psource);
	wchar_t c = *(_Dest + destLen);
	
	if (size < destLen + sourceLen + 1) // \0 ���� 1�� �� �Ƿ�
	{
		assert(nullptr);
	}


	for (int i = 0; i < 5; i++) // �������� �ּ� ���� ���ڸ� ����
	{
		*(_Dest + destLen + i) = *( _psource + i );
		//(_Dest[destLen +i } = _psource [i]); ���� �Ʒ��� ����
	}

}

int stringcmp(const wchar_t* _pleft, const wchar_t* _pright)
{
	int leftlen = getstringlength(_pleft);
	int rightlen = getstringlength(_pright);
	
	int nloop = (leftlen < rightlen) ? leftlen : rightlen; // ���� ������ ũ�� �� ����� �������� �ʰ� �ٽ� for ���� ����

	for (int i = 0; i < nloop; i++)
	{
		if (_pleft[i] < _pright[i])
			continue;

		return (_pleft[i] > _pright[i] ) ? 1 : -1; //ũ�� �� ����� ��ȯ
	}
	if (leftlen != rightlen)
 	{  
		//left�� ��� 1, right ��� -1
		return (leftlen > rightlen) ? 1 : -1;
	}
	return 0;

}



int main()
{
	//���� ó��
	//�ƽ�Ű �ڵ� (���ڵ忡 ����)
	//multi-byte
	//127�� �ƽ�Ű �ڵ� ���� ǥ��, ������ ũ�⿡ ���� ���������� ũ�Ⱑ ������
	//�������� ȣȯ�� ���� �ʴ� ������� �ٸ� �ý������� ������ ���ڸ� �˾ƺ� �� ���� ����
	//�Ϻ��� �ؽ�Ʈ ������ �ѱ� �����쿡�� �������� �� ������ ������ ������ ��
	//ö���ϰ� �ڱ��� ǥ�⸸�� ���� ���ڵ�, �ܱ��� ���� ���� �ٸ� ����ü�谡 �ʿ��� ��� ������
	char c1 = 'a';//1Byte(0~255)
	printf("c1=%c\n", c1);
	
	char arrC1[10] = "abc�ѱ�"; // ����� 1Byte, �ѱ��� 2Byte ��� ���ڿ� �� ���� " "��� 
	printf("arrC1 % s\n", arrC1);//���ڿ� char ��½� %s ���
	
	_wsetlocale(LC_ALL, L"korean");// ��Ƽ����Ʈ ��� ���� // ���̵� ���� ��� ����

	// ���̵� ���� (wide charactor)
	// multi-byte�� ������ �ذ��ϱ� ���� ���� �����ڵ� ���
	// ������ ���� ��� ���ڸ� ǥ���� �� �ֱ� ������ �ֱٿ� ���� ����
	// ���� ���� ����ϴ� ����� UTF-8�� �ִ�.
	// 2Byte(0~65535)/ 2~3���� ���� �տ� ������ 1bit�� �����ϸ� 32767�� ǥ������
	// wchar_t���� ���ڸ� ���� �� �տ� L�� ���δ�.
	

	wchar_t wc1 = L'a';// 2Byte(0~65535)/ 2~3����, wchar_t���� ���ڸ� ������ �տ� L�� ���δ�.
	wprintf(L"wc1 = %c\n", wc1); // wchar_t���� ����Ҷ��� wprintf�� ���, ��� ���ڿ� �տ� L�� ���δ�
	
	wchar_t arrWC1[10] = L"abc�ѱ�";// wchar_t�� �迭�� ���ڿ��� ������ �տ� L�� ���δ�.
	wprintf(L"arrWC1=%s\n", arrWC1); //  wchar_t���� ����Ҷ��� wprint�� ��� ��� ���ڿ� �տ� L�� ���δ�.

	wchar_t szWCHar[10] = L"abcdefghi";// �������� ���ڿ� �������̶�� ǥ��� '\0'���ڰ� ���⿡. ������ �����ִ� ���ڴ� 10�迭 �� 9��!
	wprintf(L"szWCHar=%s\n", szWCHar);

	wchar_t szWCHarLen[20] = L"abcdefg"; // ���ڿ� ���� ���ϱ�(iostream ���̺귯�� �Լ�)
	int size = wcslen(szWCHarLen);
	printf("szWCHarLen size =%d\n", size);

	wcscat_s(szWCHarLen, 20, L"hij");// ���ڿ� ���̱� (iostream ���̺귯�� �Լ�)
	wprintf(L"szWCHarLen=%s\n", szWCHarLen);

	stringcat(szWCHarLen, 20, L"hij");// ���ڿ� ���̱� (iostream ���̺귯�� �Լ��� ���� ���� ���� ����)
	wprintf(L"szWCHarLen=%s\n", szWCHarLen);
	
	//wchar_t szWCHarCmp [20] = L"abcdef"; �׳� ����
	 
	wcscpy_s(szWCHarLen, L"abcdef");  //���� ���ڿ��� �ڿ� ���ڿ� �����ؼ� �ִ´�.

	int nresult = wcscmp(L"abcdef", L"cbcdef");// ������ 0, �տ� ���� ������ ������ 1, �ڿ� ���� ������ ������ -1
	printf("nresult=%d\n", nresult);






}