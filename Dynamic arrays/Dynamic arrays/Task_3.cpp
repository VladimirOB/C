#include "pch.h"

int main()
{
	srand(time(0));

	SetConsoleCP(rus);
	SetConsoleOutputCP(rus);

        /*3. Пользователь вводит размеры 2 массивов и они заполняются случайными числами в диапазоне[1, 50]
		Программа объединяет эти массивы в третий динамический массив и копирует все данные,
		после чего все массивы выводятся на экран*/

		int n1, n2;
		cout << "Enter size of first array: " << endl;
		cin >> n1;
		int* a = new int[n1];
		cout << "Enter size of second array: " << endl;
		cin >> n2;
		int* b = new int[n2];
		const int n3 = n1 + n2;
		int* c = new int[n3];
		int z = 1, x = 50;
		cout << "\n" << "First array: " << endl;
		for (int i = 0; i < n1; i++)
		{
			a[i] = rand() % (x - z + 1) + z;

			cout << a[i] << " ";
		}
		cout << "\n" << "Second array: " << endl;
		for (int i = 0; i < n2; i++)
		{
			b[i] = rand() % (x - z + 1) + z;

			cout << b[i] << " ";
		}

		for (int i = 0; i < n3; i++)
		{
			if(i<n1)
			{
				c[i] = a[i];
			}
			else
			{
				c[i] = b[i - n1];
			}
		}
		cout <<"\n"<< "Third array: " << endl;
		for (int i = 0; i < n3; i++) {
			cout << c[i]<< " ";
		}
		cout << '\n';

		delete[] a, b, c;
		//cin.ignore(1); // пропустить ввод одного символа в конце.
		cin.get();
	
	   return 0;
}