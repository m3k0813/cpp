#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H
#include <iostream>
#include "Circle.h"
using namespace std;

class CircleManager {
	Circle* p;       //Circle �迭�� ���� ������
	int size;         //�迭�� ũ��
public:
	CircleManager(int size);     //size ũ���� �迭�� ���� ����, ����ڷκ��� �Է� �Ϸ�
	~CircleManager();           // �Ҵ�� �޸� ��ȯ, �Ҹ�
	void searchByName();        //����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea();        //����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};
#endif