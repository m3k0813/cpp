#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H
#include <iostream>
#include "Circle.h"
using namespace std;

class CircleManager {
	Circle* p;       //Circle 배열에 대한 포인터
	int size;         //배열의 크기
public:
	CircleManager(int size);     //size 크기의 배열을 동적 생성, 사용자로부터 입력 완료
	~CircleManager();           // 할당된 메모리 반환, 소멸
	void searchByName();        //사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea();        //사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};
#endif