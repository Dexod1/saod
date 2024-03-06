#pragma once
#include "Test.h";

class Aggregate
{
	Test m_objTest;
public:
	Aggregate() {
		cout << "Aggregate Constructor" << endl;
	}

	~Aggregate() {
		cout << "Aggregate Destructor" << endl;
	}
};

