#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person() {            //기본 생성자

}

void Person::set(string name, string tel) {            //이름과 전화번호를 변수에 저장
	this->name = name;
	this->tel = tel;
}