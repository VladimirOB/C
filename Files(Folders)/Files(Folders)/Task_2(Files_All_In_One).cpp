#include "pch.h"
//////int main() /*2. пользователь вводит адрес папки, программа объединяет все текстовые файлы в ней в один результирующий файл*/
//////{
//////	// переменная, хранящая информацию об одном файле
//////	_finddata_t c_file;
//////
//////	// адрес списка найденных файлов
//////	long hfile;
//////
//////	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
//////	hfile = _findfirst("v:\\study\\f\\text\\*.*", &c_file);
//////	//
//////	//	10101
//////	//	&
//////	//	00010
//////	//	00000
//////	int part = -1;
//////	long file_size = 0;
//////	char* buffer = new char[file_size];
//////	// если файл является папкой
//////	if (c_file.attrib & _A_SUBDIR)
//////		cout << c_file.name << "   " << "<dir>" << endl;
//////	else
//////		cout << c_file.name << "   " << c_file.size << endl;
//////
//////	// цикл для получения информации об остальных найденных файлах
//////	while (_findnext(hfile, &c_file) == 0)
//////	{
//////		if (c_file.attrib & _A_SUBDIR)
//////			cout << c_file.name << "   " << "<dir>" << endl;
//////		else
//////			cout << c_file.name << "   " << c_file.size << endl;
//////		part++;
//////		file_size = c_file.size;
//////		if (c_file.attrib & _A_NORMAL)
//////		{
//////			fread(buffer, sizeof(char), file_size, );
//////		}
//////
//////	}
//////	printf("\n%d\n",file_size);
//////	printf("\n%d\n", part);
//////	// освободить память от списка найденных файлов
//////	_findclose(hfile);
//////	
//////	
//////}
//////int main()
//////{
//////	_finddata_t c_file;
//////
//////	// адрес списка найденных файлов
//////	long hFile;
//////
//////	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
//////	hFile = _findfirst("v:\\study\\f\\text\\*.txt", &c_file);
//////	//char buf_name=new char[ c_file.name ];
//////	//
//////	//	10101
//////	//	&
//////	//	00010
//////	//	00000
//////	//
//////	// если файл является папкой
//////	
//////	if (c_file.attrib & _A_SUBDIR)
//////		cout << c_file.name << "   " << "<DIR>" << endl;
//////	else
//////
//////		cout << c_file.name << "   " << c_file.size << endl;
//////
//////	// цикл для получения информации об остальных найденных файлах
//////	while (_findnext(hFile, &c_file) == 0)
//////	{
//////		if (c_file.attrib & _A_SUBDIR)
//////			cout << c_file.name << "   " << "<DIR>" << endl;
//////		else
//////		{
//////			cout << c_file.name << "   " << c_file.size << endl;
//////			char* buffer = new char[c_file.size];
//////			FILE* r = fopen(c_file.name, "r");
//////			if (buffer != NULL && r != NULL)
//////			{
//////				fread(buffer, sizeof(char), c_file.size, r);
//////			}
//////			
//////			if (r != 0)
//////			{
//////				fread(buffer, sizeof(char), c_file.size, r);
//////
//////			}
//////			FILE* w = fopen("result.txt", "w");
//////			if (w != NULL && r != NULL)
//////			{
//////				fseek(r, c_file.size, SEEK_SET);
//////				fread(buffer, sizeof(char), c_file.size, r);
//////				fwrite(buffer, sizeof(char), c_file.size, w);
//////				fclose(w);
//////				fclose(r);
//////			}
//////
//////		}
//////	}
//////}
////
////int main()
////{
////	_finddata_t c_file;
////
////	// адрес списка найденных файлов
////	long hFile;
////
////	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
////	hFile = _findfirst("v:\\study\\f\\text\\*.txt", &c_file);
////	//char buf_name=new char[ c_file.name ];
////	//
////	//	10101
////	//	&
////	//	00010
////	//	00000
////	//
////	// если файл является папкой
////
////	if (c_file.attrib & _A_SUBDIR)
////		cout << c_file.name << "   " << "<DIR>" << endl;
////	else
////
////		cout << c_file.name << "   " << c_file.size << endl;
////
////	// цикл для получения информации об остальных найденных файлах
////	while (_findnext(hFile, &c_file) == 0)
////	{
////		if (c_file.attrib & _A_SUBDIR)
////			cout << c_file.name << "   " << "<DIR>" << endl;
////		else
////		{
////			cout << c_file.name << "   " << c_file.size << endl;
////			char* buffer = new char[c_file.size];
////			if (buffer != NULL)
////			{
////				fread(buffer, sizeof(char), c_file.size, &c_file);
////			}
////
////			if (r != 0)
////			{
////				fread(buffer, sizeof(char), c_file.size, c_file.name);
////
////			}
////			FILE* w = fopen("result.txt", "w");
////			if (w != NULL && r != NULL)
////			{
////				fseek(r, c_file.size, SEEK_SET);
////				fread(buffer, sizeof(char), c_file.size, r);
////				fwrite(buffer, sizeof(char), c_file.size, w);
////				fclose(w);
////				fclose(r);
////			}
////
////		}
////	}
////}
//
////while (1) {
////    str2[cnt] = str1[cnt1];
////    if (str1[cnt1] == 0)
////        break;
////    cnt++;
////    cnt1++;
////}
////cnt1 = 0;
////while (1) {
////    str2[cnt] = c_file.name[cnt1];
////    if (c_file.name[cnt1] == 0)
////        break;
////    cnt++;
////    cnt1++;
////}
////FILE* f = NULL;
////fopen_s(&f, str2, "rb");


