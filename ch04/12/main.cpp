/******************************************************************************************
���α׷��� : practice12.cpp
���� : ���� ������ �Է¹޾� �� ���� ���� ��ŭ �������� �Է��� �� ������ ���ϴ� ���α׷��� 
�ۼ��Ͻ� : 2021.03.26
�ۼ��� : ������
******************************************************************************************/
#include<iostream>
using namespace std;
#include"Circle.h"
#include"CircleManager.h"

int main()
{
	int num;
	cout << "���� ���� >> ";
	cin >> num;                 //���� ���� �Է�
	CircleManager circle(num);       //��ü ����
	circle.searchByName();
	circle.searchByArea();

}
