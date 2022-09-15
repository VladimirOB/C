//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main()
//	{
//		srand(time(0));
//
//		SetConsoleCP(1251);
//		SetConsoleOutputCP(1251);

		//Задача 1. 
		// Дано целое число с диапазоном 1-7. Вывести строку - название дня недели, соотв. данному числу.
		// (пн - 1, вт - 2 и тд.)

		/*int cnt;
		while (true)
		{
			cin >> cnt;
			switch(cnt)
			{
			case 1:
				cout << "Mondey\n";
				break;
			case 2:
				cout << "Tuesday\n";
				break;
			case 3:
				cout << "Wednesday\n";
				break;
			case 4:
				cout << "Thursday\n";
				break;
			case 5:
				cout << "Friday\n";
				break;
			case 6:
				cout << "Saturday\n";
				break;
			case 7:
				cout << "Sunday\n";
				break;

			default:
				cout << "Wrong!\n";
				break;
			}

		}*/

		//Задача 2.
		// Единицы массы пронумерованы следующим образом:
		// 1 - килограмм, 2 - миллиграмм, 3 - грамм, 4 - тонна, 5 - центнер.
		// Дан номер единицы массы (целое число в диапазоне 1-5)
		// и масса тела в этих единицах(вещ.число). Найти массу тела в кг.

		//double weight;
		//double body = 0;
		//int cmd;

		//while (true)
		//{
		//	system("cls");
		//	cout << "\t*** Menu ***\n";
		//	cout << "1. Kilogram\n";
		//	cout << "2. Milligram\n";
		//	cout << "3. Gram\n";
		//	cout << "4. Tones\n";
		//	cout << "5. Centner\n";
		//	cout << "0. Exit\n";
		//	cout << "   Your choice> ";
		//	cin >> cmd;

		//	if (cmd == 0) break;

		//	if (cmd < 1 || cmd > 5)
		//	{
		//		cout << "Error.\n";
		//		system("pause");
		//		continue;
		//	}

		//	cout << "Enter weight ";
		//	cin >> weight;
		//	if (weight <= 0) {
		//		cout << "Error. weight cannot be zero or negative";
		//		system("pause");
		//		continue;
		//	}

		//	switch (cmd)
		//	{
		//	case 1:
		//		body = weight;
		//		break;
		//	case 2:
		//		body = weight * 1000000;
		//		break;
		//	case 3:
		//		body = weight * 1000.;
		//		break;
		//	case 4:
		//		body = weight / 1000.;
		//		break;
		//	case 5:
		//		body = weight / 100.;
		//		break;

		//	}
		//	cout << "Weight = " << body << endl;
		//	/*cout << "Жмяк КНОПКИ ЛЮБЫЭ";system("pause>nul");*/
		//	cout << "Press any key:";
		//	system("pause>nul");
		//}// while


		//Задача 3.
		/*Элементы окружности пронумерованы следующим образом:
		1-радиус R.
		2 - диаметр D=2*R.
		3 - длина L = 2 * Pi * R.  (Pi = 3.14)
		4 - площадь круга S = Pi * R^^
		Дан номер одного из этих элементов и его значение.
		Вывести значения остальных элементов данной окр. (в том же порядке)*/

		//double R,D,L,S;
		//const double P = 3.14;
		//int number;
		//char el;
		//double value_enter;

		//while (true)
		//{
		//	system("cls");
		//	cout << "\t** Menu **\n";
		//	cout << "1. Radius\n";
		//	cout << "2. Diameter\n";
		//	cout << "3. Lenght\n";
		//	cout << "4. Area of a circle\n";

		//	cout << "Enter number:" << endl;
		//	cin >> number;
		//	if (number < 1 || number > 4)
		//	{
		//		cout << "Error!\n";
		//		system("pause");
		//			continue;

		//	}
		//	switch (number)
		//	{
		//	case 1:
		//		el = 'R'; break;
		//	case 2:
		//		el = 'D'; break;
		//	case 3:
		//		el = 'L'; break;
		//	case 4:
		//		el = 'S'; break;

		//	}

		//	cout << "Your element = " << el << endl;
		//	cout << "Enter value of " << el << endl;
		//	cin >> value_enter;

		//	switch (el)
		//	{
		//	case 'R':
		//		/*cout << "R= " << value_enter << endl;*/
		//		cout << "D= " << 2 * value_enter << endl;
		//		cout << "L= " << 2 * P * value_enter << endl;
		//		cout << "R= " << P * pow(value_enter, 2) << endl;
		//		system("pause");
		//		break;
		//	case 'D':
		//		cout << "R= " << value_enter / 2 << endl;
		//		/*cout << "D= " << value_enter << endl;*/
		//		cout << "L= " << 2 * P * (value_enter / 2) << endl;
		//		cout << "R= " << P * pow(value_enter / 2, 2) << endl;
		//		system("pause");
		//		break;
		//	case 'L':
		//		cout << "R= " << value_enter / (2 * P) << endl;
		//		cout << "D= " << (value_enter / (2 * P)) * 2 << endl;
		//		/*cout << "L= " << value_enter << endl;*/
		//		cout << "R= " << P * pow(value_enter / (2 * P), 2) << endl;
		//		system("pause");
		//		break;
		//	case 'S':
		//		cout << "R= " << sqrt(value_enter / P) << endl;
		//		cout << "D= " << sqrt(value_enter / P) * 2 << endl;
		//		cout << "L= " << 2 * P * sqrt(value_enter / P) << endl;
		//		/*cout << "R= " << value_enter << endl;*/
		//		system("pause");
		//		break;


		//	}

		//}

		//Задача 4.
		/*Элементы равностороннего треугольника пронумерованы следующим образом:
		1 - сторона a
		2 - радиус R1 вписанной окружности (R1 = a*sqrt3/6)
		3 - радиус R2 описанной окружности (R2 = 2*R1)
		4 - площадь S = a** * sqrt 3/4
		Дан номер одного из этих элементов и его значение.
		Вывести значения остальных элементов данного треугольника (в том же пор.)*/

		/*double x, a, r1, r2, s;
		int number;

		while (true)
		{
			system("cls");
			cout << "\t>*>*> Menu <*<*<\n";
			cout << "1. Side a\n";
			cout << "2. Radius 1\n";
			cout << "3. Radius 2\n";
			cout << "4. Square\n";

			cout << "Enter number:" << endl;
			cin >> number;
			cout << "Lenght:" << endl;
			cin >> x;

			if (number < 1 || number > 4)
			{
				cout << "Error!\n";
				system("pause");
				continue;

			}
			switch (number)
			{
			case 1:
				a = x;
				r1 = a * sqrt(3) / 6;
				r2 = 2 * r1;
				s = a * a * sqrt(3) / 4;
				cout << "R1 = " << r1 << endl << "R2 = " << r2 << endl << "S = " << s << endl;
				system("pause");
				continue;
				break;
			case 2:
				r1 = x;
				a = r1 * 6 / sqrt(3);
				r2 = 2 * r1;
				s = a * a * sqrt(3) / 4;
				cout << "a = " << a << endl << "R2 = " << r2 << endl << "S = " << s << endl;
				system("pause");
				continue;
				break;
			case 3:
				r2 = x;
				r1 = r2 / 2;
				a = r1 * 6 / sqrt(3);
				s = a * a * sqrt(3) / 4;
				cout <<"a = "<< a << endl <<"R1 = " << r1 << endl <<"S = " << s << endl;
				system("pause");
				continue;
				break;
			case 4:
				s = x;
				a = sqrt(s * 4 / sqrt(3));
				r1 = a * sqrt(3) / 6;
				r2 = 2 * r1;
				cout << "a = " << a << endl << "R1 = " << r1 << endl <<"R2 = " << r2 << endl;
				system("pause");
				continue;
				break;
			}
		}*/
		//			
		//
		//}