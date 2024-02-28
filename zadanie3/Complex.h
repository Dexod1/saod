#pragma once
#include <cmath>
using namespace std;
class Complex
{
public:
	double Re;
	double Im;

	Complex(double re = 0, double im = 0) { Re = re; Im = im; }
	double Mod() 
	{
		return sqrt((Re*Re) + (Im*Im));
	}
	double Arg()
	{
		if (Re > 0) {
			return atan(Im / Re);
		}
		else if (Re < 0) {
			if (Im >= 0) return (acos(-1) + atan(Im / Re));
			else return ((-1 * acos(-1)) - atan(Im / Re));
		}
		else if(Re == 0) return 0;
		else {
			if (Im > 0) return acos(0);
			else if (Im < 0) return (-1 * acos(0));
		}
	}
	Complex Conjugate()
	{
		return Complex(Re, 0 - Im);
	}
	Complex operator +(const Complex& c)const
	{
		return Complex(Re + c.Re, Im + c.Im);
	}
	Complex operator -(const Complex& c)const
	{
		return Complex(Re - c.Re, Im - c.Im);
	}
	Complex operator *(const Complex& c)const
	{
		return Complex((Re * c.Re) - (Im*c.Im), (Re*c.Im) + (Im*c.Re));
	}
	Complex operator /(const Complex& c)const
	{
		return Complex(((Re * c.Re) + (Im * c.Im)) / ((c.Re * c.Re) + (c.Im * c.Im)), ((-1 * Re * c.Im) + (c.Re * Im)) / ((c.Re * c.Re) + (c.Im * c.Im)));
	}
};

inline ostream& operator << (ostream& o, const Complex& c)
{
	return o << '(' << c.Re << ", " << c.Im << ')';
}