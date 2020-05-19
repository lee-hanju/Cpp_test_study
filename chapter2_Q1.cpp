#include<iostream>
using namespace std;
int main() {
	int n = 100;
	for (int i = 1; i <= n; i++) {
		cout << i << "\t";
		if (i %10 == 0)
		{
			cout << endl;
		}
	}
}