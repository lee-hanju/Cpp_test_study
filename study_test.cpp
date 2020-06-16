#include<iostream>
#include<cstring>
using namespace std;
class Book {
	string title;
	int price;
public:
	Book(string title, int price) { this->title = title;  this->price = price; }
	void set(string, int price) { this->title = title; this->price = price; }
	void show() { cout << title << ' ' << price << "원 " << endl; }
};

int main() {
	Book cpp("명품 C++", 10000);
	Book java = cpp;
	java.set("명품 자바", 12000);
	cpp.show();
	java.show();
}