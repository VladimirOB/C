//#include "pch.h"
//
///*1. Пользователь вводит имя текстового файла, программа находит в файле все слова и записывает их в другой файл*/
//
//int main(void)
//{	
//	puts("Enter source file name: ");
//	char file_name[40];
//	cin >> file_name;
//	int flag = 0;
//	FILE* r = fopen(file_name, "rb");
//	FILE* w = fopen("dest_file.txt", "wb");
//	if (r != NULL && w != NULL)
//	{
//		long file_size = 0;
//
//		fseek(r, 0, SEEK_END);
//
//		file_size = ftell(r);
//		
//		char* buffer_source = (char*)malloc(file_size); // создали буффер как раньше, только через malloc
//		char* buffer_destin = (char*)malloc(file_size);
//
//		char* pointer = buffer_source;
//
//		if (buffer_source != NULL && buffer_destin != NULL)
//		{
//			fseek(r, 0, SEEK_SET);
//			fread(buffer_source, (sizeof(char)), file_size, r);
//			for (long i = 0; i < file_size; i++)
//			{
//				if (buffer_source[i] == ' ' || buffer_source[i] == '\n' || buffer_source[i] == ','
//					|| buffer_source[i] == '.' || buffer_source[i] == ':' || buffer_source[i] == ';')
//				{
//
//					buffer_destin[i] = ' ';
//				}
//				else
//
//					buffer_destin[i] = buffer_source[i];
//
//				if (buffer_destin[i - 1] == ' ' && buffer_destin[i] == ' ')
//				{
//					buffer_destin[i - 1] = '\r';
//				}
//			}
//			fwrite(buffer_destin, (sizeof(char)), file_size, w);
//
//			free(buffer_source);
//			free(buffer_destin);
//		}
//		fclose(w);
//		fclose(r);
//	}
//}