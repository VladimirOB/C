//#include "pch.h"
//
//#define COUT1 cout << "Enter  to  exit  write >> exit" << endl;
//#define COUT2 cout << "Give  an answer  write >> help " << endl;
//#define COUT3 cout << "To reset progres write >> reset \n" << endl;
//#define COUT4 cout << "Enter with a space : " << endl;
//
//
//int ex(int score,int wrong, int help)
//{
//	system("COLOR 02");
//	cout << "Congratulations! you scored = " << score << endl;
//	cout << "Wrong answers = " << wrong << endl;
//	cout << "Taken help = " << help << endl;
//	system("pause");
//	return 0;
//}
//
//void restart(int operation,int score,int wrong,int help)
//{
//	FILE* w = fopen("t.txt", "w");
//	operation = 0;
//	score = 0;
//	wrong = 0;
//	help = 0;
//	fputc('1', w);
//	fclose(w);
//}
//
//int main()
//{
//	system("COLOR 03");
//	FILE* r = fopen("t.txt", "r");
//	int score = 0, wrong = 0, help = 0, save = 0, operation = 0,wrongres=0;
//	char str[100];
//	cout << "Welcome to learn Irregular Verbs.\n" << endl;
//	cout << "\nIf you answer correctly, you will move to the next Verb! " << endl;
//	system("pause");
//	
//	while(r != NULL)
//	{
//		char str_f[100] = "";
//
//		while (true)
//		{
//			r = fopen("t.txt", "r");
//			while (!feof(r))
//			{
//				strcpy(str_f, "");
//				fgets(str_f, 99, r);
//			}
//			if (wrongres == 0)
//			{	
//				for (int i = 0; i < str_f[i]; i++)
//				{	
//					save = str_f[i] - 48;
//				}
//				
//				for (int j = operation; j < save; j++)
//				{
//					operation++;
//				}
//			}
//			system("cls");
//
//			wrongres = 0; 
//
//			switch (operation)
//			{
//
//			case 1:
//
//			{
//				char word[] = "was were";
//				COUT1 COUT2 COUT3 COUT4 
//					cout << "Past Simple and Past Participle verb >> be << \n" << endl;
//				cin.getline(str, 99);
//				/*if (strcmp(str, "random") == 0)
//				{
//					operation = rand() % (20 - 1 + 1) + 1;
//				}*/
//				if (strcmp(str, "reset") == 0)
//				{
//					fclose(r);
//					FILE* w = fopen("t.txt", "w");
//					operation = 0;
//					score = 0;
//					wrong = 0;
//					help = 0;
//					fputc('1', w);
//					fclose(w);
//					break;
//				}
//				if (strcmp(str, "help") == 0)
//				{
//					cout << "Answer: ";
//					for (int i = 0; i < word[i] != 0; i++)
//					{
//						cout << word[i];
//					}
//					cout << endl;
//					cout << "Translate - 6blTb" << endl;
//					help++;
//					wrongres++;
//					system("pause");
//					break;
//				}
//				if (strcmp(str, "exit") == 0)
//				{
//					ex(score, wrong, help);
//					return 0;
//				}
//				if (strcmp(str, word) == 0) 
//				{
//					FILE* w = fopen("t.txt", "w");
//					cout << "\nWonderfully" << endl;
//					cout << "Translate - 6blTb" << endl;
//					score++;
//					fputc('2', w);
//					fclose(w);
//					system("pause");
//					break;
//				}
//				else
//					cout << "\nWrong!\n" << endl;
//				wrong++;
//				wrongres++;
//				system("pause");
//				break;
//			}
//
//			case 2:
//
//			{
//				char word[] = "beat beaten";
//				COUT1 COUT2 COUT3 COUT4
//				cout << "Past Simple and Past Participle verb >> beat << \n" << endl;
//				cin.getline(str, 99);
//				if (strcmp(str, "reset") == 0)
//				{
//					fclose(r);
//					FILE* w = fopen("t.txt", "w");
//					operation = 0;
//					score = 0;
//					wrong = 0;
//					help = 0;
//					fputc('1', w);
//					fclose(w);
//					break;
//				}
//				if (strcmp(str, "help") == 0)
//				{
//					cout << "Answer: ";
//					for (int i = 0; i < word[i] != 0; i++)
//					{
//						cout << word[i];
//					}
//					cout << endl;
//					cout << "Translate - 6uTb" << endl;
//					help++;
//					wrongres++;
//					system("pause");
//					break;
//				}
//				if (strcmp(str, "exit") == 0)
//				{
//					ex(score, wrong, help);
//					return 0;
//				}
//				if (strcmp(str, word) == 0)
//				{
//					FILE* w = fopen("t.txt", "w");
//					char cnt[100] = "";
//					cout << "\nWonderfully" << endl;
//					cout << "Translate - 6uTb" << endl;
//					score++;
//					fputc('3', w);
//					fclose(w);
//					system("pause");
//					break;
//				}
//				else
//					cout << "\nWrong!\n" << endl;
//				wrong++;
//				wrongres++;
//				system("pause");
//				break;
//			}
//
//			case 3:
//
//			{   char word[] = "became become";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> become << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - CTaHoBuTbC9" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - CTaHoBuTbC9" << endl;
//				score++;
//				fputc('4', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 4:
//
//			{   char word[] = "began begun";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> begin << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
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
//				wrongres++;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Ha4uHaTb" << endl;
//				score++;
//				fputc('5', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 5:
//
//			{   char word[] = "bent bent";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> bend << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
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
//				wrongres++;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - rHyTb" << endl;
//				score++;
//				fputc('6', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 6:
//			{   char word[] = "bet bet";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> bet << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - napu" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - napu" << endl;
//				score++;
//				fputc('7', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 7:
//			{   char word[] = "bit bitten";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> bite << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - KyCaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - KyCaTb" << endl;
//				score++;
//				fputc('8', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 8:
//			{   char word[] = "blew blown";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> blow << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - DyTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - DyTb" << endl;
//				score++;
//				fputc('9', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 9:
//			{   char word[] = "broke broken";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> break << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - JIoMaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - JIoMaTb" << endl;
//				score++;
//				fputc(':', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 10:
//			{   char word[] = "brought brought";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> bring << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - npuHocuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - npuHocuTb" << endl;
//				score++;
//				fputc(';', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 11:
//			{   char word[] = "built built";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> build << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - CTPOuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - CTPOuTb" << endl;
//				score++;
//				fputc('<', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 12:
//			{   char word[] = "bought bought";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> buy << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - noKynaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - noKynaTb" << endl;
//				score++;
//				fputc('=', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 13:
//			{   char word[] = "caught caught";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> catch << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - JIoBuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - JIoBuTb" << endl;
//				score++;
//				fputc('>', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 14:
//			{   char word[] = "chose chosen";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> choose << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - Bbl6uPaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Bbl6uPaTb" << endl;
//				score++;
//				fputc('?', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 15:
//			{   char word[] = "came come";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> come << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - npuxoDuTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - npuxoDuTb" << endl;
//				score++;
//				fputc('@', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 16:
//			{   char word[] = "cost cost";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> cost << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - CTouTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - CTouTb" << endl;
//				score++;
//				fputc('A', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 17:
//			{   char word[] = "cut cut";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> cut << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - Pe3aTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - Pe3aTb" << endl;
//				score++;
//				fputc('B', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 18:
//			{   char word[] = "dealt dealt";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> deal << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - uMeTb DeJIo" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - uMeTb DeJIo" << endl;
//				score++;
//				fputc('C', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 19:
//			{   char word[] = "dug dug";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> dig << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - KonaTb,PblTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - KonaTb,PblTb" << endl;
//				score++;
//				fputc('D', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//			case 20:
//			{   char word[] = "did done";
//			COUT1 COUT2 COUT3 COUT4
//			cout << "Past Simple and Past Participle verb >> do << \n" << endl;
//			cin.getline(str, 99);
//			if (strcmp(str, "reset") == 0)
//			{
//				fclose(r);
//				FILE* w = fopen("t.txt", "w");
//				operation = 0;
//				score = 0;
//				wrong = 0;
//				help = 0;
//				fputc('1', w);
//				fclose(w);
//				break;
//			}
//			if (strcmp(str, "help") == 0)
//			{
//				cout << "Answer: ";
//				for (int i = 0; i < word[i] != 0; i++)
//				{
//					cout << word[i];
//				}
//				cout << endl;
//				help++;
//				wrongres++;
//				cout << "Translate - DeJIaTb" << endl;
//				system("pause");
//				break;
//			}
//			if (strcmp(str, "exit") == 0)
//			{
//				ex(score, wrong, help);
//				return 0;
//			}
//			if (strcmp(str, word) == 0)
//			{
//				FILE* w = fopen("t.txt", "w");
//				cout << "\nWonderfully" << endl;
//				cout << "Translate - DeJIaTb" << endl;
//				score++;
//				fputc('E', w);
//				fclose(w);
//				system("pause");
//				break;
//			}
//			else
//				cout << "\nWrong!\n" << endl;
//			wrong++;
//			wrongres++;
//			system("pause");
//			break;
//			}
//
//
//			case 21:
//			{   
//				cout << "To be continued.." << endl;
//				FILE* w = fopen("t.txt", "w");
//				fputc('1', w);
//				fclose(w);
//			system("pause");
//			return 0;
//			}
//
//
//
//
//			default:
//			{
//				cout << "Oops. Something went wrong!";
//				system("pause");
//				break;
//			}
//
//			}
//			fclose(r);
//		}
//		
//	}
//	return 0;
//}