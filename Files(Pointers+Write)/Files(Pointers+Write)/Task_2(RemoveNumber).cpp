#include "pch.h"

int main()
{/*2. Пользователь вводит строку, программа удаляет из неё все цифры(арифметика указателей)*/
    
    char* str = new char [80];
    char* str2 = new char[80];
    cin.getline(str, 79);
    char* p = str;
    char* p2 = str2;

    for (int i = 0; *p; p++)
    {
        if (!isdigit(*p))
        {
            *p2 = *p;
            p2++;
        }
       
        i++;
    }
    *p2 = 0;
     cout << str2;
    
   // cout << *p << endl;
    delete []str;
    delete[]str2;
    return 0;
}

//int main()
//{/*2. Пользователь вводит строку, программа удаляет из неё все цифры(арифметика указателей)*/
//
//    char* str = new char[80];
//    cin.getline(str, 79);
//    char* p = str;
//    int len = strlen(str);
//    for (int i = 0; *p; p++)
//    {
//           /* if (!isdigit(*p))
//            {
//                str[i] = *p;
//            }
//            i++;*/
//       
//    }
//    cout << str<<endl;
//
//    for (int i = 0; i<=len; i++)
//    {
//        if (str[i] == str[i + 1])
//        {
//            for (int j = 0; j <= i; j++)
//                str[j] = str[j - 1];
//        }
//    }
//    cout << str;
//    // cout << *p << endl;
//    delete[]str;
//    return 0;
//}
