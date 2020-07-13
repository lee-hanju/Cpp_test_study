#include<iostream>
#include<string>
using namespace std;
class Book {
	string name;
	int price, page;
public:
	Book(string name = "", int price = 0, int page = 0) { this->name = name; this->price = price; this->page = page; }
	void show() {
		cout << name << ' ' << price << "원 " << page << " 페이지" << endl;
	}
	string getTitle() { return name; }
	friend bool operator<(Book op1, Book op2);
};
bool operator < (Book op1, Book op2) {
	if (op1.name < op2.name) return true;
	else return false;
}

int main() {
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a) cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}