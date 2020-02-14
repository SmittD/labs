#include <iostream>
#include <iomanip>
#include <math.h>
int main()
{
	using namespace std;
	int a[100];
	int i, k, j, n;
	cout << "Vvedite razmer massiva " << endl;
	cin >> k;
	cout << " Vvedite elementu massiva " << endl;
	for (i = 0; i < k; i++)
	{
		cout << "a[" << i + 1 << "]= ";
		cin >> a[i];
	}
	for (i = 0; i < k; i++)
	{
		n = 0;
		for (j = 0; j < k; j++)
			if (a[i] == a[j])
				n++;
		if (n == 1)
			cout << a[i] << setw(4);
	}
	cout << endl;
	return 0;
}

