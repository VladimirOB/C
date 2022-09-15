#include "pch.h"

#define COUT1 cout << "Enter  to  exit  write >> exit" << endl;
#define COUT2 cout << "Give  an answer  write >> help " << endl;
#define COUT3 cout << "To reset progres write >> reset \nTo random  verb  write >> rand\n" << endl;
#define COUT4 cout << "Enter with a space : (was were)" << endl;


int ex(int score, int wrong, int help) // выход
{
	system("COLOR 02");
	cout << "Congratulations! you scored = " << score << endl;
	cout << "Wrong answers = " << wrong << endl;
	cout << "Taken help = " << help << endl;
	system("pause");
	return 0;
}

void restart(int operation, int score, int wrong, int help, FILE* r)
{
	fclose(r);
	FILE* w = fopen("t.txt", "w");
	operation = 0;
	score = 0;
	wrong = 0;
	help = 0;
	fputc('1', w);
	fclose(w);
}

int main()
{
	system("COLOR 03");
	srand(time(0));
	FILE* r = fopen("t.txt", "r");
	int score = 0, wrong = 0, help = 0, save = 0, operation = 0, wrongres = 0;
	char str[100];
	cout << "Welcome to learn Irregular Verbs.\n" << endl;
	cout << "\nIf you answer correctly, you will move to the next Verb! " << endl;
	system("pause");

	while (r != NULL)
	{
		char str_f[100] = "";

		while (true)
		{
			r = fopen("t.txt", "r");
			while (!feof(r))
			{
				strcpy(str_f, "");
				fgets(str_f, 99, r);
			}
			if (wrongres == 0)
			{
				
				for (int i = 0; i < str_f[i]; i++)
				{
					save = str_f[i] - 31;
				}
				
				for (int j = operation; j < save; j++)
				{
					operation++;
				}
			}
			system("cls");

			wrongres = 0;

			switch (operation)
			{

			case 1:

			{
				char word[] = "was were";
				COUT1 COUT2 COUT3 COUT4
					cout << "Past Simple and Past Participle verb >> be << \n" << endl;
				cin.getline(str, 99);
				if (strcmp(str, "rand") == 0)
				{
					operation = rand() % (94 - 1 + 1) + 1;
				}
				if (strcmp(str, "reset") == 0)
				{
					fclose(r);
					FILE* w = fopen("t.txt", "w");
					operation = 0;
					score = 0;
					wrong = 0;
					help = 0;
					fputc(' ', w);
					fclose(w);
					break;
				}
				if (strcmp(str, "help") == 0)
				{
					cout << "Answer: ";
					for (int i = 0; i < word[i] != 0; i++)
					{
						cout << word[i];
					}
					cout << endl;
					cout << "Translate - 6blTb" << endl;
					help++;
					wrongres++;
					system("pause");
					break;
				}
				if (strcmp(str, "exit") == 0)
				{
					ex(score, wrong, help);
					return 0;
				}
				if (strcmp(str, word) == 0)
				{
					FILE* w = fopen("t.txt", "w");
					cout << "\nWonderfully" << endl;
					cout << "Translate - 6blTb" << endl;
					score++;
					fputc('!', w);
					fclose(w);
					system("pause");
					break;
				}
				else
					cout << "\nWrong!\n" << endl;
				wrong++;
				wrongres++;
				system("pause");
				break;
			}

			case 2:

			{
				char word[] = "beat beaten";
				COUT1 COUT2 COUT3 COUT4
					cout << "Past Simple and Past Participle verb >> beat << \n" << endl;
				cin.getline(str, 99);
				if (strcmp(str, "rand") == 0)
				{
					operation = rand() % (94 - 1 + 1) + 1;
				}
				if (strcmp(str, "reset") == 0)
				{
					fclose(r);
					FILE* w = fopen("t.txt", "w");
					operation = 0;
					score = 0;
					wrong = 0;
					help = 0;
					fputc(' ', w);
					fclose(w);
					break;
				}
				if (strcmp(str, "help") == 0)
				{
					cout << "Answer: ";
					for (int i = 0; i < word[i] != 0; i++)
					{
						cout << word[i];
					}
					cout << endl;
					cout << "Translate - 6uTb" << endl;
					help++;
					wrongres++;
					system("pause");
					break;
				}
				if (strcmp(str, "exit") == 0)
				{
					ex(score, wrong, help);
					return 0;
				}
				if (strcmp(str, word) == 0)
				{
					FILE* w = fopen("t.txt", "w");
					char cnt[100] = "";
					cout << "\nWonderfully" << endl;
					cout << "Translate - 6uTb" << endl;
					score++;
					fputc('"', w);
					fclose(w);
					system("pause");
					break;
				}
				else
					cout << "\nWrong!\n" << endl;
				wrong++;
				wrongres++;
				system("pause");
				break;
			}

			case 3:

			{   char word[] = "became become";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> become << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CTaHoBuTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CTaHoBuTbC9" << endl;
				score++;
				fputc('#', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 4:

			{   char word[] = "began begun";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> begin << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				cout << "Translate - Ha4uHaTb" << endl;
				help++;
				wrongres++;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - Ha4uHaTb" << endl;
				score++;
				fputc('$', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 5:

			{   char word[] = "bent bent";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> bend << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				cout << "Translate - rHyTb" << endl;
				help++;
				wrongres++;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - rHyTb" << endl;
				score++;
				fputc('%', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 6:
			{   char word[] = "wrote written";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> write << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nuCaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nuCaTb" << endl;
				score++;
				fputc('&', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 7:
			{   char word[] = "bit bitten";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> bite << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - KyCaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - KyCaTb" << endl;
				score++;
				fputc('\'', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 8:
			{   char word[] = "blew blown";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> blow << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DyTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DyTb" << endl;
				score++;
				fputc('(', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 9:
			{   char word[] = "broke broken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> break << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - JIoMaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - JIoMaTb" << endl;
				score++;
				fputc(')', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 10:
			{   char word[] = "brought brought";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> bring << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - npuHocuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - npuHocuTb" << endl;
				score++;
				fputc('*', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 11:
			{   char word[] = "built built";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> build << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CTPOuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CTPOuTb" << endl;
				score++;
				fputc('+', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 12:
			{   char word[] = "bought bought";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> buy << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noKynaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noKynaTb" << endl;
				score++;
				fputc(',', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 13:
			{   char word[] = "caught caught";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> catch << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - JIoBuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - JIoBuTb" << endl;
				score++;
				fputc('-', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 14:
			{   char word[] = "chose chosen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> choose << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - Bbl6uPaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - Bbl6uPaTb" << endl;
				score++;
				fputc('.', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 15:
			{   char word[] = "wore worn";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> wear << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - HoCuTb(ODe}|{Dy)" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - HoCuTb(ODe}|{Dy)" << endl;
				score++;
				fputc('/', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 16:
			{   char word[] = "woke woken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> wake << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nPoCblnaTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nPoCblnaTbC9" << endl;
				score++;
				fputc('0', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 17:
			{   char word[] = "understood understood";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> understand << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noHuMaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noHuMaTb" << endl;
				score++;
				fputc('1', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 18:
			{   char word[] = "dealt dealt";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> deal << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - uMeTb DeJIo" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - uMeTb DeJIo" << endl;
				score++;
				fputc('2', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 19:
			{   char word[] = "dug dug";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> dig << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - KonaTb,PblTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - KonaTb,PblTb" << endl;
				score++;
				fputc('3', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 20:
			{   char word[] = "did done";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> do << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DeJIaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DeJIaTb" << endl;
				score++;
				fputc('4', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 21:
			{   char word[] = "drew drawn";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> draw << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - PuCoBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - PuCoBaTb" << endl;
				score++;
				fputc('5', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 22:
			{   char word[] = "drank drunk";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> drink << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nuTb" << endl;
				score++;
				fputc('6', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 23:
			{   char word[] = "drove driven";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> drive << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - e3DuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - e3DuTb" << endl;
				score++;
				fputc('7', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 24:
			{   char word[] = "ate eaten";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> eat << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - e3DuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - e3DuTb" << endl;
				score++;
				fputc('8', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 25:
			{   char word[] = "fell fallen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> fall << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - naDaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - naDaTb" << endl;
				score++;
				fputc('9', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 26:
			{   char word[] = "fed fed";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> feed << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - KoPMuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - KoPMuTb" << endl;
				score++;
				fputc(':', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 27:
			{   char word[] = "felt felt";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> feel << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 4yBCTBoBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 4yBCTBoBaTb" << endl;
				score++;
				fputc(';', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 28:
			{   char word[] = "fought fought";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> fight << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CPaJaTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CPaJaTbC9" << endl;
				score++;
				fputc('<', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 29:
			{   char word[] = "found found";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> find << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - HaXoDuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - HaXoDuTb" << endl;
				score++;
				fputc('=', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 30:
			{   char word[] = "flew flown";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> fly << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - JIeTaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - JIeTaTb" << endl;
				score++;
				fputc('>', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 31:
			{   char word[] = "forgot forgotten";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> forget << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3a6blBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3a6blBaTb" << endl;
				score++;
				fputc('?', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 32:
			{   char word[] = "forgave forgiven";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> forgive << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nPoIIIaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nPoIIIaTb" << endl;
				score++;
				fputc('@', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 33:
			{   char word[] = "froze frozen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> freeze << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3aMeP3aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3aMeP3aTb" << endl;
				score++;
				fputc('A', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 34:
			{   char word[] = "got got";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> get << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noJIy4aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noJIy4aTb" << endl;
				score++;
				fputc('B', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 35:
			{   char word[] = "gave given";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> give << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DaTb" << endl;
				score++;
				fputc('C', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 36:
			{   char word[] = "went gone";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> go << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - uDTu" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - uDTu" << endl;
				score++;
				fputc('D', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 37:
			{   char word[] = "grew grown";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> grow << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - PaCTu" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - PaCTu" << endl;
				score++;
				fputc('E', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 38:
			{   char word[] = "hung hung";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hang << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BeIIIaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BeIIIaTb" << endl;
				score++;
				fputc('F', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 39:
			{   char word[] = "had had";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> have << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - uMeTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - uMeTb" << endl;
				score++;
				fputc('G', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 40:
			{   char word[] = "heard heard";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hear << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CJIblIIIaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CJIblIIIaTb" << endl;
				score++;
				fputc('H', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 41:
			{   char word[] = "hid hidden";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hide << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nP9TaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nP9TaTb" << endl;
				score++;
				fputc('I', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 42:
			{   char word[] = "hit hit";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hit << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - yDaP9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - yDaP9Tb" << endl;
				score++;
				fputc('J', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 43:
			{   char word[] = "held held";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hold << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DeP}|{aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DeP}|{aTb" << endl;
				score++;
				fputc('K', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 44:
			{   char word[] = "hurt hurt";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> hurt << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - PaHuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - PaHuTb" << endl;
				score++;
				fputc('L', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 45:
			{   char word[] = "kept kept";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> keep << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - XPaHuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - XPaHuTb" << endl;
				score++;
				fputc('M', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 46:
			{   char word[] = "knew known";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> know << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3HaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3HaTb" << endl;
				score++;
				fputc('N', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 47:
			{   char word[] = "laid laid";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> lay << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - KJIaCTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - KJIaCTb" << endl;
				score++;
				fputc('O', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 48:
			{   char word[] = "led led";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> lead << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - ConPoBo}|{DaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - ConPoBo}|{DaTb" << endl;
				score++;
				fputc('P', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 49:
			{   char word[] = "left left";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> leave << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noKuDaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noKuDaTb" << endl;
				score++;
				fputc('Q', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 50:
			{   char word[] = "lent lent";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> lend << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DaBaTb B DoJIr" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DaBaTb B DoJIr" << endl;
				score++;
				fputc('R', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 51:
			{   char word[] = "let let";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> let << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - no3BoJI9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - no3BoJI9Tb" << endl;
				score++;
				fputc('S', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 52:
			{   char word[] = "lay lain";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> lie << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - JIe}|{aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - JIe}|{aTb" << endl;
				score++;
				fputc('T', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 53:
			{   char word[] = "lit lit";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> light << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3a}|{blraTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3a}|{blraTb" << endl;
				score++;
				fputc('U', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 54:
			{   char word[] = "lost lost";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> lose << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - TeP9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - TeP9Tb" << endl;
				score++;
				fputc('V', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			
			case 55:
			{   char word[] = "made made";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> make << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - Co3DaBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - Co3DaBaTb" << endl;
				score++;
				fputc('W', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 56:
			{   char word[] = "meant meant";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> mean << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - uMeTb B BuDy" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - uMeTb B BuDy" << endl;
				score++;
				fputc('X', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 57:
			{   char word[] = "met met";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> meet << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BCTPE4ATb,3HaKoMuTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BCTPE4ATb,3HaKoMuTbC9" << endl;
				score++;
				fputc('Y', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 58:
			{   char word[] = "paid paid";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> pay << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nJIaTuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nJIaTuTb" << endl;
				score++;
				fputc('Z', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 59:
			{   char word[] = "put put";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> put << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CTaBuTb,KJIaCTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CTaBuTb,KJIaCTb" << endl;
				score++;
				fputc('[', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 60:
			{   char word[] = "read read";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> read << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 4uTaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 4uTaTb" << endl;
				score++;
				fputc('\\', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 61:
			{   char word[] = "rode ridden";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> ride << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - EXaTb BePXoM,KaTaTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - EXaTb BePXoM,KaTaTbC9" << endl;
				score++;
				fputc(']', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 62:
			{   char word[] = "rang rung";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> ring << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3BeHeTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3BeHeTb" << endl;
				score++;
				fputc('^', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 63:
			{   char word[] = "rose risen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> rise << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BoCXoDuTb,BCTaBaTb,noDHuMaTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BoCXoDuTb,BCTaBaTb,noDHuMaTbC9" << endl;
				score++;
				fputc('_', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 64:
			{   char word[] = "ran run";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> run << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 6e}|{aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 6e}|{aTb" << endl;
				score++;
				fputc('`', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 65:
			{   char word[] = "said said";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> say << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - roBoPuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - roBoPuTb" << endl;
				score++;
				fputc('a', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 66:
			{   char word[] = "saw seen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> see << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BuDeTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BuDeTb" << endl;
				score++;
				fputc('b', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 67:
			{   char word[] = "sought sought";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> seek << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - uCKaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - uCKaTb" << endl;
				score++;
				fputc('c', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 68:
			{   char word[] = "sold sold";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sell << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nPoDaBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nPoDaBaTb" << endl;
				score++;
				fputc('d', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 69:
			{   char word[] = "sent sent";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> send << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noCblJIaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noCblJIaTb" << endl;
				score++;
				fputc('e', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 70:
			{   char word[] = "set set";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> set << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - Ha3Ha4uTb,3aDaBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - Ha3Ha4uTb,3aDaBaTb" << endl;
				score++;
				fputc('f', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 71:
			{   char word[] = "shook shaken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> shake << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - TP9CTu" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - TP9CTu" << endl;
				score++;
				fputc('g', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 72:
			{   char word[] = "shone shone";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> shine << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CBeTuTb, Cu9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CBeTuTb, Cu9Tb" << endl;
				score++;
				fputc('h', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 73:
			{   char word[] = "shot shot";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> shoot << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CTPEJI9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CTPEJI9Tb" << endl;
				score++;
				fputc('i', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 74:
			{   char word[] = "showed shown";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> show << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - noKa3blBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - noKa3blBaTb" << endl;
				score++;
				fputc('j', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 75:
			{   char word[] = "shut shut";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> shut << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 3aKPblBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 3aKPblBaTb" << endl;
				score++;
				fputc('k', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 76:
			{   char word[] = "sang sung";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sing << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - neTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - neTb" << endl;
				score++;
				fputc('l', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 77:
			{   char word[] = "sank sunk";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sink << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - ToHyTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - ToHyTb" << endl;
				score++;
				fputc('m', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 78:
			{   char word[] = "sat sat";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sit << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CuDeTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CuDeTb" << endl;
				score++;
				fputc('n', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 79:
			{   char word[] = "slept slept";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sleep << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CnaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CnaTb" << endl;
				score++;
				fputc('o', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 80:
			{   char word[] = "spoke spoken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> speak << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - roBoPuTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - roBoPuTb" << endl;
				score++;
				fputc('p', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 81:
			{   char word[] = "spent spent";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> spend << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - TPaTuTb,nPoBoDuTb BPeM9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - TPaTuTb,nPoBoDuTb BPeM9" << endl;
				score++;
				fputc('q', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 82:
			{   char word[] = "stood stood";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> stand << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - CTo9Tb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - CTo9Tb" << endl;
				score++;
				fputc('r', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 83:
			{   char word[] = "stole stolen";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> steal << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BoPoBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BoPoBaTb" << endl;
				score++;
				fputc('s', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 84:
			{   char word[] = "stuck stuck";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> stick << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - BTblKaTb,nPuKJIeuBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - BTblKaTb,nPuKJIeuBaTb" << endl;
				score++;
				fputc('t', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 85:
			{   char word[] = "struck stricken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> strike << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 6uTb,noPa}|{aTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 6uTb,noPa}|{aTb" << endl;
				score++;
				fputc('u', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 86:
			{   char word[] = "swore sworn";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> swear << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - KJI9CTbC9,nPuC9raTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - KJI9CTbC9,nPuC9raTb" << endl;
				score++;
				fputc('v', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 87:
			{   char word[] = "swept swept";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> sweep << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - MeCTu,CMaXuBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - MeCTu,CMaXuBaTb" << endl;
				score++;
				fputc('w', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 88:
			{   char word[] = "swam swum";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> swim << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - nJIaBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - nJIaBaTb" << endl;
				score++;
				fputc('x', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 89:
			{   char word[] = "swung swung";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> swing << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - Ka4aTbC9,BePTeTbC9" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - Ka4aTbC9,BePTeTbC9" << endl;
				score++;
				fputc('y', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 90:
			{   char word[] = "took taken";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> take << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - 6PaTb,XBaTaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - 6PaTb,XBaTaTb" << endl;
				score++;
				fputc('z', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 91:
			{   char word[] = "taught taught";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> teach << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - y4uTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - y4uTb" << endl;
				score++;
				fputc('{', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 92:
			{   char word[] = "tore torn";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> tear << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - PBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - PBaTb" << endl;
				score++;
				fputc('|', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 93:
			{   char word[] = "told told";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> tell << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - PaCCKa3blBaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - PaCCKa3blBaTb" << endl;
				score++;
				fputc('}', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 94:
			{   char word[] = "thought thought";
			COUT1 COUT2 COUT3 COUT4
				cout << "Past Simple and Past Participle verb >> think << \n" << endl;
			cin.getline(str, 99);
			if (strcmp(str, "rand") == 0)
			{
				operation = rand() % (94 - 1 + 1) + 1;
			}
			if (strcmp(str, "reset") == 0)
			{
				fclose(r);
				FILE* w = fopen("t.txt", "w");
				operation = 0;
				score = 0;
				wrong = 0;
				help = 0;
				fputc(' ', w);
				fclose(w);
				break;
			}
			if (strcmp(str, "help") == 0)
			{
				cout << "Answer: ";
				for (int i = 0; i < word[i] != 0; i++)
				{
					cout << word[i];
				}
				cout << endl;
				help++;
				wrongres++;
				cout << "Translate - DyMaTb" << endl;
				system("pause");
				break;
			}
			if (strcmp(str, "exit") == 0)
			{
				ex(score, wrong, help);
				return 0;
			}
			if (strcmp(str, word) == 0)
			{
				FILE* w = fopen("t.txt", "w");
				cout << "\nWonderfully" << endl;
				cout << "Translate - DyMaTb" << endl;
				score++;
				fputc('~', w);
				fclose(w);
				system("pause");
				break;
			}
			else
				cout << "\nWrong!\n" << endl;
			wrong++;
			wrongres++;
			system("pause");
			break;
			}

			case 95:
			{
				cout << "Mission complete!" << endl;
				FILE* w = fopen("t.txt", "w");
				fputc(' ', w);
				fclose(w);
				ex(score, wrong, help);
				return 0;
			}

			default:
			{
				cout << "Oops. Something went wrong!";
				system("pause");
				break;
			}

			}
			fclose(r);
		}

	}
	return 0;
}