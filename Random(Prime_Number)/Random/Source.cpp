//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);

	/*1. ��������� ��������� ������ �� 10 ��������� ����������
	��������� ������� � ���������[10; 30]
	� ������� ������� ��������������*/

	/*int a = 10, b = 30,cnt=0,sum=0;
	int c[10];

	for (int i = 0; i < 10; i++)
	{
		int d=0;
		while (d%2==0)
		d = rand() % (b - a + 1) + a;

		if (d % 2) {
			c[i] = d;
			cnt++;
			sum += c[i];
			cout << c[i] << endl;
		}

	}
	cout << "\nAVG =" << sum / cnt << endl;*/

	/*2. ��������� ��������� ������ �� 10 ��������� ���������� ������� � ���������[10; 20]
		� ��������, ���� �� �����, ������� �����������*/

		//int a = 10, b = 20;
		//const int size = 10;
		//int c[size];
		//
		//for (int i = 0; i < size; i++)
		//{
		//		c[i] = rand() % (b - a + 1) + a;
		//		cout << c[i] << endl;
		//		
		//	
		//	
		//}
		//
		//for (int i = 0; i < size; i++)
		//{
		//	for (int k = i + 1; k < size; k++)
		//	{
		//		if (c[i] == c[k])
		//			cout << "Duplicate = " << c[k] << endl;
		//	}
		//}

		/*3. ��������� ��������� ������ �� 10 ��������� ���������� �������
		� ���������[10; 30]
		� ������������, ������� �� ��� �������� �������� �������*/


		int i, j,a = 10, b = 30, cnt = 0;
		//const int size = 10;
		int array[10];

		for (i = 0; i < 10; i++) 
		{
			array[i] = rand() % (b - a + 1) + a; 
			cout << array[i] << endl;
		}
			for ( i = 0; i < 10; i++) 
			{
				for (j = 2; j <= array[i] / 2; j++) {
					if (array[i] % j == 0 && array[i] != j)
					{
						array[i] = 0;
						break;
						
					}
				}
				if (array[i] != 0)
				{
					cnt++;
				}
				
			}
			
			cout << "\nNumbers of primes = " << cnt << endl;

	/*�� ������ �3*/


		//const int size = 10;
		//int a = 10, b = 30, prime_count = 0;
		//int c[size];

		//for (int i = 0; i < size; i++)
		//{
		//	c[i] = rand() % (b - 1 + 1) + a;
		//	cout << c[i] << " ";
		//}
		//cout << endl;

		////������� ���� ����� �������
		//for (int i = 0; i < size; i++)
		//{
		//	int cnt = 0;
		//	// ����������� �������� ��������
		//	for (int k = 2; k < c[i]/2; k++)
		//	{
		//		if (c[i] % k == 0)
		//			cnt++;
		//		
		//	}
		//	if (cnt == 0)
		//		prime_count++;
		//}
		//cout <<"Prime count:" << prime_count  << endl;

	//		
	//}