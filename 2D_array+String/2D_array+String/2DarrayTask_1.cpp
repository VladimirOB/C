//#include "pch.h"
//int main()
//{
//	srand(time(0));
//	SetConsoleCP(rus);
//	SetConsoleOutputCP(rus);
//
//	/*1. ������������ ������ ������� ���������� �������, 
//	   ��������� ��������� ������ ���������� �������[20, 50],
//	   � ��������� �������� ��� �������� ����� �� ������, � ������ �� ��������.*/
//
//	int rows = 0, cols = 0;
//	cout << "Enter number of rows: " << endl;
//	cin >> rows;
//	cout << "Enter number of Columns: " << endl;
//	cin >> cols;
//	int z = 20, x = 50;
//	int** a = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		a[i] = new int[cols];
//	}
//	
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			a[i][k] = rand() % (x - z + 1) + z;
//			cout << a[i][k] <<  " ";
//		}
//		cout << endl;
//	}
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			if (a[i][k] % 2 != 0)
//				a[i][k]++;
//			else if
//				(a[i][k] % 2 == 0)
//				a[i][k]++;
//		}
//	}
//	cout << endl;
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t k = 0; k < cols; k++)
//		{
//			cout << a[i][k] << " ";
//		}
//		cout << endl;
//	}
//	for (size_t i = 0; i < rows; i++)
//		{
//			delete[] a[i];
//		}
//		delete[] a;
//
//}