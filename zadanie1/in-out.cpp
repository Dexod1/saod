#include <iostream>
using namespace std;

int main()
{
     "Hello World!\n";
     int x, y;

     cout << "x = ? "; cin >> x; //Подсказка и ввод x
     cout << "y = ? "; cin >> y; //Подсказка и ввод y
     cout << x << " + " << y << " = " << x + y << endl;
     cout << x << " - " << y << " = " << x - y << endl;
     cout << x << " * " << y << " = " << x * y << endl;
     cout << x << " / " << y << " = " << x / y << endl;
     cout << x << " % " << y << " = " << x % y << endl;
     cout << x << " | " << y << " = " << (x | y) << endl;
     cout << x << " & " << y << " = " << (x & y) << endl;
     cout << x << " ^ " << y << " = " << (x ^ y) << endl;
     cout << x << " << " << y << " = " << (x >> y) << endl;
     cout << x << " >> " << y << " = " << (x << y) << endl;
}