////int main()
////{
////	FILE* new_file = fopen("V:\\Study\\f\\text\\result.txt", "wb");
////
////	_finddata_t c_file;	// переменная, хранящая информацию об одном файле
////	long hFile;			// адрес списка найденных файлов
////	char way[86] = "V:\\Study\\f\\text\\*.txt";
////	hFile = _findfirst(way, &c_file);	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
////
////	if (c_file.attrib & _A_SUBDIR)		// если файл является папкой
////		cout << c_file.name << "   " << "<DIR>" << endl;
////	else
////		cout << c_file.name << "   " << c_file.size << endl;
////	for (int i = 0; c_file.name[i] != '0'; i++)
////	{
////		//if(strcmp(c_file.name, ".txt")==0)
////		if (c_file.name[i] == '.' && c_file.name[i + 1] == 't' && c_file.name[i + 2] == 'x' && c_file.name[i + 3] == 't')
////		{
////			//----------------------------------------------------		
////			char open_filename[80];
////			int cnt_symb_way = 0;
////			for (int i = 0; way[i] != '0'; i++)
////			{
////				open_filename[i] = way[i];
////				cnt_symb_way++;
////			}
////			for (int i = 0; c_file.name[i] != '0'; i++)
////			{
////				open_filename[i + cnt_symb_way] = c_file.name[i];
////			}
////			cout << open_filename << endl;
////			FILE* part = NULL;
////			fopen_s(&part, open_filename, "rb");
////			// FILE* part = fopen(c_file.name, "rb");
////			long part_size = 0;
////			fseek(part, 0, SEEK_END);
////			part_size = ftell(part);
////
////			char* buffer = new char[part_size];
////			if (buffer != NULL)
////			{
////				fseek(part, 0, SEEK_SET);
////				fread(buffer, sizeof(char), part_size, part);
////				if (new_file != NULL)
////				{
////					fwrite(buffer, sizeof(char), part_size, new_file);
////					fclose(part);
////					delete[] buffer;
////				}
////			}
////
////
////		}
////	}
////	while (_findnext(hFile, &c_file) == 0)		// цикл для получения информации об остальных найденных файлах
////	{
////		if (c_file.attrib & _A_SUBDIR)
////			cout << c_file.name << "   " << "<DIR>" << endl;
////		else
////			cout << c_file.name << "   " << c_file.size << endl;
////		for (int i = 0; c_file.name[i] != '0'; i++)
////		{
////			if (c_file.name[i] == '.' && c_file.name[i + 1] == 't' && c_file.name[i + 2] == 'x' && c_file.name[i + 3] == 't')
////			{
////				//-------------------------------------------------
////				char open_filename[80];
////				int cnt_symb_way = 0;
////				for (int i = 0; way[i] != '0'; i++)
////				{
////					open_filename[i] = way[i];
////					cnt_symb_way++;
////				}
////				for (int i = 0; c_file.name[i] != '0'; i++)
////				{
////					open_filename[i + cnt_symb_way] = c_file.name[i];
////				}
////
////				FILE* part = NULL;
////				fopen_s(&part, open_filename, "rb");
////				//FILE* part = fopen(c_file.name, "rb");
////				long part_size = 0;
////				fseek(part, 0, SEEK_END);
////				part_size = ftell(part);
////
////				char* buffer = new char[part_size];
////				if (buffer != NULL)
////				{
////					fseek(part, 0, SEEK_SET);
////					fread(buffer, sizeof(char), part_size, part);
////					if (new_file != NULL)
////					{
////						fwrite(buffer, sizeof(char), part_size, new_file);
////						fclose(part);
////						delete[] buffer;
////					}
////				}
////				fclose(new_file);
////			}
////		}
////
////	}
////	// освободить память от списка найденных файлов
////	_findclose(hFile);
////}

