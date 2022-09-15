#include "pch.h"
#include "Cat.h"

void SearchAddress(Cat* cats, size_t size, char* address, unsigned int id)
{
	int index = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(cats[i].address, address) == 0) // если введённый адрес найден
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