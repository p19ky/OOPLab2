#pragma once
#include <math.h>

//modului unui nr complex
double abs(double a, double b)
{
	double z = 0;
	z = sqrt(a * a + b * b);
	return z;
}

void compute_polar(double a, double b)
{
	double r = abs(a, b);
	double teta;
	if (a > 0)
		teta = atan(b / a);
	if (a < 0)
		teta = atan(b / a) + 3.1415926535;

	std::cout << "\nPolar form: " << r << "(cos(" << teta << ") + i*sin(" << teta << "))";
}

void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (abs(arr[i].img, arr[i].real) > abs(arr[j].img, arr[j].real))
			{
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
}