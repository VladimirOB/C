#include "pch.h"
////int main() /*3. ������������ ������ ����� �����, ��������� ������� � ��� ��� �������� (jpg, jpeg, bmp, png, gif)*/
////{
////	// ����������, �������� ���������� �� ����� �����
////	_finddata_t c_file;
////
////	// ����� ������ ��������� ������
////	long hFile;
////	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
////	hFile = _findfirst("v:\\study\\f\\i\\*.jpg", &c_file);
////
////	// ���� ���� �������� ������
////	if (c_file.attrib & _A_SUBDIR)
////		cout << c_file.name << "   " << "<DIR>" << endl;
////	else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			if (remove(c_file.name) != 0)
////				cout << "Error";
////			else
////				cout << "Okey";
////		}
////
////	// ���� ��� ��������� ���������� �� ��������� ��������� ������
////	while (_findnext(hFile, &c_file) == 0)
////	{
////		if (c_file.attrib & _A_SUBDIR)
////			cout << c_file.name << "   " << "<DIR>" << endl;
////		else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			 DeleteFile
////			(
////				LPCTSTR  (c_file.name)  // ��� �����
////			);
////
////
////		}
////	}
////	// ���������� ������ �� ������ ��������� ������
////	_findclose(hFile);
////}
//
////int main() /*3. ������������ ������ ����� �����, ��������� ������� � ��� ��� �������� (jpg, jpeg, bmp, png, gif)*/
////{
////	// ����������, �������� ���������� �� ����� �����
////	_finddata_t c_file;
////
////	// ����� ������ ��������� ������
////	long hFile;
////	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
////	hFile = _findfirst("v:\\study\\f\\i\\*.jpg", &c_file);
////
////	// ���� ���� �������� ������
////	if (c_file.attrib & _A_SUBDIR)
////		cout << c_file.name << "   " << "<DIR>" << endl;
////	else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			if (remove(c_file.name) != 0)
////				cout << "Error";
////			else
////				cout << "Okey";
////		}
////
////	// ���� ��� ��������� ���������� �� ��������� ��������� ������
////	while (_findnext(hFile, &c_file) == 0)
////	{
////		if (c_file.attrib & _A_SUBDIR)
////			cout << c_file.name << "   " << "<DIR>" << endl;
////		else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			if (remove(c_file.name)) {
////				printf("Error removing file");
////				return 1;
////			}
////			else return 0;
////
////
////		}
////	}
////	// ���������� ������ �� ������ ��������� ������
////	_findclose(hFile);
////}
//// C1189.cpp
//
//
////#include <algorithm>
////#include <experimental/filesystem>
////#include <fstream>
////#include <iostream>
////#include <vector>
////#include <iterator>
////namespace fs = std::experimental::filesystem;
////using std::endl;
////#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING 1;
//////_DEBUG; _CONSOLE; % (PreprocessorDefinitions)
////int main() /*3. ������������ ������ ����� �����, ��������� ������� � ��� ��� �������� (jpg, jpeg, bmp, png, gif)*/
////{
////	// ����������, �������� ���������� �� ����� �����
////	_finddata_t c_file;
////
////	// ����� ������ ��������� ������
////	long hFile;
////	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
////	hFile = _findfirst("v:\\study\\f\\i\\*.jpg", &c_file);
////
////	// ���� ���� �������� ������
////	if (c_file.attrib & _A_SUBDIR)
////		cout << c_file.name << "   " << "<DIR>" << endl;
////	else
////	{
////		cout << c_file.name << "   " << c_file.size << endl;
////		if (remove(c_file.name) != 0)
////			cout << "Error";
////		else
////			cout << "Okey";
////	}
////
////	// ���� ��� ��������� ���������� �� ��������� ��������� ������
////	while (_findnext(hFile, &c_file) == 0)
////	{
////		if (c_file.attrib & _A_SUBDIR)
////			cout << c_file.name << "   " << "<DIR>" << endl;
////		else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			const fs::path remove (c_file.name);
////		}
////	}
////	// ���������� ������ �� ������ ��������� ������
////	_findclose(hFile);
////}
//
//
// 
// 
//int main()
//{
//	char folder_name[80];
//	cout << "Enter folder name\n";
//	cin.getline(folder_name, 79);
//	int len = strlen(folder_name);
//
//	_finddata_t c_file;
//
//	long hFile;
//
//	hFile = _findfirst(folder_name, &c_file);
//
//	/*switch(folder_name){
//
//		case '*.jpeg*':
//				  folder_name[len-7]='\0';
//					strcat(folder_name,c_file.name);
//		case '*.jpg*':
//				  folder_name[len-6]='\0';
//					strcat(folder_name,c_file.name);
//		case '*.gif*':
//				  folder_name[len-6]='\0';
//					strcat(folder_name,c_file.name);
//		case '*.png*':
//				  folder_name[len-6]='\0';
//					strcat(folder_name,c_file.name);
//		case '*.bmp*':
//				  folder_name[len-6]='\0';
//					strcat(folder_name,c_file.name);
//
//	default:
//				folder_name[len-31]='\0';
//					strcat(folder_name,c_file.name);
//
//		}*/
//	if (folder_name[len - 2] == 'g') 
//	{
//		folder_name[len - 6] = '\0';
//		strcat(folder_name, c_file.name);
//		cout << folder_name << endl;
//	}
//
//	else {
//		if (folder_name[len - 2] == 'p') {
//			folder_name[len - 6] = '\0';
//			strcat(folder_name, c_file.name);
//			cout << folder_name << endl;
//		}
//		else {
//			if (folder_name[len - 2] == 'g') {
//				folder_name[len - 6] = '\0';
//				strcat(folder_name, c_file.name);
//				cout << folder_name << endl;
//			}
//
//			else {
//				if (folder_name[len - 2] == 'f') {
//					folder_name[len - 6] = '\0';
//					strcat(folder_name, c_file.name);
//					cout << folder_name << endl;
//				}
//
//
//				else
//				{
//					if (folder_name[len - 2] == 'e')
//					{
//						cout << folder_name << endl;
//						folder_name[len - 8] = '\0';
//						strcat(folder_name, c_file.name);
//						cout << folder_name << endl;
//					}
//
//					else
//					{
//						folder_name[len - 31] = '\0';
//
//						cout << folder_name << endl;
//					}
//				}
//			}
//
//
//		}
//	}
//	if (c_file.attrib & _A_SUBDIR)
//		cout << c_file.name << "   " << "<DIR>" << endl;
//	else
//
//		cout << c_file.name << "   " << c_file.size << endl;
//
//	// ���� ��� ��������� ���������� �� ��������� ��������� ������
//	while (_findnext(hFile, &c_file) == 0)
//	{
//		if (c_file.attrib & _A_SUBDIR)
//			cout << c_file.name << "   " << "<DIR>" << endl;
//		else
//			cout << c_file.name << "   " << c_file.size << endl;
//
//
//	}
//	if (remove(folder_name) != 0)
//		perror("Error deleting file");
//	else
//		puts("File successfully deleted");
//}

