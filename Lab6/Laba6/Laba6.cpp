#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[1000];
	gets_s(str);
	strcat_s(str, " "); // помещает в первую строку вторую
	int a[100] = { 0 }, k = 0;
	int  t = 0;
	for (int i = 0; i < strlen(str); i++) //считает количество символов
	{
		if (str[i] == ' ')
		{
			for (int j = i - t; j < i; j++)
			{
				a[k] += (str[j] - '0') * pow(10, i - j - 1);
			}
			k++;
			t = 0;
		}
		else
		{
			t++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = k - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				int c = a[j - 1];
				a[j - 1] = a[j];
				a[j] = c;
			}
		}
	}
	cout << "Result" << endl;
	for (int i = 0; i < k; i++)
		cout << a[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}
