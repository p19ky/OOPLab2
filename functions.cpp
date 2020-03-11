#include <iostream>
#include "complex.h"
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

 Complex Complex::add(Complex c)
{	
	Complex Add;

	Add.real = real + c.real;
	Add.img = img + c.img;

	return Add;

}

 Complex Complex::mult(Complex c) 
 {
	 Complex Mult;

	 Mult.real = real * c.real - img * c.img;
	 Mult.img = real * c.img - c.real * img;

	 return Mult;
 }

 Complex Complex::quot(Complex c)
 {
	Complex Quot;

	 Quot.real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
	 Quot.img = (img * c.real + real * c.img) / (c.real * c.real + c.img * c.img);

	 return Quot;
 }



