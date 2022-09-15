//#include "pch.h"
//
//////1. рекурсивная функция принимает строку и подсчитывает количество слов в ней(между словами может быть много пробелов)
//
//int func(char* s,int pos)
//{
//	int sl,cnt=0;
//    int i = 0;
//    while (s[i] == ' ' && s[i] != '\0')
//        i++;
//    sl = 0;
//    while (s[i] != '\0')
//    {
//        if (s[i] != ' ' && sl == 0)
//        {
//            sl = 1;
//            cnt++;
//        }
//        else if (s[i] == ' ')
//            sl = 0;
//        i++;
//        if (cnt < pos)
//            return func(s, pos + 1);
//    }
//    return cnt;
//    
//}
//
//int main()
//{
//	char str[40];
//	cout << "enter a string: ";
//	cin.getline(str, 39);
//	cout <<"word of string = " << func(str, 0);
//	
//    return 0;
//}
//
//
//////int main()
//////{
//////	char str[40];
//////	cin.getline(str, 39);
//////	int slovo, cnt = 0;
//////	int i = 0;
//////	while (str[i] != '\0')
//////	{
//////		if (str[i] == ' ')
//////			i++;
//////		
//////		slovo = 0;
//////		while (str[i] != '\0')
//////		{
//////			if (str[i] != ' ' && slovo == 0) {
//////				cnt++;
//////				slovo = 1;
//////			}
//////			else if (str[i] == ' ') 
//////			
//////				slovo = 0;
//////				i++;
//////			
//////		}
//////	}
//////	cout << "otbet " << cnt;
//////}