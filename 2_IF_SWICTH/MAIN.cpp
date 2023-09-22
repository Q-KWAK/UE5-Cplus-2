#include <iostream>
#include <stdio.h> //C 프로그래밍 언어에서 사용되는 헤더 파일을 포함하는 명령문입니다. 
//이 명령문은 전처리기 지시문 중 하나로, 컴파일러에게 특정 헤더 파일의 내용을 프로그램에 포함하도록 지시합니다.
#include <bitset>

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
 
#define LEVEL1_10Reward_10 0b00000001; //1
#define LEVEL1_10Reward_20 0b00000010; //2
#define LEVEL1_10Reward_30 0b00000100; //4
#define LEVEL1_10Reward_40 0b00001000; //8
#define LEVEL1_10Reward_50 0b00010000; //16




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


    //int ncode2 = 0;
    //// scanf_s로 ncode2 값을 입력
    //// ncode 가 1이나 2이면 "2000년 미만" 출력
    //// ncode 가 3이나 4이면 "2000년 초과" 출력

    // scanf_s("%d", &ncode2);
    //    switch (ncode2)
    //    {
    //    case 1: case 2:
    //    {
    //        printf("2000년 미만");
    //    }
    //    break;

    //    case 3: case 4:
    //    {
    //        printf("2000년 초과");
    //    }
    //    break;

    // 비트 연산자
    // c++ 11버전 부터 숫자 앞에 0b 를 붙이면 2진법 표기 가능
    // 2진법 표기 앞에 0b를 붙인다 ex) (0b01010111)
    // 8진법 표기 앞에 0을 붙인다 ex) (0123)
    // 16진법 표기 앞에 0x를 붙인다 ex) (0xFF) (a :10, b: 11, c:12, d:13, e:14, f: 15)
    int A = 0b01010111;
    int B = 0123;
    int C = 0xFF;
    printf("2진법(0b01010111): %d\n", A);
    printf("8진법(0123): %d\n", B);
    printf("16진법(0xFF): %d\n", C);

    // 비트 연산 기호
    // 곱(&) 둘 다 1이면 1, 아니면 0
    // 합(|) 둘 중 하나라도 1이면 1, 아니면 0
    // XOR(^) 둘이 같으면 1, 아니면 0
    // 반전(~) 0이면 1, 1 이면 0
    char bitNum = 0b01001010;  char bitResult = 0;

    bitResult = bitNum & 0b11010100;
    std::cout << std::bitset<8>(bitResult) << std::endl;//<< std::end| 개행(printf에 \n과 같다)

    bitResult = bitNum | 0b11010100;
    std::cout << std::bitset<8>(bitResult) << std::endl;//<< std::end| 개행(printf에 \n과 같다)

    bitResult = bitNum ^ 0b11010100;
    std::cout << std::bitset<8>(bitResult) << std::endl;//<< std::end| 개행(printf에 \n과 같다)

    bitResult = ~0b11010100;
    std::cout << std::bitset<8>(bitResult) << std::endl;//<< std::end| 개행(printf에 \n과 같다)

    ////10레벨 달성보상
    //bool isGetlevel10Reward = false;
    ////20레벨 달성보상
    //bool isGetlevel20Reward = false;
    ////30레벨 달성보상
    //bool isGetlevel30Reward = false;
    ////40레벨 달성보상
    //bool isGetlevel40Reward = false;
    ////50레벨 달성보상
    //bool isGetlevel50Reward = false;

    //비트 Flag (1로 설정)
    char Myreward = 0b00000000;

    Myreward = Myreward | 0b00000001; // LEVEL1_10Reward_10
    //0b01011000
    //0b00000001
    //0b01011001

    std::cout << "Myreward = "<< std :: bitset<8>(Myreward) << std::endl;//<< std::end| 개행(printf에 \n과 같다)

    // 비트가 활성화 되어 있는지 체크
    bool isEnable = false;
    isEnable = Myreward & 0b00000001;
    std::cout << "Myreward Check = " << isEnable << std::endl;

    // 비트 0으로 설정
    Myreward = Myreward & ~0b00000001;
    std::cout << "Myreward Set = " << std::bitset<8>(Myreward) << std::endl;

    // 위 예문 해석본

   /* 주어진 코드는 C++에서 비트 플래그(bit flags)를 사용하는 예제를 보여줍니다.이 코드를 한 줄씩 해석하겠습니다 :

        1. `char Myreward = 0b00000000; `: `Myreward`라는 이름의 `char` 데이터 타입 변수를 선언하고, 초기값으로 8비트 모두 0인 이진수 0b00000000을 설정합니다.이 변수는 비트 플래그를 저장할 용도로 사용됩니다.

        2. `Myreward = Myreward | 0b00000001; `: `Myreward` 변수에 자체와 0b00000001을 비트 OR 연산(| )을 사용하여 적용합니다.이 연산은 `Myreward` 변수의 일부 비트를 1로 설정합니다.여기서는 가장 오른쪽 비트(가장 낮은 자리 비트)를 1로 설정하는 것입니다.따라서 `Myreward` 변수의 값은 0b00000001이 됩니다.

        3. `std::cout << "Myreward = " << std::bitset<8>(Myreward) << std::endl; `: `Myreward` 변수의 값을 이진수로 출력하는 부분입니다. `std::bitset<8>(Myreward)`는 `Myreward` 변수를 8비트 크기의 이진수로 변환하여 출력합니다.

        4. `bool isEnable = false; `: `isEnable`라는 이름의 부울(boolean) 변수를 선언하고 초기값을 `false`로 설정합니다.

        5. `isEnable = Myreward & 0b00000001; `: `Myreward` 변수와 0b00000001을 비트 AND 연산(&)을 사용하여 `isEnable` 변수에 저장합니다.이 연산은 `Myreward` 변수의 가장 오른쪽 비트가 1인지 여부를 확인합니다.만약 해당 비트가 1이면 `isEnable` 변수에 `true`가 저장되고, 그렇지 않으면 `false`가 저장됩니다.

        6. `std::cout << "Myreward Check = " << isEnable << std::endl; `: `isEnable` 변수의 값을 출력하여 해당 비트가 활성화되어 있는지 여부를 출력합니다.

        7. `Myreward = Myreward & ~0b00000001; `: `Myreward` 변수와 비트 NOT 연산자(`~`)를 사용하여 가장 오른쪽 비트를 0으로 설정합니다.이를 통해 해당 비트를 비활성화시킵니다.

        8. `std::cout << "Myreward Set = " << std::bitset<8>(Myreward) << std::endl; `: `Myreward` 변수의 값을 다시 이진수로 출력하여 해당 비트가 0으로 설정되었음을 확인합니다.

       이 코드는 비트 연산을 사용하여 특정 비트 플래그를 설정하고 확인하는 간단한 예제를 보여줍니다.이러한 비트 플래그를 사용하면 여러 상태를 하나의 변수에 효율적으로 저장하고 관리할 수 있습니다.*/

















}





