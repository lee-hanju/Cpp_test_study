#include<iostream>
using namespace std;
int main() {
	cout << "문자들을 입력하라(100개 미만).";
	char array[100];
	int cnt = 0;
	cin.getline(array, 100, '\n');
	for (int i = 0; i < sizeof(array); i++) {
		if (array[i] == 'x') { cnt++; }
	}
	cout << "x의 개수는" << cnt;
}