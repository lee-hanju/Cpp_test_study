#include<iostream>
using namespace std;
int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (1) {
		int sm;
		int amount = 0;
		string select_menu;
		cout << "짬뽕:1, 짜장:2, 군만두: 3, 쫑료:4 >> ";
		cin >> sm;
		if (sm == 1) {
			select_menu = "짬뽕";
		}
		else if (sm == 2) {
			select_menu = "짜장";
		}
		else if (sm == 3) {
			select_menu = "군만두";
		}
		else if (sm == 4) {
			select_menu = "종료";
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else {
			cout << "다시 주문하세요" << endl;
			continue;
		}
		cout << "몇인분?";
		cin >> amount;
		cout << select_menu << " " << amount << "인분 나왔습니다" << endl;
	}
}