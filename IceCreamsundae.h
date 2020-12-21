#pragma once
#include <iostream>
using namespace std;
class IceCreamSundae {
	int taste;
	int size;
	int topping;

public:
	IceCreamSundae();
	~IceCreamSundae();
	void set(int taste, int size, int topping) {
		this->taste = taste;
		this->size = size;
		this->topping = topping;
	}
	void outputDescription();
	double computeprice();
};
