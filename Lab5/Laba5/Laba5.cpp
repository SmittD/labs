#include <iomanip> 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	int m, n, k, l, i, j, t, q;
	char** a;
	cout << "Vvedite razmer massiva n ";
	cin >> n;
	cout << "Vvedite razmer massiva m ";
	cin >> m;
	a = new char* [n];
	for (i = 0; i < n; i++)
		a[i] = new char[m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << "Vvedite a[" << i << "][" << j << "] ";
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
	t = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			q = true;
			for (k = 0; k < (i + 1); k++)
			{
				for (l = 0; l < (j + 1); l++)
				{
					if (a[i][j] == a[k][l])
					{
						q = false;
						break;
					}
				}
				if (q) t++;
			}
		}
	}
	cout << "Kolichestvo razlichnih elementov " << t << endl;
	for (i = 0; i < m; i++)
		delete a[i];
	delete[]a;
	a = NULL;
	return 0;
}
