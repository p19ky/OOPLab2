#pragma once
using namespace std;

class Complex {

private:

	double real;
	double img;

public:

	double get_real() const { return real; }

	double get_img() const { return img; }

	void set_real(double re) { real = re; }

	void set_img(double im) { img = im; }

	void show_cmpl() { cout << real << "+" << img << "i" << endl << endl; }

	Complex(); // Default Constructor

	Complex(double r); //Constructor with only the real part of the value

	Complex(double r, double i); //Constructor with both real and imaginary part of the value

	Complex(Complex& object); //Constructor for an attributed Complex Object 

	Complex(const Complex& C) { cout << "copy constructor called" << endl; }

	Complex& operator = (const Complex& C)
	{
		cout << "Assignment operator called " << endl;
		return *this;
	}
	
	Complex add(Complex c); //Add 2 Complex Numbers
	
	Complex mult(Complex c); //Multiply 2 Complex Numbers

	Complex quot(Complex c); // Division of 2 Complex Numbers

	double abs(Complex c); //calculate absolute value of complex nr

	void compute_polar(Complex c); //show polar form of complex nr
};
