//#include "pch.h" 
///*1. Пользователь вводит размеры двумерного массива, массив заполняется случайными числами в диапазоне [0, 20]
//Программа выводит неотсортированный и отсортированные массивы на экран (сортировать любым методом)*/
//
//void Print_Array1(int** array, int rows, int cols)
//{
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < cols; j++)
//		{
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void BubbleSort1(int** array, int rows, int cols)
//{
//	for (int k = 0; k < rows; k++)
//	{
//		for (int l = 0; l < cols; l++)
//		{
//			for (int i = 0; i < rows; i++)
//			{
//				for (int j = 0; j < cols; j++)
//				{
//					if (i + 1 == rows && j + 1 == cols) // чтоб не выходили за границы
//					{
//						continue;
//					}
//					else
//					{
//						if (j + 1 == rows && array[i][j] > array[i + 1][0])
//						{
//							int temp = array[i][j];
//							array[i][j] = array[i + 1][0];
//							array[i + 1][0] = temp;
//						}
//						if (j + 1 == cols && array[i][j] <= array[i + 1][0]) // чтоб не выходили за границы
//						{
//							continue;
//						}
//						else
//						{
//							if (array[i][j] > array[i][j + 1])
//							{
//								int temp = array[i][j];
//								array[i][j] = array[i][j + 1];
//								array[i][j + 1] = temp;
//							}
//						}
//					}
//				}
//			}
//		}
//		// вывести промежуточный результат
//		//cout << endl;
//		//Print_Array1(array, rows, cols);
//	}
//}
//
//void BubbleSort1v2(int** arr, int rows, int cols)
//{
//	for (int k = 0; k < rows; k++)
//	{
//		for (int l = 0; l < cols; l++)
//		{
//			for (int i = 0; i < rows; i++)
//			{
//				for (int j = 0; j < cols; j++)
//				{
//					if (arr[k][l] < arr[i][j]) 
//					{
//						int temp = arr[k][l];
//						arr[k][l] = arr[i][j];
//						arr[i][j] = temp;
//					}
//				}
//			}
//		}
//		// вывести промежуточный результат
//		//cout << endl;
//		//Print_Array1(array, rows, cols);
//	}
//}
//
//void SelectionSort1(int** array, int* array2, long size, int rows, int columns)
//{
//	long i, j, k;
//	int x;
//
//	for (i = 0; i < size; i++)
//	{
//		k = i; // к - индекс найменьшего
//		x = array2[i];
//
//		for (j = i + 1; j < size; j++)
//		{
//			if (array2[j] < x)
//			{
//				k = j;
//				x = array2[j];
//			}
//		}
//		// поменяли местами найменьший[k] с [i] 
//		array2[k] = array2[i];
//		array2[i] = x;
//	}
//	int cnt = 0;
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < columns; j++)
//		{
//			array[i][j] = array2[cnt]; // перевод одномерного массива обратно.
//			cnt++;
//		}
//	}
//}
//
//void InsertionSort1(int** array, int* array2, long size, int rows, int columns)
//{
//	int i, j, k, temp;
//
//	for (i = 1; i < size; i++)
//	{
//		temp = array2[i]; // текущий.
//
//		for (j = 0; j < i; j++) // поиск правильной
//		{
//			if (array2[j] > temp) break;
//		}
//
//		if (j == i) continue; // если всё на местах.
//
//		for (k = i; k > j; k--)
//		{
//			array2[k] = array2[k - 1]; // смещение направо
//		}
//
//		array2[j] = temp; // поставить эл. в правильную поз.
//	}
//	int cnt = 0;
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < columns; j++)
//		{
//			array[i][j] = array2[cnt]; // перевод одномерного массива обратно.
//			cnt++;
//		}
//	}
//}
//
//int main(void)
//{
//	srand(time(0));
//	int rows, columns;
//	puts("Enter rows: ");
//	cin >> rows;
//	puts("Enter columns: ");
//	cin >> columns;
//	int** array = new int* [rows];
//	int* array2 = new int[rows * columns]; // создал одмерный массив для перевода двумерного.
//	int size = 0; // размер одномерного массива.
//	for (size_t i = 0; i < rows; i++)
//	{
//		array[i] = new int[columns];
//	}
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < columns; j++)
//		{
//			array[i][j] = rand() % (20 - 0 + 1) + 0;
//		}
//	}
//
//	Print_Array1(array, rows, columns);
//
//	for (size_t i = 0; i < rows; i++)
//	{
//		for (size_t j = 0; j < columns; j++)
//		{
//			array2[size] = array[i][j]; // присвоил массиву значения двумерного.
//			size++;
//		}
//	}
//
//	//BubbleSort1(array, rows, columns);
//
//	BubbleSort1v2(array, rows, columns);
//
//	//SelectionSort1(array,array2, size, rows, columns);
//
//	//InsertionSort1(array, array2, size, rows, columns);
//
//	cout << endl;
//
//	Print_Array1(array, rows, columns);
//
//	for (int i = 0; i < rows; i++)
//		delete[] array[i];
//	delete[] array;
//	delete[] array2;
//}