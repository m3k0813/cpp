#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {          //Person class 
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }          //�̸� ��ȯ
	string getTel() { return tel; }           //��ȭ��ȣ ��ȯ
	void set(string name, string tel);         //�̸��� ��ȣ ����
};
#endif