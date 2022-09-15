#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//	// Задача 1.
	//    //Пользователь вводит 2  диапазона чисел,  
	//   //Программа выводит и посчитывает сумму всех чисел, которые входят одновременно в 1-й и 2-й диапазон. 
	cout << "Task 1" << endl;
	int a, b, c, d, sum = 0;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	cout << "Enter d:";
	cin >> d;
	if (a > b || c > b || c > d || a > d)
		cout << "Ranges don't intersect" << endl;
	else
	{
		if (c > a && d > b)
			for (int i = c; i <= b; i++)
			{
				sum += i;
				cout << i << endl;
			}
		if (b > d && a > c)
			for (int i = a; i <= d; i++)
			{
				sum += i;
				cout << i << endl;
			}
		if (b > d && c > a)
			for (int i = c; i <= d; i++)
			{
				sum += i;
				cout << i << endl;
			}
		if (d > b && a > c)
			for (int i = a; i <= b; i++)
			{
				sum += i;
				cout << i << endl;
			}
		cout << "Sum =" << sum << endl;
	}
}
//
//	// Задача 2. 
//	//Пользователь вводит 5 чисел, программа проверяет все ли они идут в порядке возрастания(использовать while, for)
//
//	//While.
//    /*cout << "Task 2 While" << endl;
//	int n, a;
//	int v = 0;
//	
//	cin >> n;
//	while (v < 4)
//	{
//		v++;
//		cin >> a;
//		
//		if (a < n) {
//			cout << "Wrong" << endl;
//			break;
//
//		}
//		
//	}*/
//
//
//	//For.
//	/*cout << "Task 2 For" << endl;
//	int n, a;
//	int	count=0;
//
//	cin >> n;
//	for (int i = 1; i < 5; i++)
//	{	
//		cin >> a;
//		if (n >= a)count++;
//		
//		if (count > 0) {
//
//
//			cout << "Wrong" << endl;
//			break;
//		}
//	}*/
//
//}