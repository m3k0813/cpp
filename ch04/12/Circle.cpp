#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

void Circle::setCircle(string name, int radius) {      //이름과 반지름 설정
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {         //면적 구하기
	return 3.14 * radius * radius;
}

string Circle::getName() {           //원의 이름 반환
	return name;
}