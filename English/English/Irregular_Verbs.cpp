//#include "pch.h"
//
//#define COUT1 cout << "Enter to exit  write >> exit" << endl;
//#define COUT2 cout << "Give an answer write >> help \n" << endl;
//#define COUT3 cout << "Enter with a space : " << endl;
//
//int main()
//{   setlocale(LC_ALL, "Russian");
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	srand(time(0));
//	int operation;
//	int score = 0, wrong=0,help =0;
//	char str[100];
//	while (true)
//	{
//		system("cls");
//		operation = rand() % (20 - 1 + 1) + 1; //��� ������� ����� ����� �����
//		switch (operation)
//		{
//		case 1:
//		{		
//				char word[] = "was were";
//				COUT1 COUT2 COUT3
//				cout << "Past Simple and Past Participle verb >> be << \n" << endl;
//				cin.getline(str, 99);
//				if (strcmp(str, "help") == 0) 
//				{
//					cout << "Answer: ";
//					for (int i = 0; i < word[i]!=0; i++)
//					{
//						cout<< word[i];
//					}
//					cout << endl;
//					cout << "Translate - 6blTb" << endl;
//					help++;
//					system("pause");
//					break;
//				}
//				if(strcmp(str, "exit") == 0)
//				{
//					cout << "Congratulations! you scored = " << score << endl;
//					cout << "Wrong answers = " << wrong << endl;
//					cout << "Taken help = " << help << endl;
//					system("pause");
//					return 0;
//				}
//				if (strcmp(str,word)==0) {
//					cout << "\nWonderfully" << endl;
//					cout << "Translate - 6blTb" << endl;
//					score++;
//					system("pause");
//					break;
//				}
//				else
//					cout << "\nWrong!\n" << endl;
//				wrong++;
//				system("pause");
//				break;
//			}
//
//		case 2:
//			{   char word[] = "beat beaten";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> beat << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				cout << "Translate - 6uTb" << endl;
//				help++;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//				if (strcmp(str, word) == 0)
//				{
//					cout << "\nWonderfully" << endl;
//					cout << "Translate - 6uTb" << endl;
//					system("pause");
//					score++;
//					break;
//				}
//				else
//					cout << "\nWrong!\n" << endl;
//				wrong++;
//				system("pause");
//				break;
//			}
//
//			case 3:
//			{   char word[] = "became become";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> become << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - CTaHoBuTbC9" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//				if (strcmp(str, word) == 0)
//				{
//					cout << "\nWonderfully" << endl;
//					cout << "Translate - CTaHoBuTbC9" << endl;
//					score++;
//					system("pause");
//					break;
//				}
//				else
//					cout << "\nWrong!\n" << endl;
//				wrong++;
//				system("pause");
//				break;
//			}
//
//			case 4:
//			{   char word[] = "began begun";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> begin << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				cout << "Translate - Ha4uHaTb" << endl;
//				help++;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Ha4uHaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 5:
//			{   char word[] = "bent bent";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> bend << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				cout << "Translate - rHyTb" << endl;
//				help++;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - rHyTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 6:
//			{   char word[] = "bet bet";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> bet << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - napu" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - napu" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 7:
//			{   char word[] = "bit bitten";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> bite << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - KyCaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - KyCaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 8:
//			{   char word[] = "blew blown";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> blow << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - DyTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - DyTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 9:
//			{   char word[] = "broke broken";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> break << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - JIoMaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - JIoMaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 10:
//			{   char word[] = "brought brought";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> bring << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - npuHocuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - npuHocuTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 11:
//			{   char word[] = "built built";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> build << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - CTPOuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - CTPOuTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 12:
//			{   char word[] = "bought bought";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> buy << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - noKynaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - noKynaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 13:
//			{   char word[] = "caught caught";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> catch << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - JIoBuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - JIoBuTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 14:
//			{   char word[] = "chose chosen";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> choose << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - Bbl6uPaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Bbl6uPaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 15:
//			{   char word[] = "came come";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> come << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - npuxoDuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - npuxoDuTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 16:
//			{   char word[] = "cost cost";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> cost << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - CTouTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - CTouTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 17:
//			{   char word[] = "cut cut";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> cut << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - Pe3aTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Pe3aTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 18:
//			{   char word[] = "dealt dealt";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> deal << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - uMeTb DeJIo" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - uMeTb DeJIo" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 19:
//			{   char word[] = "dug dug";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> dig << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - KonaTb,PblTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - KonaTb,PblTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//			case 20:
//			{   char word[] = "did done";
//			cout << "Enter to exit  write >> exit" << endl;
//			cout << "Give an answer write >> help \n" << endl;
//			cout << "Enter with a space : " << endl;
//			cout << "Past Simple and Past Participle verb >> do << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				cout << "Translate - DeJIaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				cout << "Congratulations! you scored = " << score << endl;
//				cout << "Wrong answers = " << wrong << endl;
//				cout << "Taken help = " << help << endl;
//				system("pause");
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - DeJIaTb" << endl;
//				score++;
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			system("pause");
//			break;
//			}
//
//
//
//
//
//			default:
//			{
//			cout << "Oops. Something went wrong!";
//			system("pause");
//			break;
//			}
//
//		}
//	}
//	return 0;
//}