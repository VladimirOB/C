#include "pch.h"
#include "Cat.h"

void ShowCat(Cat* cats, const size_t size, const unsigned int id)
{
	int index = -1;

	for (size_t i = 0; i < size; i++) // аналогично удалению.
	{
		if (cats[i].id == id)
		{
			index = id;
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
		puts("Wrong ID!");
		system("pause");
	}

}