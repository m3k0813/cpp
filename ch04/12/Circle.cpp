#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

void Circle::setCircle(string name, int radius) {      //�̸��� ������ ����
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {         //���� ���ϱ�
	return 3.14 * radius * radius;
}

string Circle::getName() {           //���� �̸� ��ȯ
	return name;
}