//int main()
//{
//	_finddata_t c_file; // finddata_t - ��� ������ ���������.
//	long hFile; // �����(���������) ������ ������. long ������ ��� findfirst ���������� long
//	char fname[100] = "V:\\Study\\Home Work\\Program\\Files(Folders)\\Files(Folders)\\*.jpg";
//	hFile = _findfirst(fname, &c_file); // findfirst ��������� ���� � ����� � ����� � ������� ������ ����.
//														 //  ������ * ��� ������ ��� �����. c_file ���� � �������� �����
//														 // & - ��������� �
//	strcpy(fname, c_file.name);
//	if (c_file.attrib & _A_SUBDIR)
//		cout << c_file.name << "   " << "<DIR>" << endl;
//	else
//		if (remove(fname) != 0)
//			printf("Error");
//		else
//			printf("Ok\n");
//
//	// ���� ��� ��������� ���������� �� ��������� ��������� ������
//	while (_findnext(hFile, &c_file) == 0)
//	{
//		strcpy(fname, c_file.name);
//		if (c_file.attrib & _A_SUBDIR)
//			cout << c_file.name << "   " << "<DIR>" << endl;
//		else
//			if (remove(fname) != 0)
//				printf("Error");
//			else
//				printf("Ok\n");
//
//	}
//	_findclose(hFile); // ������� ������.
//}

