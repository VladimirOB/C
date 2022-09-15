#include "pch.h"
////2. Рекурсивная функция принимает массив чисел и его размер и возвращает сумму всех чисел(return)
//
////int func(int* n, int sum)
////{
////	for (int i = 0; i < 5; i++)
////	{
////			sum += n[i];
////	}
////	return sum;
////}
////
////int main()
////{
////	srand(time(0));
////	int sum=0;
////	int a[5];
////	for (int i = 0; i < 5; i++)
////	{
////		a[i] = rand() % 10;
////		cout << a[i] << " ";
////	}
////	func(a,sum);
////	cout << endl;
////	sum = func(a, sum);
////	cout << "Sum = " << sum << endl;
////}
//
//int func(int* a, int sum)
//{
//	int s = 0;
//	for (int i = 0; i < 5; i++)
//	{	if(sum <5)
//		s = a[0] + func(a+1, sum+1);
//	}
//	return s;
//}
//
//int main()
//{
//	srand(time(0));
//	int sum = 0;
//	int a[5];
//	for (int i = 0; i < 5; i++)
//	{
//		a[i] = rand() % 10;
//		cout << a[i] << " ";
//	}
//	func(a, sum);
//	cout << endl;
//	sum = func(a, sum);
//	cout << "Sum = " << sum << endl;
//}

//int calc_sum(int* arr, size_t size, int pos)
//{
//	int result = arr[pos];
//	if (pos < size) {
//		int res = calc_sum(arr, size, pos + 1);
//		result += res;
//	}
//	else return 0;
//	return result;
//}
//
//int main()
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	cout << "Sum = " << calc_sum(arr,7,0) << endl;
//}