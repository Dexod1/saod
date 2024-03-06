#include <iostream>
#include "Str.h"
using namespace std;

void Test(Str s) {}

int main()
{
	Str s = "123";
	cout << s << endl;
	cout << strlen(s) << endl;
	Test(s);
	cout << s << endl;
	cout << strlen(s) << endl;

	Str t;
	t = s;

	cout << s << endl;
	cout << strlen(s) << endl;

	t = s = t = "Uh";
	cout << s << endl;
	cout << t << endl;
	s += "324";
	cout << s << endl;
	Str a = "hhfaqws";
	cout << s + a + t<< endl;
}