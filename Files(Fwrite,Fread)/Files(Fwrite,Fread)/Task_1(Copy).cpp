#include "pch.h"

///*1. ��������� ���������� � ������������ ����� 2 ������ � �������� �� �� ������� ����� �� ������ �� �����������
//�����. (fread/fwright)*/

int main()
{
    char source_filename[80];
    cout << "Enter source file name: ";
    cin >> source_filename;
    char dest_filename[80];
    cout << "Enter destination file name: ";
    cin >> dest_filename;
    FILE* r = fopen(source_filename, "rb");

    // ���� ���� ������� �������
    if (r != NULL)
    {
        long file_size = 0;

        // ������������� � ����� ��������� �����
        fseek(r, 0, SEEK_END);

        // �������� ����� �����, ��� ��������� �������� ��������� (������ �����)
        file_size = ftell(r);
        char* buffer = new char[file_size];
        if (buffer != NULL)
        {
            // ������������� � ������ ��������� �����
            fseek(r, 0, SEEK_SET);

            // ������ ����� ����� � ������
            fread(buffer, (sizeof(char)), file_size, r);
            for (long i = 0; i < file_size; i++)
            {
                if (isdigit(buffer[i]))
                    buffer[i] = '\r';
            }
            FILE* w = fopen(dest_filename, "wb");

            if (w != NULL)
            {
               
                (fwrite(buffer, sizeof(char), file_size, w));
                    cout << "Mission complete!" << endl;
                    fclose(w);
            }
            delete[] buffer;
        }
        else
            cout << "The source file is too big!!!" << endl;

        // �������� �����
        fclose(r);

    }
    else
        cout << "Can`t open source file!" << endl;

}

//int main()
//{
//    char source_filename[80];
//    cout << "Enter source file name: ";
//    cin >> source_filename;
//    char dest_filename[80];
//    cout << "Enter destination file name: ";
//    cin >> dest_filename;
//    FILE* r = fopen(source_filename, "rb");
//
//    // ���� ���� ������� �������
//    if (r != NULL)
//    {
//        long file_size = 0;
//
//        // ������������� � ����� ��������� �����
//        fseek(r, 0, SEEK_END);
//
//        // �������� ����� �����, ��� ��������� �������� ��������� (������ �����)
//        file_size = ftell(r);
//        char* buffer = new char[file_size];
//        char* buffer_new = new char[file_size];
//        if (buffer != NULL)
//        {
//            // ������������� � ������ ��������� �����
//            fseek(r, 0, SEEK_SET);
//
//            // ������ ����� ����� � ������
//            fread(buffer, (sizeof(char)), file_size, r);
//            for (long i = 0; i < file_size; i++)
//            {
//                if (isdigit(buffer[i]))
//                    buffer_new[i] = 0;
//                else
//                    buffer_new[i] = buffer[i];
//                
//            }
//            FILE* w = fopen(dest_filename, "wb");
//
//            if (w != NULL)
//            {
//
//                (fwrite(buffer_new, sizeof(char), file_size, w));
//                cout << "Mission complete!" << endl;
//                fclose(w);
//            }
//            delete[] buffer;
//        }
//        else
//            cout << "The source file is too big!!!" << endl;
//
//        // �������� �����
//        fclose(r);
//
//    }
//    else
//        cout << "Can`t open source file!" << endl;
//
//}

//int main()
//{
//	char str[40];
//	cin.getline(str, 39);
//	
//	for (int i = 0; i < str[i]!=0; i++)
//	{
//		if (isdigit(str[i]))
//			cout << "4uCJIO";
//	}
//}