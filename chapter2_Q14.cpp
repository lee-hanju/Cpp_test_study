#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�." << endl;
	int price = 0;
	int result = 0;
	while (1) {
		cout << "�ֹ�>> ";
		char coffee[100];
		int num;
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			price = 2000;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			price = 2500;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			price = 2300;
		}
		price = price * num;
		result += price;
		cout << price << "�� �Դϴ�. ���ְԵ弼��" << endl;
		
		if (result >= 20000) {
			cout << "���� " << result << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�." << endl;
			cout << "*!<�׸� ������ �˹ٻ� ������>!*";
			break;
		}
		

	}
}