#include <iostream>
#include "order.h"
#include "IceCreamsundae.h"
using namespace std;


void print() {

	cout << "==�޴�== " << endl;
	cout << "��" << endl;
	cout << "���� �ٴҶ� ����" << endl;
	cout << "Size" << endl;
	cout << "S : 10�� , M : 14��, L : 17��" << endl;
	cout << "���δ� 2�� �߰�" << endl;
	cout << "=====================" << endl;

}
void run_kiosk() {
	Order o1;
	IceCreamSundae I;

	int taste, size, topping;
	while (1) {
		int i = 0, j = 0;
		print();
		cout << "=====================" << endl;
		cout << "1. �ֹ��ϱ�" << endl;
		cout << "2. ������ ���" << endl;
		cout << "3. �ʱ�ȭ" << endl;
		cout << "�����ϼ��� : ";
		cin >> i;
		system("cls");
		switch (i) {
		case 1:
			print();
			cout << "�� ���� : 1.���� 2.�ٴҶ� 3.����" << endl;
			while (j != 1 && j != 2 && j != 3)
				cin >> j;
			taste = j;
			j = 0;
			cout << "������ ���� : 1.Small 2.Medium 3.Large" << endl;
			while (j != 1 && j != 2 && j != 3)
				cin >> j;
			size = j;
			j = 0;
			cout << "���� �� ����" << endl;
			cin >> j;
			topping = j;
			I.set(taste, size, topping);
			system("cls");
			I.outputDescription();
			cout << "���� : " << I.computeprice() << endl;
			o1.push_I(I);
			break;
		case 2:
			system("cls");
			cout << "��ü ������ ���" << endl;
			cout << "==========================================" << endl;
			o1.inform();
			break;
		case 3:
			o1.reset();
			cout << "�ʱ�ȭ �Ϸ�" << endl;
			break;
		}
		cout << endl << "press any key.." << endl;
		while (1)
			if (_kbhit())
				break;
		system("cls");
	}
}
int main() {
	run_kiosk();
}

