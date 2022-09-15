//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);

	//Использовать тернарный оператор
	/*1. Пользователь вводит массив из 5 элементов.
		 Программа находит максимум отрицательных чисел и минимум положительных*/

		 //int arr[5], min, max;
		 //cout << "Enter five Elements:\n";
		 //
		 //min = max = 0;
		 //
		 //for (int i = 0; i < 5; i++)
		 //{
		 //	cin >> arr[i];
		 //	if (arr[0] > 0)
		 //		min = arr[0];

		 //	else min = arr[i];
		 //	
		 //	if (arr[i] < 0)
		 //		max = arr[i];
		 //	
		 //}
		 //for (int i = 0; i < 5; i++)
		 //{
		 //	/*if (arr[i] > 0 && arr[i] < min) min = arr[i];*/
		 //	if (arr[i] > 0)
		 //	min = (min < arr[i]) ? min : arr[i];
		 //	if (arr[i] < 0 && arr[i] > max) max = arr[i];

		 //}
		 //cout << "Min positive " << min << endl;
		 //cout << "Max negative " << max << endl;

		   //2. Программа заполняет массив из 10 элементов случайными числами в диапзоне[0; 20], выводит
		   //массив на экран и подсчитывает количество нечётных чисел

		   //int a[10], cnt=0;
		   //srand(time(NULL));
		   //for (int i = 0; i < 10; i++)
		   //{
		   //	a[i] = rand()%20;
		   //}
		   //for (int i = 0; i < 10; i++)
		   //{
		   //	/*if (a[i] % 2 == 1)
		   //		cnt++;*/
		   //	(a[i] % 2 == 1) ? cnt++ : a[i];
		   //	
		   //	cout << a[i] << " ";
		   //}
		   //cout << "\nOdd " << cnt << endl;

		   //3. Пользователь вводит массив из 5 элементов.
		   //Программа меняет местами минимум и максимум в массиве и выводит массив на экран

		   /*int a[5], min, max;

		   for (int i = 0; i < 5; i++)
		   {
			   cin >> a[i];
		   }
		   min = max = 0;
		   for (int i = 0; i < 5; i++)
		   {
			   (a[i] < a[min]) ? min : a[i];

			   if (a[i] > a[max])
				   max = i;

		   }
		   int temp = a[max];
		   a[max] = a[min];
		   a[min] = temp;
		   for (int i = 0; i < 5; i++)
		   {
			   cout << a[i] << " ";
		   }

		   cout << endl;*/

		   //4. Пользователь вводит массив из 5 элементов.Программа находит 2 максимума в массиве за один обход массива.


//	int a[5], max1 = 0, max2 = 0, n = 0;
//
//	for (int i = 0; i < 5; i++)
//
//		if ((cin >> a[i], a[i] > max1 || i == 0))
//		{
//			max1 = a[i];
//			n = i;
//		}
//	for (int i = 0; i < 5; i++)
//	{
//		/*if (i != n && a[i] > max2) max2 = a[i];*/
//		max2 = (i != n && a[i] > max2) ? a[i] : max2; 
//
//	}
//	
//	cout << "Max1 " << max1 << endl;
//	cout << "Max2 " << max2 << endl;
//
//}





