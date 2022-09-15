//#include "pch.h"
//
//int main()
//{
//	srand(time(0));
//	SetConsoleCP(rus);
//	SetConsoleOutputCP(rus);
//
//
//	/*«адача о парол€х
//	  ¬ы€снить и обосновать, кака€ стратеги€ поиска парол€ более выигрышна€ :
//	  1. Brute force - последовательный перебор всех вариантов парол€, пока не будет найден правильный
//	  2. —лучайный подбор паролей, пока не встретитс€ правильный.
//	  3. —лучайный подбор паролей, пока не встретитс€ правильный с запоминанием уже использованных паролей
//
//	  ƒопустимый диапазон паролей : [0001; 9999]*/
//
//	int pass[4];
//	int cnt = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int k = 0; k < 4; k++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				for (int h = 0; h < 4; h++)
//				{
//					pass[i] = rand() % 10;
//					pass[k] = rand() % 10;
//					pass[j] = rand() % 10;
//					pass[h] = rand() % 10;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		cout  << pass[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 9999; i++)
//	{
//		cnt++;
//			if (i == pass[i])
//			   cout << "Ќашел пароль:" << pass[i];
//			break;
//	}
//	cout << " оличество попыток: " << cnt << endl;
//	/*int pass[4];
//	int cnt = 0;
//	int a = 0001;
//	int b = 9999;
//	
//		pass[4] = rand() % (b - a + 1) + a;
//				
//	
//	
//		cout << pass[4];
//	
//	cout << endl;*/
//	/*for (int i = 0; i < 4; i++)
//	{
//		for (int k = i+1; k < 5; k++)
//		{
//			cnt++;
//			if (pass[i] == pass[k])
//				cout << "Password = " << pass[k] << endl;
//		}
//	}
//	cout << "Numbers = " << cnt << endl;*/
//	
//
//	return 0;
//}