#pragma once
#include <math.h>
#include <vector>

//modului unui nr complex
double Complex::abs(Complex c)
{
	double z = 0;
	z = sqrt(c.img * c.img + c.real * c.real);
	return z;
}

//forma trigonometrica
void Complex::compute_polar(Complex c)
{
	double r = abs(c);
	double teta;
	if (c.real > 0)
		teta = atan(c.img / c.real);
	if (c.real < 0)
		teta = atan(c.img / c.real) + 3.1415926535;

	std::cout << "Polar form: " << r << "(cos(" << teta << ") + i*sin(" << teta << "))";
}

//sortare
void sort(vector <Complex> v, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
		{
			double a = v[i].abs(v[i]);
			double b = v[j].abs(v[j]);
			if (a > b)
			{
				Complex aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}

	for (int i = 0; i < size; i++)
	{
		v[i].show_cmpl();
		cout << ", ";
	}

}

//suma tuturor numerelor complexe
void sum(vector <Complex> v, int size)
{
	Complex s;
	for (int i = 0; i < size; i++)
		s = s.add(v[i]);

	cout << "Suma: ";
	s.show_cmpl();
}

//teste
void myTests()
{
	Complex c1(7, 7);
	Complex c2(3, 4);
	vector <Complex> v = { c1, c2 };

	cout << "Test create\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << "c" << i + 1 << " = ";
		v[i].show_cmpl();
		cout << endl;
	}

	cout << "\nTest sort\n";
	sort(v, v.size());

	cout << "\n\nTest polar form\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << "c" << i + 1 << " ";
		v[i].compute_polar(v[i]);
		cout << endl;
	}

	cout << "\nTest absolute\n";
	for (int i = 0; i < v.size(); i++)
	{
		cout << "abs" << i + 1 << " = ";
		double a = v[i].abs(v[i]);
		cout << a << endl;
	}

	cout << "\nTest sum of vector:\n";
	sum(v, v.size());

	cout << "\n\nTest multiply\n";
	Complex mul = c1.mult(c2);
	cout << "c1 * c2 = ";
	mul.show_cmpl();

	cout << "\n\nTest division\n";
	Complex div = c1.quot(c2);
	cout << "c1 / c2 = ";
	div.show_cmpl();

}