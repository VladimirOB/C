#include "pch.h"

void main()
{
	srand(time(NULL));
	/*2. �������� ������� ������� ��� ������� �������, ������� ������������ �������� ����������� ��������� �
			��������������� ������ ������� � ������������ ��������� � ��������������� ������� �������.

			������������ ������ ������� ���������� ������������� ������� � ��� ������, ��������� ������� ���
			�������� �������� � �������*/

	bool flag = false; // ���������� ��/���.
	int rows = 0;
	cout << "Enter number of rows: "; // �������
	cin >> rows;
	int cols = 0;
	cout << "Enter number of columns: "; // �������� 
	cin >> cols;
	int** a = new int* [rows]; // 2 �� 3 , ����� 123456 = 1 �����.
	
	for (size_t i = 0; i < rows; i++)
	{
		a[i] = new int[cols];
	}
	int* min = new int[rows];
	int* max = new int[cols];
	cout << "Enter element's array: ";

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t k = 0; k < cols; k++)
		{
			cin >> a[i][k];
		}
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t k = 0; k < cols; k++)
		{
			cout << a[i][k] << " ";
		}
		cout << endl;
	}
	
	for (size_t i = 0; i < rows; i++)
	{
		min[i] = INT_MAX;
		for (size_t k = 0; k < cols; k++)
		{
			if (a[i][k] < min[i])
				min[i] = a[i][k];
		}
	}
	for (size_t i = 0; i < rows; i++)
	{
		max[i] = INT_MIN;
		for (size_t k = 0; k < cols; k++)
		{
			if (a[i][k] > max[k])
				max[k] = a[i][k];
		}
	}
	cout << "saddle point:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (min[i] == max[j])
			{
				cout << min[i] << " ";
				flag = true;
			}
		}
	}
	cout << endl;
	if (!flag)
		cout << "There are no any saddle points found!\n";
	for (size_t i = 0; i < rows; i++)
	{
		delete[] a[i];
	}
	delete[] a,min,max;
}