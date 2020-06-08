#include<iostream>
using namespace std;
class Account {
	string name;
	int id;
	int balance;
public:
	Account();
	Account(string n, int i, int b);
	void deposit(int money);
	int withdraw(int money);
	string getOwner();
	int inquiry();
};

Account::Account() {
	name = ""; id = 0; balance = 0;
}

Account::Account(string n, int i, int b) {
	name = n; id = i; balance = b;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	balance -= money;
}

string Account::getOwner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << "원 입니다" << endl;
	a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << "원 입니다." << endl;
}
