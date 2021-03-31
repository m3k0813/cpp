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
	string getName() { return name; }          //이름 반환
	string getTel() { return tel; }           //전화번호 반환
	void set(string name, string tel);         //이름과 번호 설정
};
#endif