#include<iostream>
using namespace std;
int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (1) {
		int sm;
		int amount = 0;
		string select_menu;
		cout << "«��:1, ¥��:2, ������: 3, �з�:4 >> ";
		cin >> sm;
		if (sm == 1) {
			select_menu = "«��";
		}
		else if (sm == 2) {
			select_menu = "¥��";
		}
		else if (sm == 3) {
			select_menu = "������";
		}
		else if (sm == 4) {
			select_menu = "����";
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���" << endl;
			continue;
		}
		cout << "���κ�?";
		cin >> amount;
		cout << select_menu << " " << amount << "�κ� ���Խ��ϴ�" << endl;
	}
}