//#include "pch.h"
//
//int main()
//{
//    char dest_filename[80];
//        cout << "Enter destination file name: ";
//       cin >> dest_filename;
//    FILE* image_part1 = fopen("Image_1.jpg.part1", "rb");
//    FILE* image_part2 = fopen("Image_2.jpg.part2", "rb");
//    FILE* image_new   =   fopen(dest_filename, "wb");
//
//    if (image_part1 != NULL && image_part2 != NULL)
//{
//        long file_size = 0;
//        long file_size2 = 0;
//                    
//        // ������������� � ����� ��������� �����
//        fseek(image_part1, 0, SEEK_END);
//        fseek(image_part2, 0, SEEK_END);
//        // �������� ����� �����, ��� ��������� �������� ��������� (������ �����)
//        file_size = ftell(image_part1);
//        file_size2 = ftell(image_part2);
//            
//        char* buffer = new char[file_size];
//        char* buffer2 = new char[file_size2];
//        if (buffer != NULL)
//        {
//            // ������������� � ������ ��������� �����
//            fseek(image_part1, 0, SEEK_SET);
//            
//            // ������ ����� ����� � ������
//            fread(buffer, sizeof(char), file_size, image_part1);
//            
//            if (image_new != NULL)
//            {
//                // ������ � ���� �� ������
//                fwrite(buffer, sizeof(char), file_size, image_new);
//            }
//            
//            //delete[] buffer;
//                       
//        }
//        else
//            cout << "The source file is too big!!!" << endl;
//            
//            
//        if (buffer2 != NULL)
//        {
//            // ������������� � ������ ��������� �����
//            fseek(image_part2, 0, SEEK_SET);
//            // ������ ����� ����� � ������
//            fread(buffer2, sizeof(char), file_size2, image_part2);
//            
//            if (image_new != NULL)
//            {
//                // ������ � ���� �� ������
//                fwrite(buffer2, sizeof(char), file_size2, image_new);
//                fclose(image_new);
//            }
//            
//            delete[] buffer2;
//        }
//        else
//            cout << "The source file is too big!!!" << endl;
//      
//    }
//    else
//        cout << "Can`t open source file!" << endl;
//            
//}