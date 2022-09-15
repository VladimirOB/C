////#include "pch.h" 
/////*3. Пользователь вводит имя файла, программа выводит во второй файл список слов, отсортированных в алфавитном
////порядке*/
////
////int main(void)
////{
////	char file_name[55];
////	puts("Enter file name: ");
////	cin >> file_name;
////	FILE* file_r = fopen(file_name, "rb");
////	
////	if (file_r != NULL)
////	{
////		int file_size;
////		fseek(file_r, 0, SEEK_END);
////		file_size = ftell(file_r);
////		char* buffer = (char*)malloc(file_size+1); // Почему +1?
////		if (buffer != NULL)
////		{
////			fseek(file_r, 0, SEEK_SET);
////			fread(buffer, sizeof(char), file_size, file_r);
////			buffer[file_size] = 0;
////			int new_file_size = file_size;
////			int words_count = 0;
////			int temp_size = 0;
////			int max_word_size = 0;
////			int i = 0;
////			// Выяснение кол-ва слов и максимальной длины слова.
////			for (; i < (int)file_size; i++)
////			{
////				if ((buffer[i] == ' ' || buffer[i] == ':' || buffer[i] == ',' || buffer[i] == '.' || buffer[i] == ';' || buffer[i] == '\n') && (buffer[i + 1] != '\n' && buffer[i + 1] != ' ' && buffer[i + 1] != ':' && buffer[i + 1] != ',' && buffer[i + 1] != '.' && buffer[i + 1] != ';')) {
////					words_count++;
////					if (max_word_size < temp_size)
////						max_word_size = temp_size;
////					temp_size = 0;
////				}
////				else {
////					temp_size++;
////				}
////			}
////			int i1 = 0;
////			// выделение памяти двумерного массива слов
////			char** words_array = new char* [words_count];
////			// выделение памяти для каждого слова
////			for (int count = 0; count < words_count; count++)
////			{
////				words_array[count] = new char[max_word_size];
////			}
////			int i2 = 0;
////			// цикл по словам.
////			for ( i = 0; i < words_count; i++)
////			{
////				// фильтруем символы в начале слова в buffer
////				while (buffer[i2] == ' ' || buffer[i2] == ':' || buffer[i2] == ',' || buffer[i2] == '.' || buffer[i2] == ';' || buffer[i2] == '\n' || buffer[i2] == '\r') {
////					i2++;
////				}
////				// копирование нужных символов в текущее i слово
////				for (i1 = 0; i1 < max_word_size; i1++) {
////					if (buffer[i2] == ' ' || buffer[i2] == ':' || buffer[i2] == ',' || buffer[i2] == '.' || buffer[i2] == ';' || buffer[i2] == '\n' || buffer[i2] == '\r' || buffer[i2] == 0) {
////						words_array[i][i1] = ' ';
////						words_array[i][i1 + 1] = 0;
////						i2++;
////						break;
////					}
////					words_array[i][i1] = buffer[i2];
////					i2++;
////				}
////			}
////			for (int k = 0; k < file_size; k++)
////			{
////				for (int l = 0; l < max_word_size; l++)
////				{
////					cout << words_array[k][l];
////				}
////			}
////		}
////	}
////}
//
//#define  _CRT_SECURE_NO_WARNINGS 
//#include <iostream>
//
//using namespace std;
///*3. Пользователь вводит имя файла, программа выводит во второй файл список слов, отсортированных в алфавитном
//порядке*/
//void SelectionSort(char** arr, long file_size, int p)
//{
//	int num[1000];		//забыл как корректно перейти к динамическому массиву в этом случае(((
//	//запись кодов символов в массив 
//	for (int i = 0; i != p; i++)
//	{
//		num[i] = arr[i][0];
//	}
//	long i, j, k;
//	int x;
//	char temp[45] = " ";		//буферное слово для обмена ???????????????????
//
//	// i - номер текущего шага
//	for (i = 0; i < file_size; i++)
//	{
//
//		k = i;
//		x = num[i];
//
//		// цикл выбора наименьшего элемента
//		for (j = i + 1; j < file_size; j++)
//		{
//			if (num[j] < x)
//			{
//				// k - индекс наименьшего элемента
//				k = j;
//				x = num[j];
//				//temp = arr[j];
//			}
//		}
//
//		// поменять местами наименьший элемент с a[i]
//		num[k] = num[i];
//		num[i] = x;
//		arr[k] = arr[i];
//		arr[i] = temp;
//
//		// вывести промежуточный результат
//	}
//	//перевод кодов в символы 
//	//for (int i = 0; i != p; i++)
//	//{
//	//	arr[i][0] = num[i];
//	//}
//}
//void BubbleSort(char** array, int size, int p)
//{
//	int num[1000];	//забыл как корректно перейти к динамическому массиву в этом случае(((
//	//запись кодов символов в массив 
//	for (int i = 0; i != p; i++)
//	{
//		num[i] = array[i][0];
//	}
//	// перебор всех элементов массива
//	for (int i = 1; i < size; i++)
//	{
//		// проход массива от конца в начало со "всплыванием" одного элемента
//		for (int j = size - 1; j >= i; j--)
//		{
//			if (num[j - 1] > num[j])
//			{
//				// перестановка элементов
//				int temp = num[j - 1];
//				num[j - 1] = num[j];
//				num[j] = temp;
//			}
//		}
//
//		cout << i << ". ";
//		// вывести промежуточный результат
//	}
//}
//
//void main()
//{
//	FILE* s = NULL;
//	char filename_s[50];
//	cout << "Enter Filename: "; //z:\b.txt
//	cin >> filename_s;
//	fopen_s(&s, filename_s, "r");
//	FILE* d = NULL;
//	char filename_d[50];
//	cout << "Enter Filename: "; //z:\d.txt
//	cin >> filename_d;
//	fopen_s(&d, filename_d, "w");
//
//	if (s != NULL)
//	{
//
//		long file_size = 0;
//		fseek(s, 0, SEEK_END);
//		file_size = ftell(s);// определение размера файла
//
//		char* buffer = (char*)malloc(file_size * sizeof(char));//выделение памяти под буфер
//		char* buffer_rez = (char*)malloc(file_size * sizeof(char));//выделение памяти под результирующий буфер
//
//		char** words = (char**)malloc((file_size / 2) * sizeof(char*));//выделение памяти под слов
//
//		for (int i = 0; i < (file_size / 2); i++)
//			words[i] = (char*)malloc((file_size / 2) * sizeof(char));
//
//		if (buffer != NULL && buffer_rez != NULL)
//		{
//			fseek(s, 0, SEEK_SET);//переход в начало файла
//			fread(buffer, sizeof(char), file_size, s);// чтение файла в буфер
//						// проверка на слово
//			bool first_space = true, is_word = false;
//
//			int k = 0;
//
//
//			for (int i = 0, j = 0; i < file_size; i++, j++)
//			{
//				if (is_word == true)
//				{
//					words[k][j - 1] = '\0';
//					k++;
//					j = 0;
//				}
//
//				if (buffer[i] == ' ')
//				{
//					if (buffer[i + 1] != ' ' && first_space == false)
//						is_word = true;
//					else
//						j--;
//				}
//				else if ((buffer[i] >= 'A' && buffer[i] <= 'Z') || (buffer[i] >= 'a' && buffer[i] <= 'z'))
//				{
//					words[k][j] = buffer[i];// запись символов из общего буфера в масиив слов
//					first_space = false;
//					is_word = false;
//					if (i + 1 == file_size)
//					{
//						words[k][j + 1] = '\0';
//					}
//				}
//			}
//
//
//			// сортировка
//		   //SelectionSort(words, file_size, k);
//			BubbleSort(words, file_size, k);
//
//			// запись массива слов в результирующий буфер
//			for (int i = 0; i <= k; i++)
//			{
//				if (i == 0)
//				{
//					strcpy(buffer_rez, words[i]);
//				}
//				strcat(buffer_rez, words[i]);
//				if (strcmp(words[i], ""))
//					strcat(buffer_rez, "\n");
//			}
//
//			// Âûÿñíåíèå ðàçìåðà ôàéëà äëÿ çàïèñè
//			file_size = strlen(buffer_rez);
//
//			// Çàïèñü ôàéëà
//			if (d != NULL)
//			{
//				fwrite(buffer_rez, sizeof(char), file_size, d);
//				fclose(d);
//			}
//			else
//				cout << "Could not open destination file!!!" << endl;
//		}
//		else
//			cout << "The source file is too big!!!" << endl;
//
//		// Óäàëåíèå ìàññèâîâ
//		for (int i = 0; i < (file_size / 2); i++)
//			free(words[i]);
//		free(words);
//		free(buffer);
//		free(buffer_rez);
//		fclose(s);
//	}
//	else
//		cout << "Can`t open source file!" << endl;
//
//
//
//
//
//
//
//
//
//}