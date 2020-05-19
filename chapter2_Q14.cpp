#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;
	int price = 0;
	int result = 0;
	while (1) {
		cout << "주문>> ";
		char coffee[100];
		int num;
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			price = 2000;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			price = 2500;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			price = 2300;
		}
		price = price * num;
		result += price;
		cout << price << "원 입니다. 맛있게드세요" << endl;
		
		if (result >= 20000) {
			cout << "오늘 " << result << "원을 판매하여 카페를 닫습니다." << endl;
			cout << "*!<그만 오세요 알바생 힘들어요>!*";
			break;
		}
		

	}
}