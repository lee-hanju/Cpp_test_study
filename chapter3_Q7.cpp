#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class SelectableRandom {
private:
	int sw;
public:
	SelectableRandom(int sw);
	int next();
	int nextInRange(int x, int y);
};

SelectableRandom::SelectableRandom(int sw) {
	this->sw = sw;
	srand((unsigned)time(0));
}
int SelectableRandom::next() {
	if (sw == 0) {
		for (;;) {
			int k = rand();
			if (k % 2 == 0) {
				return k;
				break;
			}
		}
	}
	else {
		for (;;) {
			int k = rand();
			if (k % 2 != 0) {
				return k;
				break;
			}
		}
	}
}
int SelectableRandom::nextInRange(int a, int b){
	if (sw == 0) {
		for (;;) {
			int k = rand() % (b - a + 1) + a;
			if (k % 2 == 0) {
				return k;
				break;
			}
			else {
				int k = rand() % (b - a + 1) + a;
				if (k % 2 != 0) {
					return k;
					break;
				}
			}
		}
	}
}