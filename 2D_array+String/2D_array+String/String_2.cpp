//#include "pch.h"
//int main()
//{
//	/*3. Пользователь вводит 2 строки, программа определяет идентичны ли они.*/
//
//	/*Интуитивно представляется, что должна быть выведена надпись «Строки равны!», но на практике этого не происходит, 
//		то есть условие first_string == second является false.*/
//
//		/*Объяснение: в C строка — это указатель на область памяти, которая содержит байты.
//		Сравнение char* с char* с использованием оператора равенства не будет работать должным образом, 
//		потому что вы сравниваете места в памяти строк, а не их байтовое содержимое.*/
// 
// 
//  // Вариант 1.
// 
//	/*char str[40];
//	string str2;
//	cout << "Enter first string: " << endl;
//	cin.getline(str, 39);
//	cout << "Enter second string: " << endl;	
//	cin >> str2;
//
//	if (str == str2)
//		cout << "Strings are equal!" << endl;
//	else
//		cout << "Strings are not equal!" << endl;*/
//
//	// Вариант 2.
//	// Сравнение char в функции strcmp() (чтоб работала подключить #include <cstring>)
//	
//	char str[40];
//	cout << "Enter first string: " << endl;
//	cin.getline(str, 39);
//	char str2[40];
//	cout << "Enter first string: " << endl;
//	cin.getline(str2, 39);
//	if (strcmp(str, str2) == 0)
//		cout << "Strings are equal!" << endl;
//	else
//		cout << "Strings are not equal!" << endl;
//
//		// Можно конвертировать char в string. тогда == тоже будет работать.
//		/*char str[40] = "sum";
//		string str2 = str;
//		if (str2 == "sum") {
//			cout << "Ok!" << endl;
//		}*/
//
//	    /*Выводы
//
//		char нельзя непосредственно сравнивать со строкой в кавычках, 
//		поскольку это даст неправильный результат. char можно сравнивать с переменной типа string, 
//		либо присвоить значение переменной типа string и затем сравнить со строкой в кавычках, 
//		либо можно использовать функцию strcmp для сравнения char со строкой в кавычках.*/
//
//	
//	
//return 0;
//}