#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person() {            //�⺻ ������

}

void Person::set(string name, string tel) {            //�̸��� ��ȭ��ȣ�� ������ ����
	this->name = name;
	this->tel = tel;
}