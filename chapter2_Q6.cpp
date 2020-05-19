#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "새 암호을 입력하세요>> ";
	char password[100];
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요>> ";
	char npassword[100];
	cin >> npassword;
	if (!(strcmp(password,npassword))) {
		cout << "같습니다";
	}
	else {
		cout << "같지 않습니다";
	}
}