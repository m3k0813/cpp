/******************************************************************************************
프로그램명 : practice09.cpp
설명 : 이름과 전화번호를 입력받아 출력하고 검색하는 프로그래밍
작성일시 : 2021.03.26
작성자 : 민정준
******************************************************************************************/
#include <iostream>
#include<string>      //string 헤더
#include "Person.h"       //Person.h 
#include<stdlib.h>
using namespace std;

int main()
{
	string n, t, search;         //이름 전화번호 검색할 이름 변수 선언  
	Person p[3];               //객체 배열 생성
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {                     //p배열에 순차적으로 이름과 전화번호 저장
		cout << "사람 " << i + 1 << ">> ";
		cin >> n >> t;
		p[i].set(n, t);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << p[i].getName() << " ";              //p배열의 저장된 이름 모두 출력
	}

	cout << endl << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> search;                        //검색할 이름 입력

	for (int i = 0; i < 3; i++) {                     //검색할 변수에 있는 값이 p배열에 있을 경우 전화번호 출력 
		if (search == p[i].getName()) {
			cout << "전화 번호는 " << p[i].getTel();
			break;
		}
	}
	system("pause > null");       //exe 파일 실행을 위한 system함수
}