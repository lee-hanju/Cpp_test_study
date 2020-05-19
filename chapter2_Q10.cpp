#include<iostream>
using namespace std;
int main() {
	cout << "문자열 입력 >>";
	string s = "hello";
	for (int i = 1; i <= s.length(); i++) {
		for (int j = 0; j < i; j++) {
			cout << s[j];
		}
		cout << endl;
	}		
}