#include<iostream>
using namespace std;
int main() {
	char name[100];
	cout << "�̸���?";
	cin.getline(name, 100, '\n');
	char adress[100];
	cout << "�ּҴ�?";
	cin.getline(adress, 100, '\n');
	int age;
	cout << "���̴�?";
	cin >> age;
	cout << name << " , " << adress << " , " << age << "��";
}