//#include "pch.h"
//
////1 Пользователь вводит имя файла и строки, пока не введёт слово exit. 
//// Программа записывает в файл только строки, которые начинаются и заканчиваются на гласные буквы.
//
//void main()
//{
//	char a[40];
//	char str[40];
//	bool check_begin = false;
//	bool check_end = false;
//	cout << "Enter file name: " << endl;
//	cin.getline(a, 39);
//	FILE* f = fopen(a, "w");
//
//	if (f != NULL)
//	{
//		//«A», «E», «I», «O», «U», «Y»
//		while (1) {
//			cin.getline(str, 39);
//			if (strcmp(str, "exit") == 0) {
//				fclose(f);
//				break;
//			}
//			
//			if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'y' ||
//				str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U' || str[0] == 'Y')
//			{
//				check_begin = true;
//			}
//			else
//				check_begin = false;
//			if (str[strlen(str) - 1] == 'a' || str[strlen(str) - 1] == 'e' || str[strlen(str) - 1] == 'i' || 
//			    str[strlen(str) - 1] == 'o' || str[strlen(str) - 1] == 'u' || str[strlen(str) - 1] == 'y' || 
//				str[strlen(str) - 1] == 'A' || str[strlen(str) - 1] == 'E' || str[strlen(str) - 1] == 'I' || 
//				str[strlen(str) - 1] == 'O' || str[strlen(str) - 1] == 'U' || str[strlen(str) - 1] == 'Y' )
//			{
//				check_end = true;
//			}
//			else check_end = false;
//
//			if (check_begin == true && check_end == true)
//			{
//				fputs(str, f);
//				fputs("\n", f);
//			}
//		}
//		fclose(f);
//	}
//}
//
