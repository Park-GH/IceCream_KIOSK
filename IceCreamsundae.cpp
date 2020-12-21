#include "IceCreamsundae.h"

IceCreamSundae::IceCreamSundae() {
}
IceCreamSundae::~IceCreamSundae() {

}
void IceCreamSundae::outputDescription() {
	cout << "�� : ";
	switch (taste) {
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "�ٴҶ�" << endl;
		break;
	case 3:
		cout << "����" << endl;
		break;
	}
	cout << "Size : ";
	switch (size) {
	case 1:
		cout << "Small" << endl;
		break;
	case 2:
		cout << "Medium" << endl;
		break;
	case 3:
		cout << "Large" << endl;
		break;
	}

	cout << "���� �� : " << topping << endl;

}
double IceCreamSundae::computeprice() {
	int s;
	switch (size) {
	case 1:
		s = 10; break;
	case 2:
		s = 14; break;
	case 3:
		s = 17; break;
	}
	return (double)(s + 2 * topping);
}
