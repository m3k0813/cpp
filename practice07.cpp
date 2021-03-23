#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class SelectableRandom {
public:
	SelectableRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectableRandom::SelectableRandom() {
	srand((unsigned)time(0));
}

int SelectableRandom::next() {
	int  r = rand();

	while (r % 2 == 1) {       // r이 홀수면 다시 랜덤 뽑기
		r = rand();
	}
	return r;           // r이 짝수이면 리턴


}

int SelectableRandom::nextInRange(int a, int b) {
	int r = rand() % (b - a + 1) + a;

	while (r % 2 == 0) {           // r이 짝수면 계속 랜덤 뽑기
		r = a + (rand() % (b - a + 1));
	}
	return r;           // r이 홀수면 리턴
}


int main()
{
	SelectableRandom sr;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2에서" << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}