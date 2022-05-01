#pragma once
class Rational {
private:
	int numerator;
	int denominator;
public:
	//default constructor
	Rational()
	{
		numerator = 0;
		denominator = 1;
	}
	Rational(const Rational& copy)
	{
		numerator = copy.numerator;
		denominator = copy.denominator;
	}
	Rational(int num, int denum);
	//getter and setter
	int getNumerator() ;
	void setNumerator(int num);
	int getDenominator() ;
	void setDenominator(int num);
	//functions
	//binary operators
	Rational operator=(const Rational& x);
	// Arithmetic Operators
	Rational operator+(const Rational& r) const;
	Rational operator-(const Rational& x) const;
	Rational operator*(const Rational& x) const;
	Rational operator/(const Rational& x) const;
	// Compound Arithmetic Operators
	Rational operator += (const Rational& x);
	Rational operator -= (const Rational& x);
	Rational operator *= (const Rational& x);
	Rational operator /= (const Rational& x);
	// Logical Operators
	bool operator == (const Rational& other) const;
	bool operator < (const Rational& other) const;
	bool operator > (const Rational& other) const;
	bool operator <= (const Rational& other) const;
	bool operator >= (const Rational& other) const;
	//bla
	//friend istream& operator>>(istream& input, Rational&x);
	int  reduction();
	Rational Add(const Rational& r);
	Rational Subtract(const Rational& r);
	Rational multiplication(const Rational& r);
	Rational division(const Rational& r);
	void printRationalFormat();
	void PrintFloatFormat();
	~Rational()
	{

	}
};
