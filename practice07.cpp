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

	while (r % 2 == 1) {       // r�� Ȧ���� �ٽ� ���� �̱�
		r = rand();
	}
	return r;           // r�� ¦���̸� ����


}

int SelectableRandom::nextInRange(int a, int b) {
	int r = rand() % (b - a + 1) + a;

	while (r % 2 == 0) {           // r�� ¦���� ��� ���� �̱�
		r = a + (rand() % (b - a + 1));
	}
	return r;           // r�� Ȧ���� ����
}


int main()
{
	SelectableRandom sr;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.next();
		cout << n << ' ';
	}

	cout << endl << endl << "-- 2����" << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = sr.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}