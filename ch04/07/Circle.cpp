#include<iostream>
#include"Circle2.h"

void Circle::setRadius(int r) {          //반지름 설정
	radius = r;
}

double Circle::getArea() {             //면적 설정
	return radius * radius * 3.14;
}
