#include <iostream>
#include <math.h>
#include <iomanip>


int main(int argc, char* argv[])
{
	using namespace std;
	double x, y, a, b, h, s, p;
	int n, i;
	n = 80;
	a = 0.1;
	b = 1;
	h = (b - a) / 10;
	x = a;
	do
	{
		p = s = 1;
		for (i = 1; i <= n; i++)
		{
			p *= -(pow(2*x, 2) / 2);
			s += p;
		}
		y = 2 * (pow(sin(x), 2) - 1);
		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;
	} while (x <= b + h / 2);
	cout << endl;

	return 0;
}