#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
public:	
	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random() {
	srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생
}

int Random::next() {
	int n = rand();  // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
	return n;
}

int Random::nextInRange(int a, int b) {
	int num = rand() % (b - a + 1) + a;     // 2(a)에서 4(b) 까지의 랜덤 정수 발생
	return num;
}


int main()
{
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서" << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}