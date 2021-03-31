#include <iostream>
#include <string>
#include"CircleManager.h"
using namespace std;

CircleManager::CircleManager(int size) {         //입력받은 수 개수 만큼 원의 이름과 반지름 입력
	string name;
	int radius;
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);          //이름과 반지름 설정
	}
}

CircleManager::~CircleManager() {           //소멸자
	delete[] p;
}

void CircleManager::searchByName() {          //search변수에 입력된 이름이 배열에 있으면 면적 출력
	string search;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == p[i].getName()) {
			cout << search << "의 면적은" << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {           //search변수에 입력된 면적보다 큰 원의 이름과 면적 출력
	int search;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> search;
	cout << search << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (search < p[i].getArea()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
		}
	}
}