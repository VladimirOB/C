//#include "pch.h"
//
//int main()
//{
//    /*2. Программа спрашивает у пользователя имя файла и делит его на две одинаковые части, котрые сохраняет в файлы.
//        Размер второго файла может быть меньше, чем у первого на 1 байт.
//        Пример:
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
//        // переместиться в конец открытого файла
//        fseek(image, 0, SEEK_END);
//        // получить номер байта, где находится файловый указатель (размер файла)
//        file_size = ftell(image);
//
//        char* buffer = new char[file_size];
//       
//        if (buffer != NULL)
//        {
//            // переместиться в начало открытого файла
//            fseek(image, 0, SEEK_SET);
//
//            // чтение всего файла в память
//            fread(buffer, sizeof(char), file_size, image);
//
//            FILE* image_part1 = fopen("Image_1.jpg.part1", "wb");
//          
//            if (image_part1 != NULL)
//            {
//                // запись в файл из буфера
//                fwrite(buffer, sizeof(char), file_size/2, image_part1);
//					
//                fclose(image_part1);
//            }
//            // переместиться в начало открытого файла
//
//            fseek(image, file_size / 2, SEEK_SET);
//
//            // чтение всего файла в память
//            fread(buffer, sizeof(char), file_size, image);
//            FILE* image_part2 = fopen("Image_2.jpg.part2", "wb");
//
//            if (image_part2 != NULL)
//            {
//                // запись в файл из буфера
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