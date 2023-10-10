#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std; // string 앞에 std :: 안붙혀도 됨

struct sttest // 구조체 sttest를 만들겠다.
{
	string m_name = ""; // string이라는 m_name에 "" 넣는다. 문자를 넣을 땐 큰 따옴표
	int m_math = 0; // 변수를 선언한다. 
	int m_eng = 0;  // 변수를 선언한다. 
	int m_lang = 0; // 변수를 선언한다. 

	sttest(string name, int math, int eng, int lang):
	m_name(name), m_math(math), m_eng(eng), m_lang(lang) {}

	void printTest()
	{
		printf("name=%s, math=%d, eng=%d, lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang);
	}

};

//함수이름 : pustStTest
//파라미터(입력받을 변수) : vector(배열을)<sttest>&(구조체를 참조 전달한다) vecTest(로), string& str(str의 문자열 값을 참조하여) // 
//반환값(리턴값) : 없음(void는 없다.)
void pustStTest(vector<sttest>& vecTest, string& str)
{
	stringstream ssTEST(str);//string 문자열을 stringstream 변수형태로 만든다
	string line; // 읽어온 string을 담아둘 변수
	
	//ssTest를 왼쪽 부터','를 기준으로 문자를 읽어서 line에 넣는다. 
	//getline 결과가 false(더이상 읽을 문자열이 없다)면 종료
	while (getline(ssTEST, line, ','))
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end());
		printf("line[% s]\n", line.c_str());
	}

}

int main()
{	//파일 쓰기
	//std::ofstream writefile;
	//writefile.open("text.txt");// "text.txt" 파일을 연다 없다면 생성한다.
	
	//std::string strtest = "test 1234 abcd 입니다.";
	//writefile.write(strtest.c_str(), strtest.size());

	//writefile.close(); //파일을 열었으면 반드시 닫기 실행


	// c++에서 변수는 공간을 만드는것이다.
	//

	//파일 읽기 
	std::ifstream readFile; // 스텐다드:: fstream(공간의 모양) readFile 공간을 만든다.
	readFile.open("text.txt");// readfile (이라는 공간에).open {(열어서 넣는다.), "text.txt"(라는 파일의 정보를)} 

	vector<sttest> vecTest; // 갚만 잘넣어서 푸시만 하면 잘 나온다. 
	//vecTest라는 sttest 구조체 공간을 배열(vector)로 만든다.

	/*sttest aaa("aaa", 80, 60, 70); 구조체 안에 sttest aaa를 만든다.
	vecTest.push_back(aaa); vecTest라는 배열 뒤에 구조체 공간 내의 값 aaa를 넣는다.
	sttest bbb("bbb", 90, 30, 40);
	vecTest.push_back(bbb);vecTest라는 배열 뒤에 구조체 공간 내의 값 bbb를 넣는다.
	sttest ccc("ccc", 20, 90, 80);
	vecTest.push_back(ccc); vecTest라는 배열 뒤에 구조체 공간 내의 값 ccc를 넣는다.*/


	if (readFile.is_open()) // 만약 readFile이 열렸을 때 괄호 안의 문장을 수행한다.
	{
		while (!readFile.eof()) // !readFile(변수공간 내에).eof(정보가 끝나지 않는 동안) while(괄호 안을 반복한다.)
		{

			string str; //string{문자열 형태의 공간(변수)} str을 선언한다.
			getline(readFile, str);// readFile에 텍스트를 한줄 읽어서 str에 넣는다. 
			printf("str=%s\n", str.c_str()); //printf(출력한다) "str=%s\n"(str = %s의 값을 띄어쓰기), str.c_str(str의 값을 문자열로 변환해서) 
			
			pustStTest(vecTest, str);
		}
		readFile.close(); //readFile(변수 readfile을).close() 끝낸다.
	}
	for (sttest& test : vecTest) //for(괄호를 수행 하는 동안 {}안의 문장을 반복한다.) 
								 //for each 구문은 배열의 처음부터 끝까지 수행한다는 뜻
								 // : 뒤에 변수 이름은 배열을 가르키고, 앞은 변수공간을 만든다는 뜻이다. 여기서 &앞은 구조체sttest의 원본값의 주소를 참조하겠다는 말이다. 
	{
		test.printTest(); // test.printTest()함수를 수행한다.
	}

}


