#include "i21_1102_lab_08_Q.h"
#include <iostream>
using namespace std;

Rational::Rational(int num, int denum)
{
	numerator = num;
	denominator = denum;
}
int Rational::getNumerator()
{
	return numerator;
}
void Rational::setNumerator(int num) {
	numerator = num;
}
int Rational::getDenominator()
{
	return denominator;
}
void Rational::setDenominator(int num) {
	denominator = num;
}

int Rational::reduction()
{
	int largest;
	if (numerator > denominator)
	{
		largest = numerator;
	}
	else
	{
		largest = denominator;
	}
	int gcd = 0;
	for (int i = 2; i <= largest; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			gcd = i;
		}
	}
	if (gcd != 0)
	{
		numerator /= gcd;
		denominator /= gcd;
	}
	return gcd;
}

Rational Rational::operator=(const Rational& x)
{
	this->numerator = x.numerator;
	this->denominator = x.denominator;
	return (*this);
}

Rational Rational::operator+(const Rational& r) const
{
	Rational temp;
	temp.numerator = r.numerator * denominator;
	temp.numerator += r.denominator * numerator;
	temp.denominator = r.denominator * denominator;
	temp.reduction();
	return (temp);
}

Rational Rational::operator-(const Rational& r) const
{
	Rational temp;
	temp.numerator = r.denominator * numerator;
	temp.numerator -= denominator * r.numerator;
	temp.denominator = r.denominator * denominator;
	temp.reduction();
	return temp;
}

Rational Rational::operator*(const Rational& r) const
{
	Rational temp;
	temp.numerator = r.numerator * numerator;
	temp.denominator = r.denominator * denominator;
	temp.reduction();
	return temp;
}

Rational Rational::operator/(const Rational& r) const
{
	Rational temp;
	temp.numerator = r.denominator * numerator;
	temp.denominator = r.numerator * denominator;
	temp.reduction();
	return temp;
}

Rational Rational::operator+=(const Rational& r)
{
	Rational temp;
	this->numerator = r.numerator * denominator;
	this->numerator += r.denominator * numerator;
	this->denominator = r.denominator * denominator;
	this->reduction();
	return (*this);
}

Rational Rational::operator-=(const Rational& r)
{
	Rational temp;
	this->numerator = r.denominator * numerator;
	this->numerator -= denominator * r.numerator;
	this->denominator = r.denominator * denominator;
	this->reduction();
	return (*this);
}

Rational Rational::operator*=(const Rational& r)
{
	Rational temp;
	this->numerator = r.numerator * numerator;
	this->denominator = r.denominator * denominator;
	this->reduction();
	return (*this);
}

Rational Rational::operator/=(const Rational& r)
{
	Rational temp;
	this->numerator = r.denominator * numerator;
	this->denominator = r.numerator * denominator;
	this->reduction();
	return (*this);
}

bool Rational::operator== (const Rational& r) const
{
	if (this->numerator == r.numerator && this->denominator == r.denominator)
	{
		//cout << "True";
		return true;
	}
	else
	{
		//cout << "Fasle";
		return false;
	}
}

bool Rational::operator< (const Rational& r) const
{
	if (this->numerator < r.numerator && this->denominator<r.denominator)
	{
		//cout << "Less than";
		return true;
	}
	else
	{
		//cout << "Not less than";
		return false;
	}
}

bool Rational::operator> (const Rational& r) const
{
	if (this->numerator > r.numerator && this->denominator>r.denominator)
	{
		//cout << "Greater than";
		return true;
	}
	else
	{
		//cout << "Not Greater than";
		return false;
	}
}

bool Rational::operator<= (const Rational& r) const
{
	if (this->numerator <= r.numerator && this->denominator <= r.denominator)
	{
		//cout << "Less than or equal to";
		return true;
	}
	else
	{
		//cout << "Not Less than or equal to";
		return false;
	}
}

bool Rational::operator>= (const Rational& r) const
{
	if (this->numerator >= r.numerator && this->denominator >= r.denominator)
	{
		//cout << "Greater than or equal to";
		return true;
	}
	else
	{
		//cout << "Not Greater than or equal to";
		return false;
	}
}


void Rational::printRationalFormat()
{
	if (denominator == 0) // validates denominator
		cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
	else if (numerator == 0) // validates numerator
		cout << 0;
	else
		cout << numerator << '/' << denominator;
}

void Rational::PrintFloatFormat()
{
	cout << static_cast<double>(numerator) / denominator;
}
