#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "5���� �̸��� ';'�� �����Ͽ� �Է��ϼ���>>";
	char name[100];
	char result[100] = "";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << ":" << name << endl;
		if (strlen(name) > strlen(result)) {
			strcpy_s(result, sizeof(result), name);
		}
	}
	cout << "���� �� �̸��� " << result;
}