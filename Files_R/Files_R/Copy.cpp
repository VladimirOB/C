#include "pch.h"
//void main() //2. ������������ ������ 2 ����� ��������� ������.��������� �������� ��� ������ �� ������� ����� �� ������ ��������� ����
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
//	if (f != NULL) //���� ���� ������� �������
//	{
//		char str_f[100] = "";
//		char str_s[100] = "";
//		
//		while (!feof(f))
//		{
//			//������� ������� ����������� ������
//			strcpy(str_f, "");
//
//			fgets(str_f, 99, f);
//			// �������� �������� �� ����� ������
//			if (str_f[strlen(str_f) - 1] == 10)
//				str_f[strlen(str_f) - 1] = 0;
//
//			strcpy(str_s, str_f); // ����������� ������ first � ������ second ��� ������ sctcpy
//			fputs(str_s, g);
//			fputs("\n", g);
//		}
//		fclose(f);
//		fclose(g);
//	}
//}
