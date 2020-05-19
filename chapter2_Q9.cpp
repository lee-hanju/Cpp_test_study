#include<iostream>
using namespace std;
int main() {
	char name[100];
	cout << "이름은?";
	cin.getline(name, 100, '\n');
	char adress[100];
	cout << "주소는?";
	cin.getline(adress, 100, '\n');
	int age;
	cout << "나이는?";
	cin >> age;
	cout << name << " , " << adress << " , " << age << "세";
}