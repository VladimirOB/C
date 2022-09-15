#include "pch.h"

 /*1. Пользователь вводит строку, программа подсчитывает сумму цифер в строке(арифметика указателей)*/

void f(char* p, int sum)
{
    for (; *p; p++)
    {
        if (*p >= '0' && *p <= '9')
            sum += *p - 48;
    }
     cout << sum << endl;
}

int main()
{
	char s[80];
	cin.getline(s, 79);
    char* p = s;
    int sum = 0;
    f(p, sum);
   
    return 0;
}

