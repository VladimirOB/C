//#include "pch.h"
//
//int main()
//{
//	srand(time(0));
//
//	SetConsoleCP(rus);
//	SetConsoleOutputCP(rus); 
//
//	// Программа заполняет два массива размером 3х4 случ.числами в диап. (10 .. 30)
//	// программа показывает массивы на экран и посчитывает сколько в массивах одинаковых чисел.
//	//	и выводит список общих чисел без повторений.
//
//	const int rows = 3;
//	const int columns = 4;
//	int a[rows][columns];
//	int b[rows][columns];
//	int z = 10, x = 30;
//	int c[rows*columns];
//	int cnt = 0;
//	int cnt2 = 0;
//	cout << "First array: \n" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < columns; k++)
//		{
//				a[i][k] = rand() % (x - z + 1) + z;
//				cout << a[i][k] << " ";
//		}
//		cout << endl;
//	}
//	cout << "\nSecond array: \n" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < columns; k++)
//		{
//			b[i][k] = rand() % (x - z + 1) + z;
//			cout << b[i][k] << " ";
//		}
//		cout << endl;
//	}
//	cout << "\n";
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int k = 0; k < columns; k++)
//		{
//			for (int j = 0; j < rows; j++)
//			{
//				for (int g = 0; g < columns; g++)
//				{
//					if (a[i][k] == b[j][g])
//					{
//						c[cnt++] = a[i][k];
//					}
//				}
//			}
//		}
//	}
//
//		cout << "Repeat: ";
//		for (int i = 0; i < cnt; i++)
//		{
//			int t = 0;
//			for (int k = i; k < cnt; k++)
//			{
//				if (c[i] == c[k] && i != k)
//				{
//					t++;
//				}
//			}
//			if (t == 0)
//			{
//				cnt2++;
//				cout << c[i] << " ";
//			}
//		}
//		cout << "\n" << "Numbers = " << cnt2 << endl;
//}