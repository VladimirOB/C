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
    char* newStr = (char*)malloc((strlen(inStr) + 1) * sizeof(char));  // �������� ������
    char* bufStr = (char*)malloc((strlen(inStr) + 1) * sizeof(char));  // �������� �������� �����
    *newStr = '\0';  // �������� �������������� ������ newStr
    int i = 0;      // ������ ������ ������� � ������
    while (true)
    {
        if (*inStr == ' ' || *inStr == ',' || *inStr == '\0'|| *inStr=='!'|| *inStr == '.'
            || *inStr == '\n')
        {                 
            *(bufStr+i) = 0;  // �������� ����� ������
            if (strstr(newStr, bufStr) == NULL)  // ���� � �������������� ������ ����� ������������� � ������
            {                       
                strcat(newStr, bufStr);  // ��������� � ����� �������������� ������ ����� �� ������
            }           
            while (*inStr == ' ' || *inStr == ','|| *inStr == '!' || *inStr == '\n')  // ������� ������������
            {                                 
                int len = strlen(newStr);
                *(newStr+len) = *inStr++;  // ������ ��������� ��� ������� � �������������� ������
                *(newStr+(len+1)) = 0;  // ��������                
            }            
            i = 0;  // ������ �������� �����   
        }        
        if (*inStr == 0)  // �����
        {
            break;
        }              
        *(bufStr+i++) = *inStr++;  // �������� ������� ������ � ������� ������ � �����
    }   
    for (char *p = newStr; *p; p++)
    {
        cnt++;  //������� ������� ����� ������
    }    
    for (char* i = bufStr; *i; i++)
    {
        cnt_clean++;  //��� ���������� ����� ����� �������� ����� ������ �� ������ (�������� �������)
    }
    fwrite(newStr, sizeof(char), cnt-cnt_clean, in);
    free(bufStr);
    free(newStr);  //������� ������ � ������� �� �������
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