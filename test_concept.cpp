/*
#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else if (a > b) {
		big = a;
		return false;
	}
	else if (a < b) {
		big = b;
		return false;
	}

}

int main() {
	cout << "������ ���� 2���� �Է��ϼ��� >>"<< endl;
	int num, num1, big;
	cin >> num >> num1;
	if (bigger(num, num1, big)) {
		cout << "num�� num1�� �����ϴ�" << endl;
	}
	else {
		cout << "num�� num1�� �ٸ��ϴ�. " <<" ��.ū.��" <<big <<endl;
	}
}
*/



/*#include<iostream>
using namespace std;

void combine(string &t1,string &t2,string &t3) {
	t3 = t1 + " " + t2;
}


int main() {
	string text1("I love you"), text2("very much");
		string text3;
		combine(text1, text2, text3);
		cout << text3;
}
*/



/*
#include<iostream>
using namespace std;

void half(double& n)
{
	n /= 2;
}

int main() {
	double n = 20;
	half(n);
	cout << n;
}
*/