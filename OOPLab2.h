#pragma once
#include <iostream>

using std::cout;
using std::cin;

class Complex {

private:

	double real;
	double img;

public:

	Complex(); // Default Constructor

	Complex(double r); //Constructor with only the real part of the value

	Complex(double r, double i); //Constructor with both real and imaginary part of the value

	

};