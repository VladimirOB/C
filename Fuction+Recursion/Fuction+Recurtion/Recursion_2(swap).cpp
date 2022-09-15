//#include "pch.h"
////3. –екурсивна€ функци€ принимает строку и замен€ет все гласные буквы на '!'
//
//void func(char* st, int i)
//{
//	//string eng = "aeiouyAEIOUY";
//	//string ru = "ауоиэы€юеЄ";
//	int cnt = strlen(st);
//	
//		if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o'
//			|| st[i] == 'u' || st[i] == 'y' || st[i] == 'A' || st[i] == 'E'
//			|| st[i] == 'I' || st[i] == 'O' || st[i] == 'U' || st[i] == 'Y')
//		{
//			st[i] = '!';
//		}
//		if (i < cnt)
//		{
//			func(st, i + 1);
//		}
//			
//
//	
//}
//int main()
//{	
//	char str[100];
//	cout << "Enter a string: " << endl;
//	cin.getline(str, 99);
//	int i = 0;
//	func(str,i);
//	cout << str << endl;
//}
