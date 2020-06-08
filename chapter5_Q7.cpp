#include<iostream>
using namespace std;

class MyIntStack {
	int p[10]; // �ִ� 10���� ���� ����
	int top; //������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() { top = 0; }
	MyIntStack(int t) { top = t; }
	bool push(int n); //���� n Ǫ��. �� �������� false,�ƴϸ� true ����
	bool pop(int& n); // pop�Ͽ� n�� ����. ������ ��������� false,�ƴϸ� true ����
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
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}