#include <iostream>
#include "OOPLab2.h"

using namespace std;

Complex::Complex() 
{
	real = 0;
	img = 0;
}

Complex::Complex(double r)
{
	real = r;
	img = 0;
}

Complex::Complex(double r, double i)
{
	real = r;
	img = i;
}

Complex::Complex(Complex& obj)
{
	real = obj.real;
	img = obj.img;
}




