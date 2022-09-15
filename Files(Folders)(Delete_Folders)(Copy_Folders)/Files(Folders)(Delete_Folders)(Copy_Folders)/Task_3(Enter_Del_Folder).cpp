#include "pch.h"

// ����������� ���������, ������� ������� ����� � �������� �� ����� .VS � Debug
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
	// ����������, �������� ���������� �� ����� �����
	_finddata_t c_file;

	// ����� ������ ��������� ������
	long hFile;
	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
	hFile = _findfirst(mask_path, &c_file);

	if (hFile == -1)
	{
		cout << "Error in finding files!!!" << endl;
	}
	else
	{
		if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
		{
			// ���� ���� �������� ������
			if (c_file.attrib & _A_SUBDIR)
			{
				cout << c_file.name << "   " << "<DIR>" << endl;

				// ������������ ���� � ��������
				strcpy(new_path, dir_path);
				strcat(new_path, "\\");

				// �������� � ������� ���� ��� ������� �����
				strcat(new_path, c_file.name);
				//cout << "Go to -> " << new_path << endl;
				
				// ����������� ����� �������
				dir_1(new_path, mask);
			}
			else
				cout << dir_path << "\\" << c_file.name << "   " << c_file.size << endl;

		/*	sprintf_s(folder, "%s%s", path, c_file.name);
			remove(folder);*/
			
		}

		// ���� ��� ��������� ���������� �� ��������� ��������� ������
		while (_findnext(hFile, &c_file) == 0)
		{
			if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
			{
				if (c_file.attrib & _A_SUBDIR)
				{
					// ������������ ���� � ��������
					cout << c_file.name << "   " << "<DIR>" << endl;
					strcpy(new_path, dir_path);
					strcat(new_path, "\\");
					// �������� � ������� ���� ��� ������� �����
					strcat(new_path, c_file.name);
					//cout << "Go to -> " << new_path << endl;
					if (strcmp(c_file.name, "debug") == 0)
					{
						strcat(deb, new_path);
					}
					// ����������� ����� �������
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

		// ���������� ������ �� ������ ��������� ������
		_findclose(hFile);

		delete[] new_path;
		delete[] mask_path;
	}
}
int main() 
{
	dir_1("v:\\Study\\f\\123", "*.*");
}