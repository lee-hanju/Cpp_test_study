#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	char password[100];
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	char npassword[100];
	cin >> npassword;
	if (!(strcmp(password,npassword))) {
		cout << "�����ϴ�";
	}
	else {
		cout << "���� �ʽ��ϴ�";
	}
}