//#include "pch.h"
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    char i;
//    cin >> i;
//
//    char ENG[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char eng[] = "abcdefghijklmnopqrstuvwxyz";
//    char RU[] = "јЅ¬√ƒЁ≈∆«џ»… ЋћЌќѕ–—“”‘’÷„Ўў№Џёя®";
//    char ru[] = "aбвгдеЄжзыийклмнопрстуфхцчшщьъю€Є";
//
//    if (strchr(eng, i)) // strchr аналог if(i == eng[h] без цикла.
//        cout << "eng";
//    if (strchr(ru, i))
//        cout << "ru";
//    if (strchr(RU, i))
//        cout << "RU";
//    if (strchr(ENG, i))
//        cout << "ENG";
//   
//    
//    
//    
//    /*for (int h = 0; h <= 26; h++)
//   {
//       if (i == ENG[h])
//       {
//           cout << "ENG"; break;
//
//       }
//       if (i == eng[h])
//       {
//           cout << "eng"; break;
//       }
//   }*/
//    /*for (int b = 0; b <= 33; b++)
//    {
//        if (i == RU[b])
//        {
//            cout << "RU"; break;
//        }
//        if (i == ru[b])
//        {
//            cout << "ru"; break;
//        }
//    }*/
//}
//
////—и код, по разбору строки на символы
//
////int main()
////{
////    char str[400];
////    cout << "Enter a string:" << endl;
////    cin.getline(str, 399);
////    long i = 0;
////    cout << "Symbols of string\r\n" << endl;
////    while (*(str + i) != NULL)
////    {
////        
////        printf(
////            "smb %02d : %c %s\r\n",
////            i + 1,
////            str[i],
////            ((isRus(str[i]) == 1) ? "ENG" : "RUS")
////        );
////        i++;
////    }
////    return 0;
////}
//
////int isRus(char ch)
////{
////    int ret = 1;
////    if (ch < 0)//ƒл€ символов кириллицы
////        ret = 0;
////    return ret;
////    
////}
////
////int eng(char ch)
////{
////    int cnt = 0;
////    char str[400];
////    for (int i = 0; str[i] != 0; i++)
////    {
////        if ((str[i] >= 'a') && (str[i] <= 'z') || (str[i] >= 'A') && (str[i] <= 'Z'))
////            cnt++;
////       
////    }
////    cout << "eng" << cnt;
////    return 0;
////}
//
////int main()
////{
////    
////    char str[400];
////        cout << "Enter a string:" << endl;
////        cin.getline(str, 399);
////        bool is_word_found = false;
////        int count = 0,cnt=0;
////        for (int i = 0; str[i] !=0 ; i++)
////        {
////            switch (is_word_found)
////            {
////                //движемс€ по слову.
////            case true:
////                if (str[i] == ' ')
////                {
////                    i--;
////                    is_word_found = false;
////                }
////                break;
////                // движемс€ по разделител€м ( по пробелам )
////            case false:
////                if ((str[i] != ' ') && (str[i] != (str[i]>='а' && str[i]<='€')))
////                {
////                    if ((str[i] >= 'a') && (str[i] <= 'z') || (str[i] >= 'A') && (str[i] <= 'Z') || (str[i] >= '0') && (str[i] <= '9') || (str[i] == ',') || (str[i] == '.'))
////                    cnt++;
////                    if (str[i + 1] == ','||str[i+1] == '.')
////                    {
////                        cnt--;
////                    }
////                    count++;
////                    i--;
////                    is_word_found = true; // либо !is_word_found
////                }
////                break;
////            }
////            // if (str[i] == ',' && str[i++] == ',')
////    
////        }
////        if (count == cnt) 
////            {
////                cout << "String in english" << endl;
////            }
////             
////        else
////            cout << "String not in english" << endl;
////    
////    
////
////}
//
//
//
//    
//
