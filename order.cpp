#include "order.h"

Order::Order() {};
Order::~Order() {

}
void Order::reset() {
	v1.clear();
	v1.reserve(0);
}
void Order::inform() {
	vector<IceCreamSundae>::iterator itr;
	double price = 0;
	for (itr = v1.begin(); itr != v1.end(); itr++) {
		itr->outputDescription();
		cout << "°¡°Ý : " << itr->computeprice() << endl;
		price += itr->computeprice();
		cout << "==========================================" << endl;
	}

	cout << "ÃÑÇÕ : " << price << endl;
}

void Order::push_I(IceCreamSundae I) {
	v1.push_back(I);
}
