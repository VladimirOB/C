#include "pch.h"
//void main() //2. Пользователь вводит 2 имени текстовых файлов.Программа копирует все строки из первого файла во второй созданный файл
//{
//	char filename_first[40];
//	char filename_second[40];
//	cout << "Enter file name for reading: ";
//	cin.getline(filename_first, 39);
//	cout << "Enter file name for writing: ";
//	cin.getline(filename_second,39);
//	FILE* f = fopen(filename_first, "r");
//	FILE* g = fopen(filename_second, "w");
//
//	if (f != NULL) //если файл удалось открыть
//	{
//		char str_f[100] = "";
//		char str_s[100] = "";
//		
//		while (!feof(f))
//		{
//			//очистка старого содержимого строки
//			strcpy(str_f, "");
//
//			fgets(str_f, 99, f);
//			// удаление перехода на новую строку
//			if (str_f[strlen(str_f) - 1] == 10)
//				str_f[strlen(str_f) - 1] = 0;
//
//			strcpy(str_s, str_f); // копирование строки first в строку second при помощи sctcpy
//			fputs(str_s, g);
//			fputs("\n", g);
//		}
//		fclose(f);
//		fclose(g);
//	}
//}
