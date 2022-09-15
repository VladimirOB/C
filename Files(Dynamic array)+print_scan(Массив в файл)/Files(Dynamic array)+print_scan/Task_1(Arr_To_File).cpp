//#include "pch.h"
//
////1. Программа спрашивает у пользователя размер двумерного массива и пользователь вводит сам массив с клавиатуры
////После этого пользователь вводит имя текстового файла и программа сохраняет массив в файл.
////Пример:
////3 3
////1 2 3
////4 5 6
////7 8 9
//
//void f(int** a, int rows, int cols)
//{
//	char filename[40];
//	cout << "Enter location and file name: " << endl;
//	cin >> filename;
//	FILE* w = fopen(filename, "w");
//	fprintf(w, "%d %d\n", rows, cols);
//	if (w != NULL)
//	{
//		for (int i = 0; i < rows; i++)
//		{
//			for (int k = 0; k < cols; k++)
//			{
//				fprintf(w, "%d ", a[i][k]);
//			}
//			fprintf(w, "\n");
//		}
//		fclose(w);
//	}
//	
//}
//
//void main()
//{
//	int rows, cols;
//	cout << "Enter number of rows: " << endl;
//	cin >> rows;
//	cout << "Enter number of columns: " << endl;
//	cin >> cols;
//	int** a = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		a[i] = new int[cols];
//	}
//	cout << "Enter array: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < cols; k++)
//		{
//			cin >> a[i][k];
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < cols; k++)
//		{
//			cout << a[i][k] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	f(a, rows, cols);
//	for (int i = 0; i < rows; i++)
//	{
//		delete a[i];
//	}
//	delete[] a;
//}
