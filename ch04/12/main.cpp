/******************************************************************************************
프로그램명 : practice12.cpp
설명 : 원의 개수를 입력받아 그 원의 개수 만큼 반지름을 입력한 뒤 면적을 구하는 프로그래밍 
작성일시 : 2021.03.26
작성자 : 민정준
******************************************************************************************/
#include<iostream>
using namespace std;
#include"Circle.h"
#include"CircleManager.h"

int main()
{
	int num;
	cout << "원의 개수 >> ";
	cin >> num;                 //원의 숫자 입력
	CircleManager circle(num);       //객체 생성
	circle.searchByName();
	circle.searchByArea();

}
