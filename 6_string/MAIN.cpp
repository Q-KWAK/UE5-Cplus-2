#include <stdio.h>
#include <iostream>
#include <assert.h>

unsigned int getstringlength(const wchar_t* _pstring)
{
	int i = 0;
	while (1)
	{
		wchar_t c = *(_pstring + i);//순차적으로 주소 값에 문자 저장
		
		//if (c == 0)
		if (c == '\0')
		{
			break;
		}
		++i;
	}
	return i;
}
//_dest : "abcde" 이다.
//_psorce : "fghi"이다.
void stringcat(wchar_t* _Dest, unsigned int size, const wchar_t* _psource)
{
	int destLen = getstringlength(_Dest);
	int sourceLen = getstringlength(_psource);
	wchar_t c = *(_Dest + destLen);
	
	if (size < destLen + sourceLen + 1) // \0 공간 1개 더 피룡
	{
		assert(nullptr);
	}


	for (int i = 0; i < 5; i++) // 순차적인 주소 값에 문자를 저장
	{
		*(_Dest + destLen + i) = *( _psource + i );
		//(_Dest[destLen +i } = _psource [i]); 위나 아래나 동일
	}

}

int stringcmp(const wchar_t* _pleft, const wchar_t* _pright)
{
	int leftlen = getstringlength(_pleft);
	int rightlen = getstringlength(_pright);
	
	int nloop = (leftlen < rightlen) ? leftlen : rightlen; // 문자 같으면 크기 비교 결과를 실행하지 않고 다시 for 문을 실행

	for (int i = 0; i < nloop; i++)
	{
		if (_pleft[i] < _pright[i])
			continue;

		return (_pleft[i] > _pright[i] ) ? 1 : -1; //크기 비교 결과를 반환
	}
	if (leftlen != rightlen)
 	{  
		//left가 길면 1, right 길면 -1
		return (leftlen > rightlen) ? 1 : -1;
	}
	return 0;

}



int main()
{
	//문자 처리
	//아스키 코드 (디스코드에 있음)
	//multi-byte
	//127개 아스키 코드 문자 표기, 문자의 크기에 따라 가변형으로 크기가 결정됨
	//국가간의 호환이 되지 않는 방식으로 다른 시스템으로 보내면 글자를 알아볼 수 없게 깨짐
	//일본어 텍스트 파일을 한글 윈도우에서 열었을때 뷁 등으로 깨지는 현상이 예
	//철저하게 자국어 표기만을 위한 인코등, 외국어 교재 같이 다른 문자체계가 필요한 경우 불편함
	char c1 = 'a';//1Byte(0~255)
	printf("c1=%c\n", c1);
	
	char arrC1[10] = "abc한글"; // 영어는 1Byte, 한글은 2Byte 사용 문자열 일 때는 " "사용 
	printf("arrC1 % s\n", arrC1);//문자열 char 출력시 %s 사용
	
	_wsetlocale(LC_ALL, L"korean");// 멀티바이트 언어 설정 // 와이드 문자 언어 설정

	// 와이드 문자 (wide charactor)
	// multi-byte에 문제를 해결하기 위해 나온 유니코드 방식
	// 세계의 거의 모든 문자를 표현할 수 있기 때문에 최근에 많이 사용됨
	// 가장 자주 사용하는 방식은 UTF-8이 있다.
	// 2Byte(0~65535)/ 2~3만개 에서 앞에 검증요 1bit를 제외하면 32767개 표현가능
	// wchar_t형에 문자를 넣을 때 앞에 L을 붙인다.
	

	wchar_t wc1 = L'a';// 2Byte(0~65535)/ 2~3만개, wchar_t형에 문자를 넣을때 앞에 L을 붙인다.
	wprintf(L"wc1 = %c\n", wc1); // wchar_t형을 출력할때는 wprintf를 사용, 출력 문자열 앞에 L을 붙인다
	
	wchar_t arrWC1[10] = L"abc한글";// wchar_t형 배열에 무자열을 넣을때 앞에 L을 붙인다.
	wprintf(L"arrWC1=%s\n", arrWC1); //  wchar_t형을 출력할때는 wprint를 사용 출력 문자열 앞에 L을 붙인다.

	wchar_t szWCHar[10] = L"abcdefghi";// 마지막에 문자에 마지막이라는 표기로 '\0'문자가 들어가기에. 실제로 쓸수있는 글자는 10배열 중 9개!
	wprintf(L"szWCHar=%s\n", szWCHar);

	wchar_t szWCHarLen[20] = L"abcdefg"; // 문자열 길이 구하기(iostream 라이브러리 함수)
	int size = wcslen(szWCHarLen);
	printf("szWCHarLen size =%d\n", size);

	wcscat_s(szWCHarLen, 20, L"hij");// 문자열 붙이기 (iostream 라이브러리 함수)
	wprintf(L"szWCHarLen=%s\n", szWCHarLen);

	stringcat(szWCHarLen, 20, L"hij");// 문자열 붙이기 (iostream 라이브러리 함수를 직접 만듬 위에 있음)
	wprintf(L"szWCHarLen=%s\n", szWCHarLen);
	
	//wchar_t szWCHarCmp [20] = L"abcdef"; 그냥 적음
	 
	wcscpy_s(szWCHarLen, L"abcdef");  //앞쪽 문자열에 뒤에 문자열 복사해서 넣는다.

	int nresult = wcscmp(L"abcdef", L"cbcdef");// 같으면 0, 앞에 문자 순번이 빠르면 1, 뒤에 문자 순번이 빠르며 -1
	printf("nresult=%d\n", nresult);






}