#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	srand(time(0));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*1. ѕрограмма заполн€ет двумерный массив 4x5 случайными числами в диапазоне[0; 9]
		и подчитывает количество простых чисел*/

		/*const int rows = 4;
		const int columns = 5;
		int a[rows][columns];
		int b[rows * columns];
		int cnt=0, n=0;

		for (int i = 0; i < rows; i++)
		{
			for (int k = 0; k < columns; k++)
			{
				a[i][k] = rand() % 10;
				cout << a[i][k] << " ";
			}
			cout << endl;
		}
		for (int i = 0; i < rows; i++)
		{
			for (int k = 0; k < columns; k++)
			{
				b[n++] = a[i][k];
			}
		}
		for (int i = 0; i < n; i++)
		{

			for (int j = 2; j <= b[i] / 2; j++)
			{
				if (b[i] % j == 0 && b[i] != j)
				{
				b[i] = 0;
				break;
				}
			}
					if (b[i] != 0)
					{
						cnt++;
					}

		}
		cout << "\nNumbers of primes = " << cnt << endl;*/

		/*2. ѕрограмма заполн€ет двумерный массив 4x5 случайными числами в диапазоне[20; 49]
			ѕосле чего программа переворачивает массив на 90 градусов по часовой стрелке(копирует элементы в другой массив)
			и выводит результат на экран

			1 2 3 4 5
			5 6 7 8 9
			1 2 3 4 5
			9 8 7 6 5

			9 1 5 1
			8 2 6 2
			7 3 7 3
			6 4 8 4
			5 5 9 5*/

			/*const int rows = 4;
			const int columns = 5;
			int a[rows][columns];
			int b[columns][rows];
			int c = 20, d = 49;



			for (int i = 0; i < rows; i++)
			{
				for (int k = 0; k < columns; k++)
				{
					a[i][k] = rand() % (d - c + 1) + c;
					cout << a[i][k] << " ";

				}
				cout << endl;

			}

			cout << "\n" << endl;

			for (int i = 0; i < columns; i++)
			{
				for (int k = 0; k < rows; k++)
				{
					b[i][k] = a[rows - k - 1][i];
					cout << b[i][k] << " ";
				}

				cout << endl;
			}*/





			/*3. ѕрограмма заполн€ет двумерный массив 4x5 случайными числами в диапазоне[-10; 39]
				и копирует все положительные числа во первый одномерный массив,
				а отрицальные элементы во второй одномерный массив.*/


				/*const int rows = 4;
				const int columns = 5;
				int a[rows][columns];
				int result1[rows * columns];
				int result2[rows * columns];
				int c = -10, d = 39;
				for (int i = 0; i < rows; i++)
				{
					for (int k = 0; k < columns; k++)
					{
						a[i][k] = rand() % (d - c + 1) + c;
						cout << a[i][k] << " ";

					}
					cout << endl;
				}

				int pos = 0,cnt1 = 0;

				for (int i = 0; i < rows; i++)
				{

					for (int k = 0; k < columns; k++)
					{

						if (a[i][k] >= 0)
						{
							result1[pos] = a[i][k];
							pos++;
							cnt1++;
						}


					}
					cout << endl;

				}
				int neg = 0,cnt2 = 0;
				for (int i = 0; i < rows; i++)
				{
					for (int k = 0; k < columns; k++)
					{
						if (a[i][k] < 0)
						{
							result2[neg] = a[i][k];
							neg++;
							cnt2++;
						}
					}
				}

				cout  << "Positive= " << cnt1 << "\n" << endl;
				for (int i = 0; i < pos; i++)
				{
					cout << result1[i] << " ";

				}
				cout << "\n" << endl;


				cout << "Negative= " << cnt2 << "\n" << endl;
				for (int i = 0; i < neg; i++)
				{
					cout << result2[i] << " ";

				}
				cout << endl;*/




}