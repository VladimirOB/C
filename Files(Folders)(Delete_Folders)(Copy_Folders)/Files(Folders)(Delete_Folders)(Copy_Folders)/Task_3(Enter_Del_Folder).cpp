#include "pch.h"

// Разработать программу, которая очищает папку и подпапки от папок .VS и Debug
char deb[100];
void dir_1(const char* dir_path, const char* mask)
{ 
	char* new_path = new char[8000];
	char* mask_path = new char[8000];
	char path[250];
	char folder[1000];
	strcpy(mask_path, dir_path);
	strcat(mask_path, "\\");
	strcpy(path, mask_path);
	strcat(mask_path, mask);
	// переменная, хранящая информацию об одном файле
	_finddata_t c_file;

	// адрес списка найденных файлов
	long hFile;
	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
	hFile = _findfirst(mask_path, &c_file);

	if (hFile == -1)
	{
		cout << "Error in finding files!!!" << endl;
	}
	else
	{
		if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
		{
			// если файл является папкой
			if (c_file.attrib & _A_SUBDIR)
			{
				cout << c_file.name << "   " << "<DIR>" << endl;

				// сформировать путь к подпапке
				strcpy(new_path, dir_path);
				strcat(new_path, "\\");

				// добавить к полному пути имя текущей папки
				strcat(new_path, c_file.name);
				//cout << "Go to -> " << new_path << endl;
				
				// рекурсивный вызов функции
				dir_1(new_path, mask);
			}
			else
				cout << dir_path << "\\" << c_file.name << "   " << c_file.size << endl;

		/*	sprintf_s(folder, "%s%s", path, c_file.name);
			remove(folder);*/
			
		}

		// цикл для получения информации об остальных найденных файлах
		while (_findnext(hFile, &c_file) == 0)
		{
			if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
			{
				if (c_file.attrib & _A_SUBDIR)
				{
					// сформировать путь к подпапке
					cout << c_file.name << "   " << "<DIR>" << endl;
					strcpy(new_path, dir_path);
					strcat(new_path, "\\");
					// добавить к полному пути имя текущей папки
					strcat(new_path, c_file.name);
					//cout << "Go to -> " << new_path << endl;
					if (strcmp(c_file.name, "debug") == 0)
					{
						strcat(deb, new_path);
					}
					// рекурсивный вызов функции
					dir_1(new_path, mask);
				}
				else
					cout << dir_path << "\\" << c_file.name << "   " << c_file.size << endl;
				if (strcmp(deb, "v:\\Study\\f\\123\\debug") == 0)
				{
					sprintf_s(folder, "%s%s", path, c_file.name);
					remove(folder);
					long result;
					result = _rmdir(deb);
					cout << "Debug Delete!" << endl;
				}
				
			}
		}

		// освободить память от списка найденных файлов
		_findclose(hFile);

		delete[] new_path;
		delete[] mask_path;
	}
}
int main() 
{
	dir_1("v:\\Study\\f\\123", "*.*");
}