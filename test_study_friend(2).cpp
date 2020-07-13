#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius= " << radius << " 인 원" << endl; }
	friend Circle& operator++(Circle & c);
	friend Circle operator++(Circle& c, int x);
};
Circle& operator++(Circle& c) {
	c.radius++;
	return c;
}
Circle operator++(Circle& c, int x) {
	Circle temp;
	temp = c.radius;
	c.radius++;
	return temp;
}

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}