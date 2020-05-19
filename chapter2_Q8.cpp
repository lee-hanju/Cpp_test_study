#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "5명의 이름을 ';'로 구분하여 입력하세요>>";
	char name[100];
	char result[100] = "";
	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << ":" << name << endl;
		if (strlen(name) > strlen(result)) {
			strcpy_s(result, sizeof(result), name);
		}
	}
	cout << "가장 긴 이름은 " << result;
}