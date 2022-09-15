#include "pch.h"
#include "Cat.h"

void SearchName(Cat* cats, size_t size, char* name, unsigned int id)
{
	int index = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(cats[i].name, name) == 0) // если введённое имя найдено
		{
			index = cats[i].id; // присваиваем индексу его айди.
			break;
		}
	}

	if (index != -1)
	{
		printf("Id: %d\n", cats[index].id);
		printf("Age: %d\n", cats[index].age);
		printf("Price: %d\n", cats[index].price);
		printf("Amount of hair: %d\n", cats[index].hair);
		printf("Name: %s\n", cats[index].name);
		printf("Breed: %s\n", cats[index].breed);
		printf("Address: %s\n", cats[index].address);
		printf("Owner: %s\n", cats[index].owner);
		system("pause");
	}
	else
	{
		puts("Wrong name!");
		system("pause");
	}
}