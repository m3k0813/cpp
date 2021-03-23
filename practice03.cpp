#include<iostream>
#include<string>
using namespace std;

class Account {
private:
	string name;
	int id;
	int balance;
public:	
	Account(string n, int i, int b);
	string getOwner();
	int deposit(int b);
	int withdraw(int b);
	int inquiry();
};

Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int d) {
	balance += d;
	return balance;

}
int Account::withdraw(int w) {
	balance -= w;
	return balance;

}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}