#include "pch.h"

//2. Пользователь вводит имя файла и строки, пока не введёт слово exit. 
// Программа записывает в файл только строки, которые являются целыми числами (345, -34, +54)

int main()
{
char a[40];
char str[40];
int count = 0;
bool is_number = false;
cout << "enter file name: " << endl;
cin.getline(a, 39);
FILE* f = fopen(a, "w");

if (f != NULL)
{
		while (1) {
			cin.getline(str, 39);
			
			if (strcmp(str, "exit") == 0) {
				fclose(f);
				break;
			}
			count = 0;
			for (int i = 0; i < str[i] != 0; i++)
			{
					if (str[i] >= '0' && str[i] <= '9' || str[0] == '-' || str[0] == '+')
					is_number = true;
				else
				{
					is_number = false;
					count++;
				}
			}
			
			if (is_number == true && count == 0) {
				fputs(str, f);
				fputs("\n", f);
			}
			
		}
		fclose(f);
	}
}
