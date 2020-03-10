#pragma once
#include <iostream>

using namespace std;

class Complex {

public:

	double real;
	double img;

public:

	Complex(); // Default Constructor

	Complex(double r); //Constructor with only the real part of the value

	Complex(double r, double i); //Constructor with both real and imaginary part of the value

	Complex(Complex& object); //Constructor for an attributed Complex Object 
	
	void Addition(Complex c); //Add 2 Complex Numbers
};

int main()
{

}