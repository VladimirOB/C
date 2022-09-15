#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include  <cstdio>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
int del(char* inStr, FILE* in)
{  
    int cnt = 0;
    int cnt_clean = 0;
    char* newStr = (char*)malloc((strlen(inStr) + 1) * sizeof(char));  // Итоговая строка
    char* bufStr = (char*)malloc((strlen(inStr) + 1) * sizeof(char));  // Хранение текущего слова
    *newStr = '\0';  // Обнуляем результирующую строку newStr
    int i = 0;      // Индекс текщей позиции в буфере
    while (true)
    {
        if (*inStr == ' ' || *inStr == ',' || *inStr == '\0'|| *inStr=='!'|| *inStr == '.'
            || *inStr == '\n')
        {                 
            *(bufStr+i) = 0;  // Замыкаем буфер обмена
            if (strstr(newStr, bufStr) == NULL)  // Ищем в результирующей строке слово расположенное в буфере
            {                       
                strcat(newStr, bufStr);  // Добавляем в конец результирующей строки слово из буфера
            }           
            while (*inStr == ' ' || *inStr == ','|| *inStr == '!' || *inStr == '\n')  // Пропуск разделителей
            {                                 
                int len = strlen(newStr);
                *(newStr+len) = *inStr++;  // Просто добавляем эти символы в результирующую строку
                *(newStr+(len+1)) = 0;  // Замыкаем                
            }            
            i = 0;  // Заново забиваем буфер   
        }        
        if (*inStr == 0)  // Выход
        {
            break;
        }              
        *(bufStr+i++) = *inStr++;  // Копируем текущей символ с входной строки в буфер
    }   
    for (char *p = newStr; *p; p++)
    {
        cnt++;  //Подсчет размера новой строки
    }    
    for (char* i = bufStr; *i; i++)
    {
        cnt_clean++;  //Эта переменная нужна чтобы очистить новую строку от мусора (забавная история)
    }
    fwrite(newStr, sizeof(char), cnt-cnt_clean, in);
    free(bufStr);
    free(newStr);  //Очищает память и выходим из функции
    return 0;
}
void main()
{    	
	int filesize;
	FILE* out = NULL;
	out = fopen("out.txt", "rb");
    if (out != NULL)
    {
        fseek(out, 0, SEEK_END);
        filesize = ftell(out);
        fseek(out, 0, SEEK_SET);        
        char* buffer = (char*)malloc(filesize* sizeof(char));       
        fread(buffer, sizeof(char),filesize,  out);
        FILE* in = NULL;
        in = fopen("in.txt", "wb");
        del(buffer, in);
        free(buffer);
        fclose(out);   
        fclose(in); 
    }
}