#include <cmath>
#include <iostream>
#include <iomanip>
typedef double (*func)(double, double, int&);
using namespace std;
double const M_PI = 3.14159265358979323846;
double Y(double, double, int&);
double S(double, double, int&);
void tabl(double, double, double, double, func);

int main()
{
	cout << setw(8) << "x" << setw(15) << "S" << setw(10) << "k" << endl;
	tabl(-2, 2, 0.1, 10e-4, S);
	cout << setw(8) << "x" << setw(15) << "Y" << setw(10) << "k" << endl;
	tabl(-2, 2, 0.1, 10e-4, Y);

	return 0;
}

void tabl(double a, double b, double h, double eps, func fun)
{
	int k = 0;
	double sum;
	for (double x = a; x < b + h / 2; x += h)
	{
		sum = fun(x, eps, k);
		cout << setw(8) << x << setw(15) << sum << setw(10) << k << endl;
	}
}
double Y(double x, double eps, int& k)
{
	double sum = M_PI * (M_PI - 2 * abs(x)) / 8;
	return sum;
}
double S(double x, double eps, int& k)
{
	k = 1;
	double p = 1, sum = 0;
	while (abs(p) > eps)
	{
		p = cos((2.0 * k - 1) * x) / pow((2.0 * k - 1), 2);
		sum += p;
		k++;
	}
	return sum;
}
