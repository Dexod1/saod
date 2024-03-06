#pragma once
#include "Aggregate.h";
template <typename T> class AggregateT 
{
	T m_objTest;
public:
	AggregateT() {
		cout << "AggregateT Constructor" << endl;
	}

	~AggregateT() {
		cout << "AggregatorT Destructor" << endl;
	}
};