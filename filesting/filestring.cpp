#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std; // string �տ� std :: �Ⱥ����� ��

struct sttest // ����ü sttest�� ����ڴ�.
{
	string m_name = ""; // string�̶�� m_name�� "" �ִ´�. ���ڸ� ���� �� ū ����ǥ
	int m_math = 0; // ������ �����Ѵ�. 
	int m_eng = 0;  // ������ �����Ѵ�. 
	int m_lang = 0; // ������ �����Ѵ�. 

	sttest(string name, int math, int eng, int lang):
	m_name(name), m_math(math), m_eng(eng), m_lang(lang) {}

	void printTest()
	{
		printf("name=%s, math=%d, eng=%d, lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang);
	}

};

//�Լ��̸� : pustStTest
//�Ķ����(�Է¹��� ����) : vector(�迭��)<sttest>&(����ü�� ���� �����Ѵ�) vecTest(��), string& str(str�� ���ڿ� ���� �����Ͽ�) // 
//��ȯ��(���ϰ�) : ����(void�� ����.)
void pustStTest(vector<sttest>& vecTest, string& str)
{
	stringstream ssTEST(str);//string ���ڿ��� stringstream �������·� �����
	string line; // �о�� string�� ��Ƶ� ����
	
	//ssTest�� ���� ����','�� �������� ���ڸ� �о line�� �ִ´�. 
	//getline ����� false(���̻� ���� ���ڿ��� ����)�� ����
	while (getline(ssTEST, line, ','))
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end());
		printf("line[% s]\n", line.c_str());
	}

}

int main()
{	//���� ����
	//std::ofstream writefile;
	//writefile.open("text.txt");// "text.txt" ������ ���� ���ٸ� �����Ѵ�.
	
	//std::string strtest = "test 1234 abcd �Դϴ�.";
	//writefile.write(strtest.c_str(), strtest.size());

	//writefile.close(); //������ �������� �ݵ�� �ݱ� ����


	// c++���� ������ ������ ����°��̴�.
	//

	//���� �б� 
	std::ifstream readFile; // ���ٴٵ�:: fstream(������ ���) readFile ������ �����.
	readFile.open("text.txt");// readfile (�̶�� ������).open {(��� �ִ´�.), "text.txt"(��� ������ ������)} 

	vector<sttest> vecTest; // ���� �߳־ Ǫ�ø� �ϸ� �� ���´�. 
	//vecTest��� sttest ����ü ������ �迭(vector)�� �����.

	/*sttest aaa("aaa", 80, 60, 70); ����ü �ȿ� sttest aaa�� �����.
	vecTest.push_back(aaa); vecTest��� �迭 �ڿ� ����ü ���� ���� �� aaa�� �ִ´�.
	sttest bbb("bbb", 90, 30, 40);
	vecTest.push_back(bbb);vecTest��� �迭 �ڿ� ����ü ���� ���� �� bbb�� �ִ´�.
	sttest ccc("ccc", 20, 90, 80);
	vecTest.push_back(ccc); vecTest��� �迭 �ڿ� ����ü ���� ���� �� ccc�� �ִ´�.*/


	if (readFile.is_open()) // ���� readFile�� ������ �� ��ȣ ���� ������ �����Ѵ�.
	{
		while (!readFile.eof()) // !readFile(�������� ����).eof(������ ������ �ʴ� ����) while(��ȣ ���� �ݺ��Ѵ�.)
		{

			string str; //string{���ڿ� ������ ����(����)} str�� �����Ѵ�.
			getline(readFile, str);// readFile�� �ؽ�Ʈ�� ���� �о str�� �ִ´�. 
			printf("str=%s\n", str.c_str()); //printf(����Ѵ�) "str=%s\n"(str = %s�� ���� ����), str.c_str(str�� ���� ���ڿ��� ��ȯ�ؼ�) 
			
			pustStTest(vecTest, str);
		}
		readFile.close(); //readFile(���� readfile��).close() ������.
	}
	for (sttest& test : vecTest) //for(��ȣ�� ���� �ϴ� ���� {}���� ������ �ݺ��Ѵ�.) 
								 //for each ������ �迭�� ó������ ������ �����Ѵٴ� ��
								 // : �ڿ� ���� �̸��� �迭�� ����Ű��, ���� ���������� ����ٴ� ���̴�. ���⼭ &���� ����üsttest�� �������� �ּҸ� �����ϰڴٴ� ���̴�. 
	{
		test.printTest(); // test.printTest()�Լ��� �����Ѵ�.
	}

}


