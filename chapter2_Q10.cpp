#include<iostream>
using namespace std;
int main() {
	cout << "���ڿ� �Է� >>";
	string s = "hello";
	for (int i = 1; i <= s.length(); i++) {
		for (int j = 0; j < i; j++) {
			cout << s[j];
		}
		cout << endl;
	}		
}