//int main()
//{
//	_finddata_t c_file; // finddata_t - ��� ������ ���������.
//	long hFile; // �����(���������) ������ ������. long ������ ��� findfirst ���������� long
//	char fname[100] = "V:\\Study\\f\\i\\*.*";
//	hFile = _findfirst(fname, &c_file); // findfirst ��������� ���� � ����� � ����� � ������� ������ ����.
//														 //  ������ * ��� ������ ��� �����. c_file ���� � �������� �����
//														 // & - ��������� �
//	strcpy(fname, c_file.name);
//	if (c_file.attrib & _A_SUBDIR)
//		cout << c_file.name << "   " << "<DIR>" << endl;
//	else
//		system("rem *.jpg");
//
//
//	// ���� ��� ��������� ���������� �� ��������� ��������� ������
//	while (_findnext(hFile, &c_file) == 0)
//	{
//		strcpy(fname, c_file.name);
//		if (c_file.attrib & _A_SUBDIR)
//			cout << c_file.name << "   " << "<DIR>" << endl;
//		else
//			system("rem *.jpg");
//
//	}
//	_findclose(hFile); // ������� ������.
//}


//������������ ������ ����� �����, ��������� ������� � ��� ��� �������� (jpg, jpeg, bmp, png, gif)
void main()
{
	_finddata_t c_file;	// ����������, �������� ���������� �� ����� �����
	double hFile;			// ����� ������ ��������� ������
	char way[40] = "V:\\Study\\f\\i\\";
	char mask[40] = "*.*";
	char folder[80];
	sprintf_s(folder, "%s%s", way, mask);

	hFile = _findfirst(folder, &c_file);	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
	char curfile[80];
	if (c_file.attrib & _A_SUBDIR)		// ���� ���� �������� ������
		cout << c_file.name << "   " << "<DIR>" << endl;
	else
	{
		cout << c_file.name << "   " << c_file.size << endl;
		int len = strlen(c_file.name);
		char mask1[10]; //��� ��������� ����������
		if (c_file.name[len - 4] == '.') // �������� jpg, png,gif, bmp
		{
			int k = 0;
			for (int i = len - 4; i < len; i++, k++)
			{
				mask1[k] = c_file.name[i];
			}
			mask1[k] = '\0';
		}
		if (c_file.name[len - 5] == '.')  // �������� jpeg
		{
			int k = 0;
			for (int i = len - 5; i < len; i++, k++)
			{
				mask1[k] = c_file.name[i];
			}
			mask1[k] = '\0';
		}

		if (strcmp(mask1, ".jpg\0") == 0 || strcmp(mask1, ".png\0") == 0 || strcmp(mask1, ".jpeg\0") == 0 || strcmp(mask1, ".gif\0") == 0 || strcmp(mask1, ".bmp\0") == 0)
		{
			sprintf_s(curfile, "%s%s", way, c_file.name);
			remove(curfile);
		}
		else
			cout << " Not such files!!!" << endl;
	}
	while (_findnext(hFile, &c_file) == 0)		// ���� ��� ��������� ���������� �� ��������� ��������� ������
	{
		if (c_file.attrib & _A_SUBDIR)
			cout << c_file.name << "   " << "<DIR>" << endl;
		else
		{
			cout << c_file.name << "   " << c_file.size << endl;
			int len = strlen(c_file.name);
			char mask1[10]; //��� ��������� ����������
			if (c_file.name[len - 4] == '.')    // �������� jpg, png,gif, bmp
			{
				int k = 0;
				for (int i = len - 4; i < len; i++, k++)
				{
					mask1[k] = c_file.name[i];
				}
				mask1[k] = '\0';
			}
			if (c_file.name[len - 5] == '.')    // �������� jpeg
			{
				int k = 0;
				for (int i = len - 5; i < len; i++, k++)
				{
					mask1[k] = c_file.name[i];
				}
				mask1[k] = '\0';
			}

			if (strcmp(mask1, ".jpg\0") == 0 || strcmp(mask1, ".png\0") == 0 || strcmp(mask1, ".jpeg\0") == 0 || strcmp(mask1, ".gif\0") == 0 || strcmp(mask1, ".bmp\0") == 0)
			{
				sprintf_s(curfile, "%s%s", way, c_file.name);
				remove(curfile);
			}
			else
				cout << " Not such files!!!" << endl;
		}
	}
	//���������� ������ �� ������ ��������� ������
	_findclose(hFile);
}