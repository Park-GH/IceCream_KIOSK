#pragma once
#include <conio.h>
#include <vector>
#include "IceCreamsundae.h"
class Order {
	vector<IceCreamSundae> v1;
public:
	Order();
	~Order();
	void push_I(IceCreamSundae I);
	void inform();
	void reset();

};