#include <iostream>
#include "order.h"
#include "IceCreamsundae.h"
using namespace std;


void print() {

	cout << "==메뉴== " << endl;
	cout << "맛" << endl;
	cout << "초코 바닐라 딸기" << endl;
	cout << "Size" << endl;
	cout << "S : 10원 , M : 14원, L : 17원" << endl;
	cout << "토핑당 2원 추가" << endl;
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
		cout << "1. 주문하기" << endl;
		cout << "2. 영수증 출력" << endl;
		cout << "3. 초기화" << endl;
		cout << "선택하세요 : ";
		cin >> i;
		system("cls");
		switch (i) {
		case 1:
			print();
			cout << "맛 선택 : 1.초코 2.바닐라 3.딸기" << endl;
			while (j != 1 && j != 2 && j != 3)
				cin >> j;
			taste = j;
			j = 0;
			cout << "사이즈 선택 : 1.Small 2.Medium 3.Large" << endl;
			while (j != 1 && j != 2 && j != 3)
				cin >> j;
			size = j;
			j = 0;
			cout << "토핑 수 선택" << endl;
			cin >> j;
			topping = j;
			I.set(taste, size, topping);
			system("cls");
			I.outputDescription();
			cout << "가격 : " << I.computeprice() << endl;
			o1.push_I(I);
			break;
		case 2:
			system("cls");
			cout << "전체 영수증 출력" << endl;
			cout << "==========================================" << endl;
			o1.inform();
			break;
		case 3:
			o1.reset();
			cout << "초기화 완료" << endl;
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

