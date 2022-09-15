#include "pch.h" 

/*1. ������������ ������ ����� �����, ��������� ������������ ����� ������ ������ � ���*/

int main()
{    // ����������, �������� ���������� �� ����� �����
	_finddata_t c_file;

	// ����� ������ ��������� ������
	long hFile;
	int size = 0;
	// ����� ����� �� ����� � ������� ����� ������ ��������� ������ � ���������� � ������ �����
	hFile = _findfirst("v:\\study\\f\\test\\*.*", &c_file); 
	//
	//	10101
	//	&
	//	00010
	//	00000
	//
	// ���� ���� �������� ������
	if (c_file.attrib & _A_SUBDIR)
		cout << c_file.name << "   " << "<DIR>" << endl;
	else
		cout << c_file.name << "   " << c_file.size << endl;

	// ���� ��� ��������� ���������� �� ��������� ��������� ������
	while (_findnext(hFile, &c_file) == 0)
	{
		if (c_file.attrib & _A_SUBDIR)
			cout << c_file.name << "   " << "<DIR>" << endl;
		else
			cout << c_file.name << "   " << c_file.size << endl;
		size += c_file.size;
	}
	printf("\nTotal size = %d\n", size);
	// ���������� ������ �� ������ ��������� ������
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
//    //������ ����������
//    long int sizedir = 0;
//    //��������������� ��������� � �����������
//    struct _finddata_t file;
//    intptr_t hFile; //intptr_t �������� �������� ������������� memsize-����� � �������� ��������� ������� � ���� ��������� � ������������� �� ����������� ���������.
//
//    //��������� ������� ����������
//    if ((hFile = _findfirst("*.*", &file)) == -1L)
//    {
//        cerr << "�� ������� ������� ����������" << endl;
//    }
//    else
//    {
//        //� ����� ������� ����� ����������
//        do
//        {
//            cout << file.name << " = " << file.size << " bytes " << endl;
//            sizedir += file.size;
//        } while (_findnext(hFile, &file) == 0);
//        //��������� ����������
//        _findclose(hFile);
//        cout << "����� ������ ���������� = " << sizedir << " bytes " << endl;
//    }
//    //��������� ����� ��������� ����
//    system("PAUSE");
//    return 0;
//}