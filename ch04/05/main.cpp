/******************************************************************************************
프로그램명 : practice05.cpp
설명 : 영문을 입력받아 임의 문자를 다른 임의의 문자로 바꾸는 프로그래밍
작성일시 : 2021.03.26
작성자 : 민정준
******************************************************************************************/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
	int n, i;       //변수 선언
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (1) {             
		cout << ">>";
		srand((unsigned)time(0));       //시작할 때 마다 다른 랜덤수를 발생시키기 위한 seed 설정
		getline(cin, s, '\n');          //s변수에 엔터(\n)까지 입력
		if (s == "exit") {         //'exit'가 입력되면 반복종료
			break;
		}

		n = rand()%s.length();           //s의 길이까지의 랜덤수 발생
		int i = rand() % 25 +'a';        //랜덤한 문자를 생성 
		s[n] = (char)i;                 //정수형 변수인 i를 char로 캐스팅(형변환) 한 뒤, s의 n번쨰에 넣음
		cout << s << endl;
	}
	system("pause > null");       //exe 파일 실행을 위한 system함수
}
