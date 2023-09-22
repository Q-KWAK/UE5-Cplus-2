#include <iostream>
#include <stdio.h> //C 프로그래밍 언어에서 사용되는 헤더 파일을 포함하는 명령문입니다. 
//이 명령문은 전처리기 지시문 중 하나로, 컴파일러에게 특정 헤더 파일의 내용을 프로그램에 포함하도록 지시합니다.

int main()
{
    //{ int a = 0;
    //std::cin >> a;
    //std::cout << a << "를 입력하셨습니다";

    /*int a = 0, b = 0;
    scanf_s("%d %d", &a, &b);
    printf("a더하기 b는? %d", a + b);*/
  
    // ctrl + space : 인텔리전스 다시 띄우기& 하나 밖에 없을 때 자동완성
    // %d : 부호 있는 10진수 정수
    // %|64d : 부호 있는 10진수 정수 (8byte)
    // %u : 부호 없는 10진수 정수
    // %|64u : 부호 없는 10진수 정수(8byte)
    // %f : 부호 있는 실수(123456789)
    // %e, %E : 부호 있는 실수 (1.23456789e+005)
    // %i : 부호 있는 10진수 정수 (10진수 / 6진수 / 16진수 입력 가능)
    // %x : 부호 없는 16진수 정수(0123456789abcedf)
    // %X : 부호 없는 16진수 정수(0123456789ABCDEF)
    // %o : 부호 없는 8진수
    // %p : 포인터 값을 16진수로 표기
    // %c : 단일 문자 출력 

    //bool bReulst = false;
    ////(0만 아님 모두 참)
    //if (bReulst) 
    //{
    //    printf("참이다");
    //}
    //else
    //{
    //    printf("거짓이다.");
    //}

    //int Score = 0;
    //printf("Score를 입력해주세요 : ");
    //scanf_s("%d", &Score);

    //printf("Score = %d", Score);

    //if (Score >= 90)
    //{
    //    printf("A학점");
    //}
    //else if(Score >= 80)
    //{
    //    printf("B학점");
    //}
    //
    //else if (Score >= 70)
    //{
    //    printf("C학점");
    //}
    //
    //else if (Score >= 60)
    //{
    //    printf("D학점");
    //}

    //else
    //{
    //    printf("F학점");
    //}
    
    //int backNumber = 0;
    //scanf_s("%d", &backNumber);

    //    switch (backNumber)
    //    {
    //        case 11:
    //        {
    //            // 11일때 시행
    //            printf("catcher");
    //        }
    //        break;

    //        case 8:
    //        case 9:
    //        {
    //            // 11일때 시행
    //            printf("picther");
    //        }
    //        break;

    //        case 1:
    //        {
    //            // 11일때 시행
    //            printf("center");
    //        }
    //        break;

    //        default:
    //        {
    //            //위에 case가 모두 아니면실행
    //            printf("sub");
    //        }
    //        break;
    //    }
    //    return 0;

        //int light = false;
        //// scanf_s로 라이트 값을 입력
        //// 라이트가 참이면 파랑 출력 (printf)
        //// 라이트가 거짓이면 빨강 출력(printf)
        //scanf_s("%d", &light);
        //if (light == true)
        //{
        //    printf("파랑");
        //}
        //else
        //{
        //    printf("빨강");
        //}

        //int nlnput = 0;
        //// scanf_s로 nlnput 값을 입력
        //// nlnput 값이 100보다 크면 "100보다 크다." 출력(printf)
        //// nlnput 값이 100보다 작으면 "100보다 작다." 출력(printf)
        //scanf_s("%d", &nlnput);
        //if (nlnput > 100)
        //{
        //    printf("100보다 크다.");
        //}
        //else if (nlnput < 100)
        //{
        //    printf("100보다 작다.");

        //}

        //int myscore = 0, otherscore = 0;
        //// scanf_s로 myscore, otherscore 값을 입력
        //// mycore가 otherscore 크면 "3점" 출력 (printf)
        //// mycore가 otherscore 같으면 "1점" 출력 (printf)
        //// mycore가 otherscore 작으면 "0점" 출력 (printf)

        //scanf_s("%d", &myscore);
        //scanf_s("%d", &otherscore);
        //if (myscore > otherscore)
        //{
        //    printf("3점");
        //}
        //else if (myscore == otherscore)
        //{
        //    printf("1점");
        //}
        //else if (myscore < otherscore)
        //{
        //    printf("0점");
        //}


        //int ncode = 0;
        //// scanf_s로 ncode 값을 입력
        //// ncode 가 1이나 3이면 "남자" 출력
        //// ncode 가 2이나 4이면 "여자" 출력
        //scanf_s("%d", &ncode);
        //switch (ncode)
        //{
        //case 1:
        //{
        //    printf("male");
        //}
        //break;
        //case 2:
        //{
        //    printf("female");
        //}
        //break;

        //case 3:
        //{
        //    printf("male");
        //}
        //break;

        //case 4:
        //{
        //    printf("female");
        //}
        //break;
        //}

    
    int ncode2 = 0;
    // scanf_s로 ncode2 값을 입력
    // ncode 가 1이나 2이면 "2000년 미만" 출력
    // ncode 가 3이나 4이면 "2000년 초과" 출력

     scanf_s("%d", &ncode2);
        switch (ncode2)
        {
        case 1: case 2:
        {
            printf("2000년 미만");
        }
        break;

        case 3: case 4:
        {
            printf("2000년 초과");
        }
        break;

        
        }

}



