
#include <iostream>
#include <math.h>


int main(int argc, char* argv[])
{
	using namespace std;
	double x, y, a, b, f;
	int k;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Choose f: 1 - sh(x), 2 - x^2, 3 - exp(x)";

	cin >> k;
	switch (k)
	{
	case 1:f = sinh(x);
		break;
	case 2:f = pow(x, 2.);
		break;
	case 3:f = exp(x);
		break;

	default: cout << "ERRROR";
		return 1;
	}
	a = 2 * x;
	if (a = y)
		b = pow(x, 1 / 3.) * sin(x);
	else
		if (y > a) b = tan(x) + pow(f, 2.);
		else
			if (y < a) b = pow(fabs(f + y), 3.);
	cout << "Result is :  ";
	cout << b << endl;



	system("pause");

	return 0;
}
