//#include "pch.h"
//
//int main()
//{
//    /*”лучшить задачи с разбиением и сли€нием файлов так, чтобы пользователь мог указывать количество частей.
//    ѕри этом размер последней части может быть меньше, чем у других равных частей*/
//    // берем размер файла и делим на кол-во частей.
//    // а размер последней части  размер файла делим на кол-во частей - 1.
//
//    char result_filename[80];
//    cout << "Enter result file name: ";
//    cin >> result_filename;
//    int part = 0;
//    cout << "Enter numbers of parts: ";
//    cin >> part;
//    FILE* image = fopen(result_filename, "wb");
//
//    for (size_t i = 0; i < part; i++)
//    {
//		char dest_filename1[80];
//		cout << "Enter the name of the part of the file: ";
//		cin >> dest_filename1;
//		FILE* img1 = fopen(dest_filename1, "rb");
//
//		if (img1 != NULL)
//		{
//			long file_size = 0;
//			fseek(img1, 0, SEEK_END);
//			file_size = ftell(img1);
//			char* buffer = new char[file_size];
//			if (buffer != NULL)
//			{
//				fseek(img1, 0, SEEK_SET);
//				fread(buffer, sizeof(char), file_size, img1);
//				if (image != NULL)
//				{
//					fwrite(buffer, sizeof(char), file_size, image);
//					fclose(img1);
//					delete[] buffer;
//				}
//				else
//					cout << "Could not open result file!" << endl;
//			}
//			else
//				cout << "The source file is too big!!!" << endl;
//
//		}
//		else
//			cout << "Could not open destination file!!!" << endl;
//    }
//	fclose(image);
//}