#include<iostream>
using namespace std;
#include "i21_1102_lab_08_Q.h"
#include"i21_1102_lab_08_Q.cpp"

ostream& operator<<(ostream& output, Rational& x)
{
	output << x.getNumerator() << "/";
	output << x.getDenominator();
	return output;
}

istream& operator>>(istream& input, Rational& x)
{
	int a, b;
	
	input >> a;
	x.setNumerator(a);
	input >> b;
	x.setDenominator(b);
	return input;
}

int main()
{
	Rational r(2,4),d(2,4),x,y;
	cout << "Enter numerator and denominator for first value: ";
	cin >> r;

	cout << "Enter numerator and denominator for second value: ";
	cin >> d;
	y = r;
	cout << "Changed value of 1st is: " << y << endl;
	//arithematic
	x = r + d;
	cout << r << " + " << d << " = " << x << endl;
	x = r - d;
	cout << r << " - " << d << " = " << x << endl;
	x = r * d;
	cout << r << " * " << d << " = " << x << endl;
	x = r / d;
	cout << r << " / " << d << " = " << x << endl;
	//compund arithematic
	r += d;
	cout << r << " += " << d << " = " << r << endl;
	r -= d;
	cout << r << " -= " << d << " = " << r << endl;
	r*= d;
	cout << r << " *= " << d << " = " << r << endl;
	r /= d;
	cout << r << " /= " << d << " = " << r << endl;
	// Logical Operators
	if (r == d)
	{
		cout << r << " = " << d << endl;
	}
	else
	{
		cout << r << " != " << d << endl;
	}
	if (r > d)
	{
		cout << r << " > " << d << endl;
	}
	else
	{
		cout << r << " !> " << d << endl;
	}
	if (r < d)
	{
		cout << r << " < " << d << endl;
	}
	else
	{
		cout << r << " !< " << d << endl;
	}
	if (r >= d)
	{
		cout << r << " >= " << d << endl;
	}
	else
	{
		cout << r << " ! >= " << d << endl;
	}
	if (r <= d)
	{
		cout << r << " <= " << d << endl;
	}
	else
	{
		cout << r << " ! <= " << d << endl;
	}

}
