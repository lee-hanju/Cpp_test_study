#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char nonstop[100];
	while (1) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		if (!strcmp(nonstop,"yes")) {
			cout << "�����մϴ�...";
			break;
		}
		else {
			cin.getline(nonstop, 100, '\n');
		}
	}
}