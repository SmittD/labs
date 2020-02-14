#include <iostream>
#include <iomanip>
int main()

{
	using namespace std;
	struct
	{
		char naimenovanie[100];
		int kolichestvo;
		int nomercexa;
	}zavod[100];
	int i, j, n, s, nomer;
	cout << "Vvedite kolvo cexov: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Vvedite nomer ceha: ";
		cin >> zavod[i].nomercexa;
		cout << "Kolvo naimenovaniy vipuskaemix cexom " << zavod[i].nomercexa << "?" << endl;
		cin >> s;
		for (j = 0; j < s; j++)
		{
			cout << "Vvedite naimenovanie: ";
			cin >> zavod[i].naimenovanie;
			cout << "Vvedite kolichestvo: ";
			cin >> zavod[i].kolichestvo;
		}
	}
	cout << "Kakoi cex vivesti?\n";
	cin >> nomer;
	cout << setw(15) << "naimenovanie" << setw(15) << "kolichestvo" << endl;
	for (i = 0; i < n; i++)
	{
		if (zavod[i].nomercexa = nomer)
			cout << setw(15) << zavod[i].naimenovanie << setw(15) << zavod[i].kolichestvo << endl;
		else cout << "Nichego ne vipuskaetsa" << endl;
	}return 0;
}