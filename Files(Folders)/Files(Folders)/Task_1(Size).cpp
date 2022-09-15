#include "pch.h" 

/*1. Пользователь вводит адрес папки, программа подсчитывает общий размер файлов в ней*/

int main()
{    // переменная, хранящая информацию об одном файле
	_finddata_t c_file;

	// адрес списка найденных файлов
	long hFile;
	int size = 0;
	// найти файлы по маске и вернуть адрес списка найденных файлов и информацию о первом файле
	hFile = _findfirst("v:\\study\\f\\test\\*.*", &c_file); 
	//
	//	10101
	//	&
	//	00010
	//	00000
	//
	// если файл является папкой
	if (c_file.attrib & _A_SUBDIR)
		cout << c_file.name << "   " << "<DIR>" << endl;
	else
		cout << c_file.name << "   " << c_file.size << endl;

	// цикл для получения информации об остальных найденных файлах
	while (_findnext(hFile, &c_file) == 0)
	{
		if (c_file.attrib & _A_SUBDIR)
			cout << c_file.name << "   " << "<DIR>" << endl;
		else
			cout << c_file.name << "   " << c_file.size << endl;
		size += c_file.size;
	}
	printf("\nTotal size = %d\n", size);
	// освободить память от списка найденных файлов
	_findclose(hFile);
}


// _A_NORMAL 0x00 // Normal file - No read/write restrictions		00000000
// _A_RDONLY 0x01 // Read only file									00000001
// _A_HIDDEN 0x02 // Hidden file									00000010
// _A_SYSTEM 0x04 // System file									00000100
// _A_SUBDIR 0x10 // Subdirectory									00001000
// _A_ARCH   0x20 // Archive file									00010000
//																	00010001
//																	&
//																	00010000


//#include <stdio.h>
//#include <stdlib.h>
//#include <io.h>
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//    setlocale(LC_ALL, "RUSSIAN");
//    //Размер директории
//    long int sizedir = 0;
//    //Вспомогательные структуры и дескрипторы
//    struct _finddata_t file;
//    intptr_t hFile; //intptr_t является знаковым целочисленным memsize-типом и способен безопасно хранить в себе указатель в независимости от разрядности платформы.
//
//    //Открываем текущую директорию
//    if ((hFile = _findfirst("*.*", &file)) == -1L)
//    {
//        cerr << "Не удалось открыть директорию" << endl;
//    }
//    else
//    {
//        //В цикле обходим файлы директории
//        do
//        {
//            cout << file.name << " = " << file.size << " bytes " << endl;
//            sizedir += file.size;
//        } while (_findnext(hFile, &file) == 0);
//        //Закрываем директорию
//        _findclose(hFile);
//        cout << "Общий размер директории = " << sizedir << " bytes " << endl;
//    }
//    //Остановка перед закрытием окна
//    system("PAUSE");
//    return 0;
//}