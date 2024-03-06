#pragma once
#include "Test.h";
class Child: public Test
{
public:
	Child() {
		cout << "Child Constructor" << endl;
	}

	~Child() {
		cout << "Child Destructor" << endl;
	}
};

