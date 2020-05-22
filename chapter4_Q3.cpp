#include<iostream>
#include <string>
using namespace std;


int main() {
	string t;
	cout << "문자열 입력>> ";
	getline(cin, t);
	int position = -1;
	int cnt = 0;
	while (true) {
		position = t.find('a', position+1); //0
		cout << position << endl;
		if (position == -1) break;
		cnt++;

	}
	cout << cnt;
}