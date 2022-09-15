//#include "pch.h"
//
//int main()
//{
//	srand(time(0));
//	/*1.Пользователь вводит размеры двумерного динамического массива, 
//	    программа зполняет массив случайными числами в диапазоне[10, 100], 
//		после чего все простые числа копируются в динамический одномерный массив.*/
//
//	
//	/*int rows = 0;
//	cout << "Enter number of rows: ";
//	cin >> rows;
//	int cols = 0;
//	cout << "Enter number of columns: ";
//	cin >> cols;
//	int** a = new int* [rows];
//	int z = 10, x = 100;
//	int cnt = 0, n = 0;
//	for (size_t i = 0; i < rows; i++)
//	{
//		a[i] = new int[cols];
//	}
//	int* b = new int[rows * cols];
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			a[i][k] = rand() % (x - z + 1) + z;
//			cout << a[i][k] << " ";
//		}
//		cout << endl;
//	}
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			b[n] = a[i][k];
//			n++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//
//		for (int j = 2; j <= b[i] / 2; j++)
//		{
//			if (b[i] % j == 0 && b[i] != j)
//			{
//				b[i] = 0;
//				break;
//			}
//		}
//		if (b[i] != 0)
//		{
//			b[cnt] = b[i];
//			cnt++;
//
//		}
//	}
//	cout << "\nNumbers of primes = " << cnt << " Numbers: ";
//	for (int i = 0; i < cnt; i++)
//	{
//		cout << b[i] << " ";
//	}
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		delete[] a[i];
//	}
//	delete[] a, b;*/
//
//	int h = 10, f = 100;
//
//	int rows = 0;
//	cout << "enter number of rows: ";
//	cin >> rows;
//
//	int cols = 0;
//	cout << "enter number of cols: ";
//	cin >> cols;
//
//	int** a = new int* [rows];
//
//	int n = 0, pr = 0;
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		a[i] = new int[cols];
//	}
//
//	int* b = new int[rows * cols];
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < cols; k++)
//		{
//			a[i][k] = rand() % (f - h + 1) + h;
//			cout << a[i][k] << " ";
//		}
//		cout << endl;
//	}
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			b[n] = a[i][k];
//			n++;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int g = 2; g <= b[i] / 2; g++)
//		{
//			if (b[i] % g == 0 && b[i] != g)
//			{
//				b[i] = 0;
//				break;
//			}
//			//Если число в ячейке[i][j] простое, то n++
//		}
//		if (b[i] != 0)
//		{
//			pr++;
//		}
//	}
//
//
//
//	cout << pr << endl;
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		delete[] a[i];
//	}
//	delete[] a, b;
//}