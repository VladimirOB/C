//#include "pch.h"
//
//int main()
//{
//	srand(time(0));
//
//	/*3. Пользователь вводит размеры двумерного динамического массива, программа зполняет массив случайными
//		числами в диапазоне[10, 100], после чего все столбцы массива хаотично перемещиваются
//		1 2 3		2 3 1
//	    4 5 6 = >   5 6 4
//		7 8 9		8 9 7*/
//
//		int rows = 0;
//		cout << "Enter number of rows: ";
//		cin >> rows;
//		int cols = 0;
//		cout << "Enter number of columns: ";
//		cin >> cols;
//		int** a = new int* [rows];
//		int z = 10, x = 100;
//		for (size_t i = 0; i < rows; i++)
//		{
//			a[i] = new int[cols];
//		}
//		
//		for (size_t i = 0; i < rows; i++)
//		{
//			for (size_t k = 0; k < cols; k++)
//			{
//				a[i][k] = rand() % (x - z + 1) + z;
//				cout << a[i][k] << " ";
//				
//			}
//			cout << endl;
//		}
//		cout << endl;
//		int r = rand() % (cols - 1 + 1) + 1;
//		for (size_t i = 0; i < rows; i++)
//		{
//			for (size_t k = 0; k < cols; k++)
//			{
//				
//					
//				
//				int t = a[i][k];
//				a[i][k] = a[i][cols-r];
//				a[i][cols-r] = t;
//			}
//		}
//		for (size_t i = 0; i < rows; i++)
//		{
//			for (size_t k = 0; k < cols; k++)
//			{
//				cout << a[i][k] << " ";
//			}
//			cout << endl;
//		}
//
//		for (size_t i = 0; i < rows; i++)
//			{
//				delete[] a[i];
//			}
//			delete[] a;
//			/*int t = a[i][k];
//			a[i][k] = a[i][0]; // просто замена
//			a[i][0] = t;*/
//}