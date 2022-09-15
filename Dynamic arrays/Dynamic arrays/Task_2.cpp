//#include "pch.h"
//int main()
//{
//	srand(time(0));
//
//	SetConsoleCP(rus);
//	SetConsoleOutputCP(rus);
//
//	/*2. Программа заполняет двумерный массив 4x5 случайными числами в диапазоне[-10; 39]
//		и копирует все положительные числа в первый одномерный массив, а отрицальные элементы во второй одномерный массив
//		Использовать динамические одномерные массивы.*/
//
//		const int rows = 4;
//		const int columns = 5;
//		int a[rows][columns];
//		int b = -10, c = 39;
//		int* r1 = new int[rows*columns];
//		int* r2 = new int[rows*columns];
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < columns; j++)
//			{
//				a[i][j] = rand() % (c - b + 1) + b;
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		int pos = 0, cnt1 = 0;
//		int neg = 0, cnt2 = 0;
//		for (int i = 0; i < rows; i++)
//		{
//			for (int k = 0; k < columns; k++)
//			{
//				if (a[i][k] >= 0)
//				{
//					r1[pos++] = a[i][k];
//					cnt1++;
//				}
//				else
//				{
//					r2[neg++] = a[i][k];
//					cnt2++;
//				}
//			}
//			cout << endl;
//		}
//		
//		cout << "Positive = " << cnt1 << "\n" << endl;
//		for (int i = 0; i < pos; i++)
//		{
//			cout << r1[i] << " ";
//
//		}
//		cout << "\n" << endl;
//
//
//		cout << "Negative = " << cnt2 << "\n" << endl;
//		for (int i = 0; i < neg; i++)
//		{
//			cout << r2[i] << " ";
//
//		}
//		cout << endl;
//		delete[] r1, r2;
//}