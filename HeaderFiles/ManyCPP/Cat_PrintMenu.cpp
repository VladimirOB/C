#include "pch.h"

void PrintMenu()
{
	system("cls");
	puts(">>> Main Menu <<<"); // используем puts для облегчения нагрузки >
	puts("Choose an option:\n"); // и души переживающих за неё студентов.
	puts("1 - Add a new cat.");
	puts("2 - Delete a cat(ID).");
	puts("3 - View info a cat(ID).");
	puts("4 - Search by cat name.");
	puts("5 - Search for cats by age.");
	puts("6 - Search for a cat by address.");
	puts("7 - Save db as a text report."); // db - database.
	puts("8 - Save the db in binary form.");
	puts("9 - Load db from binary file.");
	puts("0 - Exit.");
	puts("a - View information on all cats\n");
}