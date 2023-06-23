#include <iostream>
using namespace std;

class Fraction {
private:
	int numerator{};
	int denominator{};

public:

	int showNumerator()
	{
		return this->numerator;
	}

	int showDenominator()
	{
		return this->denominator;
	}

	Fraction() = default;
	Fraction(int numerator, int denominator)
	{

		this->numerator = numerator;
		this->denominator = denominator;
	}

	int operator +(const Fraction& other)
	{
		return this->denominator += other.denominator, this->numerator += other.numerator;
	}

	int operator -(const Fraction& other)
	{
		return this->denominator -= other.denominator, this->numerator -= other.numerator;
	}

	int operator *(const Fraction& other)
	{
		return this->denominator *= other.denominator, this->numerator *= other.numerator;
	}

	int operator /(const Fraction& other)
	{
		return this->denominator /= other.denominator, this->numerator /= other.numerator;
	}
};


int main()
{
	Fraction n1(0, 0);
	Fraction n2(1, 2);

	cout << n1.showNumerator() << "/" << n1.showDenominator() << " + " << n2.showNumerator() << "/" << n2.showDenominator();
	n1 + n2;
	cout << " = " << n1.showNumerator() << "/" << n1.showDenominator();

	cout << endl;

	cout << n1.showNumerator() << "/" << n1.showDenominator() << " * " << n2.showNumerator() << "/" << n2.showDenominator();
	n1 * n2;
	cout << " = " << n1.showNumerator() << "/" << n1.showDenominator();

	cout << endl;

	cout << n1.showNumerator() << "/" << n1.showDenominator() << " / " << n2.showNumerator() << "/" << n2.showDenominator();
	n1 / n2;
	cout << " = " << n1.showNumerator() << "/" << n1.showDenominator();

	cout << endl;

	cout << n1.showNumerator() << "/" << n1.showDenominator() << " - " << n2.showNumerator() << "/" << n2.showDenominator();
	n1 - n2;
	cout << " = " << n1.showNumerator() << "/" << n1.showDenominator();

	return 0;
}