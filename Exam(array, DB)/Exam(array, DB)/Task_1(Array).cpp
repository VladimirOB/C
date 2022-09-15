//#include "pch.h"
///*Задача 1 (7 баллов)
//
//Пользователь вводит размер массива и все его элементы. Программа подсчитывает для введенного массива:
//•	среднее арифметическое всех элементов
//•	сумму нечётных отрицательных элементов
//•	количество элементов, которые одновременно делятся на 3 и на 5
//*/
//
//int f_avg(int** arr, int rows, int cols, int avg)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			avg += arr[i][j];
//		}
//	}
//	return avg = avg / (rows * cols);
//
//}
//
//int summ(int** arr, int rows, int cols, int sum_odd_neg)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] < 0 && arr[i][j] % 2 != 0)
//				sum_odd_neg += arr[i][j];
//		}
//	}
//	return sum_odd_neg;
//
//}
//
//int f_div_el(int** arr, int rows, int cols, int div_el)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (arr[i][j] % 5 == 0 && arr[i][j] % 3 == 0)
//				div_el++;
//		}
//	}
//	return div_el;
//}
//
//void print(int avg, int sum_odd_neg, int div_el)
//{
//	cout << "arithmetic mean of all elements = " << avg << endl; puts("");
//	cout << "Sum of odded negative elements = " << sum_odd_neg << endl; puts("");
//	cout << "The number of elements that are both divisible by 3 and 5 = " << div_el << endl; puts("");
//}
//
//int main(void)
//{
//	int rows, cols;
//	puts("Enter rows & cols: ");
//	cin >> rows >> cols;
//	if (rows < 1 || cols < 1)
//	{
//		puts("Error!");
//		return 0;
//	}
//	int** arr = new int* [rows];
//	int avg = 0;
//	int sum_odd_neg = 0;
//	int div_el = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//	puts("Enter element's of array: ");
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	puts(""); // типо cout << endl;
//
//	//среднее арифметическое всех элементов
//	avg = f_avg(arr, rows, cols, avg);
//
//	//сумму нечётных отрицательных элементов
//	sum_odd_neg = summ(arr, rows, cols, sum_odd_neg);
//
//	//количество элементов, которые одновременно делятся на 3 и на 5
//	div_el = f_div_el(arr, rows, cols, div_el);
//
//	//вывод на экран
//	print(avg, sum_odd_neg, div_el);
//
//	for (int k = 0; k < rows; k++)
//		delete arr[k];
//	delete[] arr;
//}