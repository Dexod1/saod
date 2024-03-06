#include <iostream>
#include "Test.h";
#include "Child.h";
#include "Aggregate.h";
#include "AggregateT.h";


Test t;
void foo(Test t) {
	cout << "foo is running" << endl;
}

int main()
{
	Test* p = new Test;
	cout << endl;
	Test* a = new Test[4];
	cout << endl;
	delete p;
	cout << endl;
	delete[] a;
	cout << endl;
	foo(t);
	cout << endl;
	Child c;
	cout << endl;
	Aggregate b;
	cout << endl;
	AggregateT<Test> d;
	cout << endl;
}
