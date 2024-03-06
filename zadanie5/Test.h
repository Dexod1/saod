#pragma once
#include <iostream>
using namespace std;

class Test
{
	static int nCount;
public:
	Test() {
		nCount++;
		cout << "Constructor" << " " << nCount << endl;
	}

	Test(const Test& t)
	{
		nCount++;
		cout << "Copy" << " " << nCount << endl;
	}



	~Test() {
		nCount--;
		cout << "Destructor" << " " << nCount << endl;
	}
};

