#include<iostream>
#include"Circle2.h"

void Circle::setRadius(int r) {          //������ ����
	radius = r;
}

double Circle::getArea() {             //���� ����
	return radius * radius * 3.14;
}