void main()
{
	//2. Пользователь вводит адрес папки, программа объединяет все текстовые файлы в ней в один результирующий файл
	FILE* new_file = NULL;
	fopen_s(&new_file, "V:\\Study\\Home Work\\Program\\Files(Folders)\\Files(Folders)\\result.txt", "wb");
	_finddata_t c_file;	// переменная, хранящая информацию об одном файле
	double hFile;			// адрес списка найденных файлов
	char way[] = "V:\\Study\\f\\text\\";			//путь
	char mask[] = "*.txt";			// маска файла
	char folder[80];   //путь и маска
	sprintf_s(folder, "%s%s", way, mask);

	hFile = _findfirst(folder, &c_file);	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле

	char file_part[80];//для имени найденного файла   

	if (c_file.attrib & _A_SUBDIR)		// если файл является папкой
		cout << c_file.name << "   " << "<DIR>" << endl;
	else
	{
		cout << c_file.name << "   " << c_file.size << endl;

		sprintf_s(file_part, "%s%s", way, c_file.name);

		FILE* r = NULL;
		fopen_s(&r, file_part, "rb");
		if (r != NULL)
		{
			double file_size = 0;
			fseek(r, 0, SEEK_END);
			file_size = ftell(r);

			char* buffer = new char[file_size];
			if (buffer != NULL)
			{
				// переместиться в начало открытого файла
				fseek(r, 0, SEEK_SET);

				// чтение всего файла в память
				fread(buffer, sizeof(char), file_size, r);


				if (new_file != NULL)
				{

					fwrite(buffer, sizeof(char), file_size, new_file);

					fclose(r);
					delete[] buffer;
				}
				else
					cout << "Could not open result file!" << endl;
			}
			else
				cout << "The source file is too big!!!" << endl;

		}
		else
			cout << "Could not open destination file!!!" << endl;

	}
	while (_findnext(hFile, &c_file) == 0)		// цикл для получения информации об остальных найденных файлах
	{
		if (c_file.attrib & _A_SUBDIR)
			cout << c_file.name << "   " << "<DIR>" << endl;
		else
		{
			cout << c_file.name << "   " << c_file.size << endl;


			sprintf_s(file_part, "%s%s", way, c_file.name);

			FILE* r2 = NULL;
			fopen_s(&r2, file_part, "rb");
			if (r2 != 0)
			{
				double part_size = 0;
				fseek(r2, 0, SEEK_END);
				part_size = ftell(r2);

				char* buffer = new char[part_size];
				if (buffer != NULL)
				{
					// переместиться в начало открытого файла
					fseek(r2, 0, SEEK_SET);

					// чтение всего файла в память
					fread(buffer, sizeof(char), part_size, r2);


					if (new_file != NULL)
					{
						fwrite(buffer, sizeof(char), part_size, new_file);

						fclose(r2);
						delete[] buffer;
					}
					else
						cout << "Could not open rezult file!" << endl;
				}
				else
					cout << "The source file is too big!!!" << endl;
			}
			else
				cout << "Could not open destination file!!!" << endl;
		}
	}	////освободить память от списка найденных файлов
	fclose(new_file);
	_findclose(hFile);
}
