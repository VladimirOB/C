//#include "pch.h"
//
//int main()
//{
//    /*2. ��������� ���������� � ������������ ��� ����� � ����� ��� �� ��� ���������� �����, ������ ��������� � �����.
//        ������ ������� ����� ����� ���� ������, ��� � ������� �� 1 ����.
//        ������:
//    img.jpg->img.jpg.part1 + img.jpg.part2*/
//
//    char source_filename[80];
//    cout << "Enter source file name: ";
//    cin >> source_filename;
//    
//    FILE* image = fopen(source_filename, "rb");
//
//    if (image != NULL)
//    {
//        long file_size = 0;
//        
//        // ������������� � ����� ��������� �����
//        fseek(image, 0, SEEK_END);
//        // �������� ����� �����, ��� ��������� �������� ��������� (������ �����)
//        file_size = ftell(image);
//
//        char* buffer = new char[file_size];
//       
//        if (buffer != NULL)
//        {
//            // ������������� � ������ ��������� �����
//            fseek(image, 0, SEEK_SET);
//
//            // ������ ����� ����� � ������
//            fread(buffer, sizeof(char), file_size, image);
//
//            FILE* image_part1 = fopen("Image_1.jpg.part1", "wb");
//          
//            if (image_part1 != NULL)
//            {
//                // ������ � ���� �� ������
//                fwrite(buffer, sizeof(char), file_size/2, image_part1);
//					
//                fclose(image_part1);
//            }
//            // ������������� � ������ ��������� �����
//
//            fseek(image, file_size / 2, SEEK_SET);
//
//            // ������ ����� ����� � ������
//            fread(buffer, sizeof(char), file_size, image);
//            FILE* image_part2 = fopen("Image_2.jpg.part2", "wb");
//
//            if (image_part2 != NULL)
//            {
//                // ������ � ���� �� ������
//                if (file_size % 2 == 1)
//                    fwrite(buffer, sizeof(char), file_size / 2 + 1, image_part2);
//					else
//						fwrite(buffer, sizeof(char), file_size / 2 , image_part2);
//                fclose(image_part2);
//            }
//
//            delete[] buffer;
//           
//           
//        }
//        else
//            cout << "The source file is too big!!!" << endl;
//
//        fclose(image);
//    }
//    else
//        cout << "Can`t open source file!" << endl;
//
//}