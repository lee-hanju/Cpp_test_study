#include <iostream>
using namespace std;
class TV {
private:
	int channel;
	int no;
	int volum;
public:
	void volumUp(int size);
	void volumDown(int size);
	void printChannelInfo();
	TV(int no);
	TV(int no, int channel);
	TV(int no, int channel, int volum);
	~TV();
};
//�����
TV::~TV() {
	cout << no << "���� ������ �������ϴ�."<<endl;
}
TV::TV(int no) {
	this->no = no;
	this->channel = 1;
	this->volum = 10;

	cout << no << "���� ������ �������ϴ�."<<endl;
}

TV::TV(int no, int channel) {
	this->no = no;
	this->channel = channel;
	this->volum = 10;
	cout << no << "���� ������ �������ϴ�." << endl;
}
TV::TV(int no, int channel, int volum) {
	this->no = no;
	this->channel = channel;
	this->volum = volum;
	cout << no << "���� ������ �������ϴ�." << endl;
}

void  TV::volumDown(int size) {
	volum -= size;
	cout << no << "���� ������ �ٿ����ϴ�." << endl;
}
void  TV::volumUp(int size) {
	volum += size;
	cout << no << "���� ������ ������ϴ�." << endl;
}

void TV::printChannelInfo() {
	cout << no << "�� TV, ä��: " << channel << " �Ҹ�: " << volum << endl;
}


int main() {
	const int MAX = 3;
	TV* t = new TV[MAX]{TV(3), TV(2, 4), TV(3,7,5)};
	t[0].volumUp(5);
	t[1].volumDown(10);
	t[2].volumDown(5);
	for (int i = 0; i < MAX; i++) {
		t[i].printChannelInfo();
	}


	delete[] t;
}
