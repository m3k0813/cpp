/******************************************************************************************
프로그램명 : practice07.cpp
설명 : 3개의 원의 반지름을 입력받아 100보다 큰 원의 개수 출력
작성일시 : 2021.03.26
작성자 : 민정준
******************************************************************************************/
#include<iostream>
#include"Circle.h"
using namespace std;

int main()
{
	int count = 0, r;          
	Circle* pArray = new Circle[3];        //동적 객체 배열 생성
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		pArray[i].setRadius(r);             //반지름 설정
		if (pArray[i].getArea() > 100)         //면적이 100보다 크면 count++
			count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다";
	delete pArray;        //메모리 반환

	system("pause > null");       //exe 파일 실행을 위한 system함수
}