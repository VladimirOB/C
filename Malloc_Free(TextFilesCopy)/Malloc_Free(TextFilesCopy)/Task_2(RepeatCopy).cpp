//#include "pch.h"
////
/////*2. Пользователь вводит имя текстового файла, программа находит в файле все слова и записывает их в другой файл
////без повторений ( слово - набор символов, разделённых при помощи: пробел, /n, запятая, точка, двоеточие, ; )
////Использовать: malloc, free, fwrite, fread, арифметика указателей. Попытаться написать наиболее быстрый код.
////*/
//
//struct words
//{
//	char w[40];
//};
//
//int main(void)
//{
//	words* word = new words[100];
//	puts("Enter source file name: ");
//	char file_name[40];
//	cin >> file_name;
//	FILE* r = fopen(file_name, "rb");
//	FILE* w = fopen("dest_file_repeat.txt", "wb");
//	if (r != NULL && w != NULL)
//	{
//		long file_size = 0;
//		fseek(r, 0, SEEK_END);
//
//		file_size = ftell(r);
//		int size = file_size;
//		char* buffer_source = (char*)malloc(file_size);
//		char* buffer_destin = (char*)malloc(file_size);
//		if (buffer_source != NULL)
//		{
//			fseek(r, 0, SEEK_SET);
//			fread(buffer_source, (sizeof(char)), file_size, r);
//
//			 // во 2-й буффер пишем слово до разделителя. пока не встретится разделитель. потом этот буффер закидываем в структуру.
//			
//			int i = 0;
//			int word_cnt = 0;
//
//			while (true)
//			{
//				int destin_cnt = 0;
//				
//				while (buffer_source[i] != ' ' && i < file_size)
//				{
//
//					buffer_destin[destin_cnt] = buffer_source[i];
//					i++;
//					destin_cnt++;
//				}
//
//				strcpy(word[word_cnt].w, buffer_destin);
//				cout<< word[word_cnt].w << endl;
//				word_cnt++;
//				i++;
//				//memset(buffer_destin, 0, sizeof(char)); // очистка. Верней замена на ноль.
//				if (i >= file_size)
//					break;
//			}
//			for (int k = 0; k < word_cnt; k++)
//			{
//				for (int j = 0; j < word_cnt; j++)
//				{
//					if(strcmp(word[k].w,word[j].w)!=0)
//					fwrite(word[k].w, (sizeof(char)), file_size, w);
//				}
//				
//			}
//			
//			free(buffer_source);
//			free(buffer_destin);
//		}
//		fclose(w);
//		fclose(r);
//	}
//}
//

