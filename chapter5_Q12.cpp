#include<iostream>
using namespace std;
class Dept {
	int size;
	int* score;
public:
	Dept(int size) { this->size = size; score = new int[size]; }
	Dept(const Dept& dept);
	~Dept() { delete[] score; }
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	score = new int[dept.size];
	for (int i = 0; i < dept.size; ++i)
		this->score[i] = dept.score[i];
}


void Dept::read() {
	for (int i = 0; i < size; i++) {
		cin >> score[i];
	}
}

bool Dept::isOver60(int index) {
	if (score[index] > 60) {
		return true;
	}
	else return false;
}

int countPass(Dept dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	cout << "10개 점수 입력>> ";
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
}