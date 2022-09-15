#include "pch.h"

//2. Пользователь вводит имя текстового файла.Программа считывает из файла двумерный массив и выводит
//его на экран

void f(FILE*& r)
{
	int rows, cols;
	if (r != NULL)
	{
		int res = fscanf(r, "%d %d", &rows, &cols);
		int** a = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			a[i] = new int[cols];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int k = 0; k < cols; k++)
			{
				int res = fscanf(r, "%d", &a[i][k]);
			}
		}
		for (int i = 0; i < rows; i++)
		{
			for (int k = 0; k < cols; k++)
			{
				cout << a[i][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
		fclose(r);
		for (int i = 0; i < rows; i++)
		{
			delete a[i];
		}
		delete[] a;
	}
}

int main()
{
	char filename[40];
	cout << "Enter location and file name: " << endl;
	cin >> filename;
	FILE* r = fopen(filename, "r");
	f(r);
	
}

