#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main()
{


	setlocale(0, "");


	cout << "<y - Перший варiант> \n";
	cout << "<n - Другий варiант> \n";
	cout << "<t - Exit> \n";
	cout << "<Виберiть : ";
	char r;
	char p;
	cin >> p;

	if (p == 'y')
	{

		int s;
		cout << endl;
		cout << "Введите количество строк : ";
		cin >> s;

		cout << endl;

		for (int i = 0; i < s; i++)
		{
			cout << setw(s - i) << ' ';
			for (int j = 0; j <= i; j++)
				cout << "*";
			cout << endl;

		}

		cout << " " << endl;

	}
	else if (p == 'n')
	{
		int s;
		cout << endl;
		cout << "Введите количество строк : ";
		cin >> s;

		cout << endl;

		for (int i = 0; i < s; i++)
		{
			cout << setw(s - i) << ' ';
			for (int j = 0; j <= i; j++)

				cout << "*";
			cout << " ";

			for (int j = 0; j <= i; j++)
				cout << "*";
			cout << endl;

		}
		cout << " " << endl;
	}
	else if (p == 't')
	{
		exit(0);
	}
	else
	{
		cout << "Ошибка!";

	}

	cout << "<Продолжить (y/n) ? >";
	cout << " \n";
	cin >> r;

	if (r == 'y')
	{
		return main();
		cout << " ";
	}
	else if (r == 'n')
	{
		exit(0);
	}
	else
	{
		cout << "Ошибка!";

	}

	cout << endl;

	system("pause");
	return 0;
}