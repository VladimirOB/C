#include "pch.h"

//1. Пользователь вводит имя файла, программа подсчитывает количество слов в файле (слова разделены пробелами)
// 15 минут.
void main()
{
	int flag = 0;
	int word = 0;
	char filename[40];
	cout << "Enter file name for reading: ";
	cin.getline(filename, 39);

	FILE* f = NULL;

	f = fopen(filename, "r");

	//если файл удалось открыть
	if (f != NULL)
	{
		char str[100] = "";


		// пока не достигнуть конец файла !feof(f)
		//чтение новой строки из файла

		while (!feof(f))
		{
			//очистка старого содержимого строки
			strcpy(str, "");

			fgets(str, 99, f);
			// удаление перехода на новую строку
			if (str[strlen(str) - 1] == 10)
				str[strlen(str) - 1] = 0;
			/*if (str[strlen(str) - 1] != 32)
				str[strlen(str) - 1] = ' ';*/
			
			int i = 0;
			while (str[i] == ' ' && str[i] != '\0')

			i++;

			while (str[i] != '\0')
			{
				if (str[i] != ' ' && flag == 0)
				{ 
			      flag = 1; 
				  word++; 
				}
				else if (str[i] == ' ') 
				{ 
					flag = 0; 
				}
				i++;
			}

			cout << str << endl;

		}
		
		cout << "Number of words = " << word << endl;
		//закрытие файла.
		fclose(f);
	}
}