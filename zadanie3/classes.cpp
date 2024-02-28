#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a;
    Complex b(1, 2), c = 3;
    Complex d(3, 2);
    Complex e(5, 3);
    Complex f[4];
    Complex v[4]{ 1,2,Complex(2,3) };
    Complex* pc = new Complex;
    cout << "without parameters: " << a << endl;
    cout << "parametrs: " << b << " " << c << endl;
    cout << d << " + " << e << " = " << d + e << " reverse: " << (d + e) - e << endl;
    cout << d << " - " << e << " = " << d - e << " reverse: " << (d - e) + e << endl;
    cout << d << " * " << e << " = " << d * e << " reverse: " << (d * e) / e << endl;
    cout << d << " / " << e << " = " << d / e << " reverse: " << (d / e) * e << endl;
    cout << b << " Conjugate: " << b.Conjugate() << " reverse: " << b.Conjugate().Conjugate() << endl;
    cout << e << " Mod: " << e.Mod() << endl;
    for (Complex* pf = f; pf - f < sizeof(f) / (sizeof(double) * 2); cout << *pf++ << " ");
    cout << endl;
    for (Complex* pv = v; pv - v < sizeof(v) / (sizeof(double) * 2); cout << *pv++ << " ");
    cout << endl;
    cout << *pc << endl;
    delete pc;
    pc = new Complex(1);
    cout << *pc << endl;
    delete pc;
    pc = new Complex(1, 2);
    cout << *pc << endl;
    cout << pc->Re << " " << pc->Im << endl;
    delete pc;
    pc = new Complex[3];
    cout << pc[1].Re << endl;
    delete pc;
};
