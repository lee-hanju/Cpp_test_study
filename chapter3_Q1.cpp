#include<iostream>
using namespace std;
class Tower {
public:
	int height;
	Tower();
	Tower(int r);
	int getheight();
};

Tower::Tower(){
	height = 1;
}

Tower::Tower(int r) {
	height = r;
}

int Tower::getheight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getheight() << "����" << endl;
	cout << "���̴�" << seoulTower.getheight() << "����" << endl;
}