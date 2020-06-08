#include<iostream>
using namespace std;

class MyIntStack {
	int p[10]; // 최대 10개의 정수 저장
	int top; //스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() { top = 0; }
	MyIntStack(int t) { top = t; }
	bool push(int n); //정수 n 푸시. 꽉 차있으면 false,아니면 true 리턴
	bool pop(int& n); // pop하여 n에 저장. 스택이 비어있으면 false,아니면 true 리턴
};

bool MyIntStack::push(int n) {
	if (top < 10) {
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
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}