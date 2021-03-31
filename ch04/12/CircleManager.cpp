#include <iostream>
#include <string>
#include"CircleManager.h"
using namespace std;

CircleManager::CircleManager(int size) {         //�Է¹��� �� ���� ��ŭ ���� �̸��� ������ �Է�
	string name;
	int radius;
	this->size = size;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);          //�̸��� ������ ����
	}
}

CircleManager::~CircleManager() {           //�Ҹ���
	delete[] p;
}

void CircleManager::searchByName() {          //search������ �Էµ� �̸��� �迭�� ������ ���� ���
	string search;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> search;
	for (int i = 0; i < size; i++) {
		if (search == p[i].getName()) {
			cout << search << "�� ������" << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {           //search������ �Էµ� �������� ū ���� �̸��� ���� ���
	int search;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> search;
	cout << search << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (search < p[i].getArea()) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
		}
	}
}