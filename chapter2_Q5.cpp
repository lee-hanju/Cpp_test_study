#include<iostream>
using namespace std;
int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).";
	char array[100];
	int cnt = 0;
	cin.getline(array, 100, '\n');
	for (int i = 0; i < sizeof(array); i++) {
		if (array[i] == 'x') { cnt++; }
	}
	cout << "x�� ������" << cnt;
}