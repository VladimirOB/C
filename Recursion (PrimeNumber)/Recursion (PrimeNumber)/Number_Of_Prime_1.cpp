//#include "pch.h"
//
//////2. Рекурсивная функция принимает число и проверяет является ли оно простым
//
//int func(int* array, int pos)
//{
//	int result = 0;
//	int i,j;
//	
//	for (i = 0; i < 1; i++)
//	{
//		for (j = 2; j <= array[i] / 2; j++) {
//			if (array[i] % j == 0 && array[i] != j)
//			{
//				array[i] = 0;
//				return 0;
//
//			}
//		}
//		if (array[i] != 0)
//		{
//			result++;
//		}
//
//	}
//	if (result < pos)
//		func(array, pos + 1);
//	return result;
//}
//
//void main()
//{	
//	srand(time(0));
//	int array[1];
//	for (int i = 0; i < 1; i++)
//	{
//		array[i] = rand() % 100;
//		cout << array[i] << endl;
//	}
//	func(array, 0);
//	int res = func(array, 0);
//	if (res == 1)
//		cout << "Prime number!";
//	else
//		cout << "Not prime number!";
//}

//bool string(int g, int i)
//{
//	int result = 1;
//
//}
//
//int main() {
//	int g;
//	cin >> g;
//	int i = 2;
//	if (g<2)
//	{
//		cout << "0";
//		return 0;
//	}
//}