//////int main() 
//////{
//////    setlocale(0, "");
//////    int a, i, l, j, m, test;
//////    cout << "Введите кол-во слов: ";
//////    cin >> i;
//////    cout << "\n Введите слова: \n";
//////    char** s = new char* [i];
//////    char* ss = new char[80];
//////    for (j = 0; j < i; j++)
//////    {
//////        s[j] = new char[80];
//////        cin >> s[j];
//////    }
//////    cout << endl << "Слова без повторений: \n";
//////    for (j = 0; j < i; j++)
//////    {
//////        l = 1;
//////        test = 0;
//////        a = strlen(s[j]);
//////        for (m = 0; m < a; m++)
//////        {
//////            ss[m] = s[j][m];
//////        }
//////        for (m = 0; m < a; m++) {
//////            for (int n = l; n < a; n++) {
//////                if (ss[m] == ss[n])
//////                    test = test + 1;
//////            }
//////            l = l + 1;
//////        }
//////        if (test == 0)
//////            cout << s[j] << endl;
//////    }
//////
//////    system("pause");
//////    return 0;
//////}
//
//
//////int main(void)
//////{
//////	FILE* r = fopen("rep.txt", "rb");
//////	FILE* w = fopen("dest_file_repeat.txt", "wb");
//////	bool is_word_found = false;
//////	int symbolcnt = 0, wordcnt = 0, flagword = 0, flagsymbol = 0;
//////	int	cnt1 = 0, cnt2 = 0, temp = 0;
//////	if (r != NULL && w != NULL)
//////	{
//////		int file_size = 0;
//////		fseek(r, 0, SEEK_END);
//////		file_size = ftell(r);
//////		fseek(r, 0, SEEK_SET);
//////
//////		char* buffer_source = (char*)malloc(file_size);
//////
//////		char** buffer_repeat = (char**)malloc(file_size * sizeof(char*));
//////		
//////		for (int i = 0; i < file_size; i++)
//////		{
//////			buffer_repeat[i] = (char*)malloc(file_size * sizeof(char));
//////		}
//////		
//////		// для знаков препинания.
//////		int x = 2;
//////		int y = 2;
//////		char** p_marks = new char* [x];
//////		for (size_t i = 0; i < x; i++)
//////		{
//////			p_marks[i] = new char[y];
//////		}
//////
//////		fread(buffer_source, sizeof(char), file_size, r);
//////
//////		for (int i = 0; i < file_size; i++)
//////		{
//////			temp = i;
//////
//////			switch (is_word_found)
//////			{
//////				case true:
//////
//////					if (buffer_source[i] == ' ' || buffer_source[i] == '.' || buffer_source[i] == ',' ||
//////						buffer_source[i] == '\n' || buffer_source[i] == ':' || buffer_source[i] == ';')
//////					{
//////						flagsymbol = 1;
//////						if (flagword == 1)
//////						{
//////							wordcnt++;
//////							flagword = 0;
//////						}
//////						int cnt = symbolcnt;
//////						if (symbolcnt > 0)
//////						{
//////							for (symbolcnt; symbolcnt > 0; symbolcnt--)
//////							{
//////								buffer_repeat[cnt1][cnt2] = buffer_source[temp - symbolcnt];
//////								cnt2++;
//////							}
//////							buffer_repeat[cnt1][cnt2] = 0;
//////						}
//////						if (cnt1 == 0)
//////						{
//////							fwrite(buffer_repeat[cnt1], sizeof(char), cnt, w);
//////							cnt1++;
//////							cnt2 = 0;
//////							p_marks[0][0] = buffer_source[i];
//////							fwrite(p_marks[0], sizeof(char), 1, w);
//////							continue;
//////						}
//////						if (cnt > 0)
//////						{
//////							int flag = 0;
//////							for (int i = 0; i < wordcnt; i++)
//////							{
//////								if (i != cnt1)
//////								{
//////									if (strcmp(buffer_repeat[i], buffer_repeat[cnt1]) == 0)
//////										flag = 1;
//////								}
//////							}
//////							if (flag == 0)
//////								fwrite(buffer_repeat[cnt1], sizeof(char), cnt, w);
//////							cnt1++;
//////							cnt2 = 0;
//////						}
//////						p_marks[0][0] = buffer_source[i];
//////						fwrite(p_marks[0], sizeof(char), 1, w);
//////					}
//////					else
//////					{
//////						i--;
//////						is_word_found = false;
//////					}
//////					break;
//////
//////				case false:
//////					if (buffer_source[i] != ' ' || buffer_source[i] != '.' || buffer_source[i] != ',' ||
//////					   buffer_source[i] != '\n' || buffer_source[i] != ':' || buffer_source[i] != ';')
//////					{
//////						if (flagsymbol == 1)
//////						{
//////
//////							symbolcnt = 0;
//////							flagsymbol = 0;
//////						}
//////						is_word_found = true;
//////						flagword = 1;
//////						symbolcnt++;
//////					}
//////					break;
//////			}
//////		}
//////		cout << "word= " << wordcnt << endl;
//////		cout << "symbol= " << symbolcnt << endl;
//////
//////		fclose(r);
//////		fclose(w);
//////		free(buffer_source);
//////		for (int i = 0; i < file_size; i++)//удалить массив
//////		{
//////			free(buffer_repeat[i]);
//////		}
//////		free(buffer_repeat);
//////
//////		for (size_t i = 0; i < x; i++)//удалить массив
//////		{
//////			delete[] p_marks[i];
//////		}
//////
//////		delete[] p_marks;
//////	}
//////	else
//////	cout << "Error!! File is not open!!" << endl;
//////}