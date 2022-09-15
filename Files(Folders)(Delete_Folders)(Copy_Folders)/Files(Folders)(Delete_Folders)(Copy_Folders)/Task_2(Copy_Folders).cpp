#include "pch.h"
#include <direct.h>
/*2. ������������ ������ ������ 2 �����, ��������� �������� ����� �� ������ ����� �� ������
- ������� ������� - ����������� ��� �������� (������������)
- ������� ������� - ����������� ����� � �������� � �������, ���������� ��� ��������� (�������������)*/


void dir_2(char* buffer, double file_size, char* file_part2)
{
	file* new_file = null;
	fopen_s(&new_file, file_part2, "wb");
	if (new_file != null)
	{

		fwrite(buffer, sizeof(char), file_size, new_file);

		delete[] buffer;
	}
}
void dir_1(const char* dir_path, const char* mask)
{
	bool flag = false;
	char new_folder[100];
	char* new_path = new char[8000];
	char* new_path2 = new char[8000];
	char* mask_path = new char[8000];
	char path[250];
	char path2[] = "v:\\study\\f\\two\\";
	strcpy(mask_path, dir_path);
	strcat(mask_path, "\\");
	strcpy(path, mask_path);
	strcat(mask_path, mask);

	// ����������, �������� ���������� �� ����� �����
	_finddata_t c_file;

	// ����� ������ ��������� ������
	long hfile;
	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
	hfile = _findfirst(mask_path, &c_file);
	char file_part[80]; //��� ����� ���������� �����
	char file_part2[80]; //��� ����� ���������� �����
	if (hfile == -1)
	{
		cout << "error in finding files!!!" << endl;
	}
	else
	{
		if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
		{
			// ���� ���� �������� ������
			if (c_file.attrib & _a_subdir)
			{
				cout << c_file.name << "   " << "<dir>" << endl;

				// ������������ ���� � ��������
				strcpy(new_path, dir_path);
				strcat(new_path, "\\");
				strcpy(new_path2, path2);
				// �������� � ������� ���� ��� ������� �����
				strcat(new_path, c_file.name);
				//strcat(new_path2, c_file.name);
				//cout << "go to -> " << new_path << endl;
				// ����������� ����� �������
				sprintf_s(new_folder, "%s%s", path2, c_file.name);
				long result;
				result = _mkdir(new_folder);
				flag = true;
				dir_1(new_path, mask);
			}
			else
				cout << dir_path << "\\" << c_file.name << "   " << c_file.size << endl;
			
			sprintf_s(file_part, "%s%s", path, c_file.name);
			sprintf_s(file_part2, "%s%s", path2, c_file.name);
			file* r = null;
			fopen_s(&r, file_part, "rb");
			if (r != null)
			{
				double file_size = 0;
				fseek(r, 0, seek_end);
				file_size = ftell(r);

				char* buffer = new char[file_size];
				if (buffer != null)
				{
					// ������������� � ������ ��������� �����
					fseek(r, 0, seek_set);

					// ������ ����� ����� � ������
					fread(buffer, sizeof(char), file_size, r);

					//fwrite(buffer, sizeof(char), file_size, new_file);
					fclose(r);
					dir_2(buffer, file_size, file_part2);
				}
				else
					cout << "the source file is too big!!!" << endl;

			}
			else
				cout << "could not open destination file!!!" << endl;
			flag = false;
		}

		// ���� ��� ��������� ���������� �� ��������� ��������� ������
		while (_findnext(hfile, &c_file) == 0)
		{
			if (strcmp(c_file.name, ".") != 0 && strcmp(c_file.name, "..") != 0)
			{
				if (c_file.attrib & _a_subdir)
				{
					// ������������ ���� � ��������
					cout << c_file.name << "   " << "<dir>" << endl;
					strcpy(new_path, dir_path);
					strcat(new_path, "\\");
					strcpy(new_path2, path2);
					// �������� � ������� ���� ��� ������� �����
					strcat(new_path, c_file.name);
					//cout << "go to -> " << new_path << endl;
					// ����������� ����� �������
					sprintf_s(new_folder, "%s%s", path2, c_file.name);
					int result;
					result = _mkdir(new_folder);
					strcat(new_folder, "\\");
					flag = true;
					dir_1(new_path, mask);
				}
				else
					cout << dir_path << "\\" << c_file.name << "   " << c_file.size << endl;
				
				sprintf_s(file_part, "%s%s", path, c_file.name);
				if(!flag)
				sprintf_s(file_part2, "%s%s", path2, c_file.name);
				else
				sprintf_s(file_part2, "%s%s", new_folder, c_file.name);
				file* r = null;
				fopen_s(&r, file_part, "rb");
				if (r != null)
				{
					long file_size = 0;
					fseek(r, 0, seek_end);
					file_size = ftell(r);

					char* buffer = new char[file_size];
					if (buffer != null)
					{
						// ������������� � ������ ��������� �����
						fseek(r, 0, seek_set);

						// ������ ����� ����� � ������
						fread(buffer, sizeof(char), file_size, r);

						//fwrite(buffer, sizeof(char), file_size, new_file);
						fclose(r);
						dir_2(buffer, file_size, file_part2);
					}
					else
						cout << "the source file is too big!!!" << endl;

				}
				else
					cout << "could not open destination file!!!" << endl;
			}
		}
		// ���������� ������ �� ������ ��������� ������
		_findclose(hfile);

		delete[] new_path;
		delete[] mask_path;
	}
}

int main()
{
	dir_1("v:\\study\\f\\one", "*.*");
}
