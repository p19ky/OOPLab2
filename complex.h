#pragma once
#include <math.h>

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

	std::cout << "\nPolar form: " << r << "(cos(" << teta << ") + i*sin(" << teta << "))";
}

void Complex::sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			//if (abs(arr[i].img, arr[i].real) > abs(arr[j].img, arr[j].real))
			{
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
}