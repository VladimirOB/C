//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);

	/*1. ѕрограмма заполн€ет массив из 10 элементов случайными числами в диапазоне[-10; 10]
		и копирует все положительные числа во второй массив*/
		/*const int size = 10;
		int c[size],d[size], a = -10, b = 10, result=0;

		for (int i = 0; i < size; i++)
		{
			c[i] = rand() % (b - a + 1) + a;
			cout << c[i] << endl;
		}

		for (int i = 0; i < size; i++)
		{
			int cnt = 0;
			for (int k = 0; k < size; k++)
			{
				if (c[i] >= 0)
					cnt++;
			}
			if (cnt > 0)
			{
				d[result] = c[i];
				result++;
			}
		}
		cout << "Result: " << result << endl;
		for (int i = 0; i < result; i++)
		{
			cout << d[i] << " ";
		}
		cout << endl;*/

		/*2. ѕользователь вводит 2 массива из 5 чисел, программа провер€ет равен ли первый массив перевЄрнутому второму
			массиву*/

			/*	int a[5], b[5],c;

				cout << "Enter First array: " << endl;
				for (int i = 0; i < 5; i++)
				{
					cin >> a[i];
				}
				cout << "Enter Second array: " << endl;
				for (int i = 0; i < 5; i++)
				{
					cin >> b[i];
				}

				for (int i = 0; i < 5/2; i++)
				{
					c = b[i];
					b[i] = b [5-1-i];
					b[5-1-i] = c;

				}
				for (int i = 0; i < 5; i++)
				{
					if (a[i] == b[i])
						cout << "YES!" << endl;
					break;

				}
				for (int i = 0; i < 5; i++)
				{
					if (a[i] != b[i])
						cout << "NO!" << endl;
					break;

				}*/

				/*3. ѕользователь вводит 2 массива из 6 чисел, программа копирует в третий массив только те элементы первого массива,
					которые встречаютс€ во втором массиве без повторений.
					ѕример:
					1 1 1 2 3 4
					1 2 3 5 6 2
					1 2 3*/

					/*const int size = 6;
					int a[size], b[size], c[size], result=0;

					cout << "Enter First array: " << endl;
					for (int i = 0; i < size; i++)
					{
						cin >> a[i];
					}
					cout << "Enter Second array: " << endl;
					for (int i = 0; i < size; i++)
					{
						cin >> b[i];
					}

					for (int i = 0; i < size; i++)
					{
						int cnt = 0;

						for (int k = 0; k < size; k++)
						{
							if (a[i] == b[k] && a[i] != a[i+1] && a[i] != a[i + 2] && a[i] != a[i + 3] && a[i] != a[i + 4] && a[i] != a[i + 5])
								cnt++;

						}
						if (cnt > 0)
						{
							c[result] = a[i];
							result++;
						}
					}
					cout << "Result: " << result << endl;
					for (int i = 0; i < result; i++)
					{
						cout << c[i] << " ";
					}
					cout << endl;*/


					/*3. ѕользователь вводит 2 массива из 6 чисел, программа копирует в третий массив только те элементы первого массива,
						которые встречаютс€ во втором массиве без повторений.
						ѕример:
						1 1 1 2 3 4
						1 2 3 5 6 2
						1 2 3*/
						/*const int size = 6;
						int a[size], b[size], c[size], result = 0;

						cout << "Enter First array: " << endl;
						for (int i = 0; i < size; i++)
						{
							cin >> a[i];
						}
						cout << "Enter Second array: " << endl;
						for (int i = 0; i < size; i++)
						{
							cin >> b[i];
						}
						for (int i = 0; i < size; i++)
						{
							int cnt = 0;

							for (int k = 0; k < size; k++)
							{
								if (a[i] == b[k])
									cnt++;

								for (int k = i + 1; k < size; k++)
								{
									if (a[i] == a[k])
										cnt--;
								}

							}
							if (cnt > 0)
							{
								c[result] = a[i];
								result++;
							}
						}
						cout << "Result: " << result << endl;
						for (int i = 0; i < result; i++)
						{
							cout << c[i] << endl;
						}*/

						//}