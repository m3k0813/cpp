#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;      //원의 반지름 값
	string name;         //원의 이름
public:
	void setCircle(string name, int radius);       //이름과 반지름 설정
	double getArea();                             //면적 
	string getName();                            //이름 반환
};
#endif