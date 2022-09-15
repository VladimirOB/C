#include "pch.h"

//1. ����������� ������� void fprint_num(f, ...),
//������� ��������� ����� ��������� ����� � ������������� ���������� ����� �����.������� ��������� ��� ���
//����� � ��������� ���� � ������.
//
//������ ������������� :
//file * f = null;
//f = fopen("myfile.txt", "w");
//fputs("hello world\n", f);
//fprint_num(f, 1, 3, 4, 7, 0);
//fprint_num(f, 9, 8, 7, 6, 5, 4, 3, 0);
//fclose(f);
//
//������ ���������� :
//hello world
//1 3 4 7
//9 8 7 6 5 4 3

void fprint_num(file* w, int first, ...)
{
	va_list lst; // ���������� ��������� ��� ����������� �� ����� � �����������.

	va_start(lst, first); // ��������� ��������� �� �������� � ������(�� ������ ����� first).
	fprintf(w, "%d ", first); // ������� first
	while (true)
	{
		int current = va_arg(lst, int); // �������� ������� �������� �� ����� ���������� �������.
		if (current == 0)
			break; // ����� �� �����.
		fprintf(w, "%d ", current);
	}
	fprintf(w, "\n");
	va_end(lst); // ������� ������ �� ��������� �� ���� ����������.
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