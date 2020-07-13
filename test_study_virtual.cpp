#include<iostream>
using namespace std;
class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};

class IntStack :public AbstractStack {
	int* p;
	int stacksize;
	int top;
public:
	IntStack(int size) { this->stacksize = size; top = -1; p = new int[stacksize]; }
	bool push(int n);
	bool pop(int& n);
	int size();
};

bool IntStack::push(int n) {
	if (top == (stacksize - 1)) return false;
	p[++top] = n;
	return true;
}

bool IntStack::pop(int& n) {
	if (top == (-1)) return false;
	n = p[top--];
	return true;
}

int IntStack::size() {
	return top + 1;
}

int main() {
	IntStack intstack(5);
	for (int i = 0; i < 10; i++) {
		if (intstack.push(i)) { cout << "push 성공" << endl; }
		else cout << "stack full" << endl;
	}
	cout << "스택 정수 개수" << intstack.size() << endl;
	int n;
	for (int i = 0; i < 10; i++) {
		if (intstack.pop(n)) { cout << "pop 성공" << n << endl; }
		else cout << "stack empty" << endl;
	}
}