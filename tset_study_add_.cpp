#include<iostream>
using namespace std;
class Accumlator {
	int value;
public:
	Accumlator(int value) { this->value = value; }
	Accumlator& add(int n) { value += n; return *this; }
	int get();
};

int Accumlator::get() {
	return value;
}

int main() {
	Accumlator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}