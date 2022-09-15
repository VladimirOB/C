#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;




void main()
{
    //Пользователь вводит имя текстового файла, программа находит в файле все слова и записывает из в другой файл
   // без повторений(слово - набор символов, разделённых при помощи : пробел, / n, запятая, точка, двоеточие, ; ) самый короткий вариант

    FILE* file_read = NULL;
    FILE* file_write = NULL;
    int symbolcnt = 0;  //счетчик символов
    int wordcnt = 0;  //счетчик слов
    int flagword = 0;
    int rows = 0;
    int colums = 0;
    int check = 0;
    fopen_s(&file_read, "c:\\temp\\tekst.txt", "rb");
    fopen_s(&file_write, "c:\\temp\\test.txt", "wb");

    if (file_read != NULL && file_write != NULL)
    {

        int file_size = 0;

        // переместиться в конец открытого файла
        fseek(file_read, 0, SEEK_END);

        // получить номер байта, где находится файловый указатель (размер файла)
        file_size = ftell(file_read);
        // переместиться в начало открытого файла
        fseek(file_read, 0, SEEK_SET);

        // основной буффер
        char* buffer = (char*)malloc(file_size);


        //двумерный буффер для поиска повторяющихся слов

        char** bufferword = NULL;
        bufferword = (char**)malloc(file_size * sizeof(char*));

        for (int i = 0; i < file_size; ++i)
            bufferword[i] = (char*)malloc(file_size * sizeof(char));

        //для знаков препинания
        int x = 2;
        int y = 2;
        char** str = new char* [x];
        for (size_t i = 0; i < x; i++)
        {
            str[i] = new char[y];
        }

        fread(buffer, sizeof(char), file_size, file_read);

        for (int i = 0; i < file_size; i++)
        {
            check = i;

            if (buffer[i] == ' ' || buffer[i] == '.' || buffer[i] == ',' || buffer[i] == '\n' || buffer[i] == ':' || buffer[i] == ';' || buffer[i] == '\r')
            {
                if (flagword == 1)
                {

                    wordcnt++;
                    flagword = 0;

                }


                int symbolcnt1 = symbolcnt;
                if (symbolcnt > 0)// чтоб не заходил если два знака препинания подряд
                {

                    for (symbolcnt; symbolcnt > 0; symbolcnt--)
                    {
                        bufferword[rows][colums] = buffer[check - symbolcnt];
                        colums++;

                    }
                    bufferword[rows][colums] = 0;
                }
                if (rows == 0) //записать первое слово для сравнения
                {
                    fwrite(bufferword[rows], sizeof(char), symbolcnt1, file_write);

                    rows++;
                    colums = 0;
                    str[0][0] = buffer[i]; //для записи знаков препинания
                    fwrite(str[0], sizeof(char), 1, file_write);
                    continue;
                }


                if (symbolcnt1 > 0)  //чтоб не заходил если два знака препинания подряд
                {
                    int flag = 0;

                    for (size_t i = 0; i < wordcnt; i++)  //проверка на повторы
                    {
                        if (i != rows)
                        {
                            if (strcmp(bufferword[i], bufferword[rows]) == 0)

                                flag = 1;
                        }
                    }
                    if (flag == 0)
                        fwrite(bufferword[rows], sizeof(char), symbolcnt1, file_write);

                    rows++;
                    colums = 0;
                }
                str[0][0] = buffer[i];

                fwrite(str[0], sizeof(char), 1, file_write);

                symbolcnt = 0;

            }
            else
            {

                symbolcnt++;
                flagword = 1;

            }




        }

        cout << "word= " << wordcnt << endl;


        fclose(file_read);
        fclose(file_write);
        free(buffer);

        for (int i = 0; i < file_size; i++)//удалить массив
        {
            free(bufferword[i]);
        }
        free(bufferword);

        for (size_t i = 0; i < x; i++)//улалить массив
        {
            delete[] str[i];
        }

        delete[] str;
    }
    else
        cout << "Error!! File is not open!!" << endl;
}


