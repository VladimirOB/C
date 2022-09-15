#include "pch.h"

//1. разработать функцию void fprint_num(f, ...),
//котора€ принимает адрес открытого файла и неопределЄнное количество целых чисел.функци€ сохран€ет все эти
//числа в текстовый файл в строку.
//
//пример использовани€ :
//file * f = null;
//f = fopen("myfile.txt", "w");
//fputs("hello world\n", f);
//fprint_num(f, 1, 3, 4, 7, 0);
//fprint_num(f, 9, 8, 7, 6, 5, 4, 3, 0);
//fclose(f);
//
//пример результата :
//hello world
//1 3 4 7
//9 8 7 6 5 4 3

void fprint_num(file* w, int first, ...)
{
	va_list lst; // объ€вление указател€ дл€ перемещени€ по стеку с параметрами.

	va_start(lst, first); // установка указател€ на параметр в начало(на первый после first).
	fprintf(w, "%d ", first); // закинул first
	while (true)
	{
		int current = va_arg(lst, int); // получаем текущий параметр из стека параметров функции.
		if (current == 0)
			break; // выход из цикла.
		fprintf(w, "%d ", current);
	}
	fprintf(w, "\n");
	va_end(lst); // очистка пам€ти от указател€ на стек параметров.
}
void main()
{
	file* w = fopen("fil123123123qweqwe.txt", "w");
	fputs("hello world\n", w);
	fprint_num(w, 1, 3, 4, 7, 0);
	fprint_num(w, 9, 8, 7, 6, 5, 4, 3, 0);
    fclose(w);
	puts("save successfully!");
}