#include<iostream>
using namespace std;
class Matrix {
	int l[4];
public:
	Matrix() {
		for (int i = 0; i < 4; i++) {
			l[i] = 0;
	} 
	}
	Matrix(int l1, int l2, int l3, int l4) {
		for (int i = 0; i < 4; i++) {
			l[0] = l1; l[1] = l2; l[2] = l3; l[3] = l4;
		}
	}
	void show() {
		cout << "Matrix = {";
		for (int i = 0; i < 4; i++) {
			cout << l[i] << ' ';
		}
		cout << "}" << endl;
	}
	Matrix operator+(Matrix op2);
	Matrix& operator+=(Matrix op2);
	bool operator ==(Matrix op2);
};

Matrix Matrix :: operator+(Matrix op2) {
	Matrix tmp;
	for (int i = 0; i < 4; i++) {
		tmp.l[i] = this->l[i] + op2.l[i];
	}
	return tmp;
}

Matrix& Matrix :: operator+=(Matrix op2) {
	for (int i = 0; i < 4; i++) {
		this->l[i] += op2.l[i];
	}
	return *this;
}

bool Matrix :: operator==(Matrix op2) {
	for (int i = 0; i < 4; i++) {
		if (this->l[i] != op2.l[i]) {
			return false;
		}
	}
	return true;
}