#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char nonstop[100];
	while (1) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		if (!strcmp(nonstop,"yes")) {
			cout << "종료합니다...";
			break;
		}
		else {
			cin.getline(nonstop, 100, '\n');
		}
	}
}