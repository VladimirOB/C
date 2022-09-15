#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;
void main()
{
	char* File_name = (char*)malloc(50 * sizeof(char));
	cout << "Input filename: ";
	cin.getline(File_name, 49);
	FILE* file = NULL;
	fopen_s(&file, File_name, "rb");
	if (file != NULL) {
		int file_size = (int)malloc(sizeof(int));

		// переместиться в конец открытого файла
		fseek(file, 0, SEEK_END);

		// получить номер байта, где находится файловый указатель (размер файла)
		file_size = ftell(file);
		char* buffer = (char*)malloc(file_size + 1);
		if (buffer != NULL) {

			fseek(file, 0, SEEK_SET);

			fread(buffer, sizeof(char), file_size, file);
			buffer[file_size] = 0;
			int new_file_size = file_size;
			int words_count = 0;
			int temp_size = 0;
			int max_word_size = 0;
			int i = 0;
			// Выяснение кол-ва слов и максимальной длины слова.
			for (; i < (int)file_size; i++) {
				if ((buffer[i] == ' ' || buffer[i] == ':' || buffer[i] == ',' || buffer[i] == '.' || buffer[i] == ';' || buffer[i] == '\n') && (buffer[i + 1] != '\n' && buffer[i + 1] != ' ' && buffer[i + 1] != ':' && buffer[i + 1] != ',' && buffer[i + 1] != '.' && buffer[i + 1] != ';')) {
					words_count++;
					if (max_word_size < temp_size)
						max_word_size = temp_size;
					temp_size = 0;
				}
				else {
					temp_size++;
				}

			}
			int i1 = 0;
			// выделение памяти двумерного массива char (массив слов)
			char** words_massiv = new char* [words_count];
			//выделение памяти для каждого слова
			for (int count = 0; count < words_count; count++)
				words_massiv[count] = new char[max_word_size];

			int i3 = 0;
			// цикл по словам 
			for (i = 0; i < words_count; i++) 
			{
				// филтрует символы в начале слова в buffer
				while (buffer[i3] == ' ' || buffer[i3] == ':' || buffer[i3] == ',' || buffer[i3] == '.' || buffer[i3] == ';' || buffer[i3] == '\n' || buffer[i3] == '\r') {
					i3++;
				}
				// копирование нужных символов в текущее i слово
				for (i1 = 0; i1 < max_word_size; i1++) {
					if (buffer[i3] == ' ' || buffer[i3] == ':' || buffer[i3] == ',' || buffer[i3] == '.' || buffer[i3] == ';' || buffer[i3] == '\n' || buffer[i3] == '\r' || buffer[i3] == 0) {
						words_massiv[i][i1] = '\n';
						words_massiv[i][i1 + 1] = 0;
						i3++;
						break;
					}
					words_massiv[i][i1] = buffer[i3];


					i3++;
				}
			}
			char File1_name[50];
			cout << "Input filename: ";
			cin.getline(File1_name, 49);
			FILE* dest_file = NULL;
			fopen_s(&dest_file, File1_name, "wb");
			if (file != NULL) {
				int cmd = 0;
				for (i = 0; i < words_count; i++) {
					// сравниваем текущее слово с индексом i со словом с индексом i1
					for (int i1 = 0; i1 < i; i1++) {
						if (strcmp(words_massiv[i], words_massiv[i1]) == 0) {
							cmd = 1;
							break;
						}
					}
					if (cmd == 0) {
						int len = strlen(words_massiv[i]);
						fwrite(words_massiv[i], sizeof(char), len, dest_file);
					}
					cmd = 0;
				}
				fclose(dest_file);
				free(words_massiv);
			}
		}
		free(buffer);

		fclose(file);
	}
}