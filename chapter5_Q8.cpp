#include<iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int top;
public:
	MyIntStack() {}
	MyIntStack(int size) { this->size = size; top = 0; p = new int[size]; }
	MyIntStack(const MyIntStack& s);
	~MyIntStack() { delete p; }
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	p = new int[s.size];
	top = s.top;
	
	for (int i = 0; i < s.top; i++) {
		p[i] = s.p[i];
	}
}

bool MyIntStack::push(int n) {
	if (top < size) {
		p[top] = n;
		top++;
		return true;
	}
	else return false;
}

bool MyIntStack::pop(int& n) {
	if (top > 0) {
		n = p[top - 1];
		top--;
		return true;
	}
	else return false;

}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}