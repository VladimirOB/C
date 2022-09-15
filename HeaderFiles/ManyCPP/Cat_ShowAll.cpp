#include "pch.h"
#include "Cat.h"

void ShowAllCats(Cat* cats, const size_t size)
{
	printf("You have a %d cats.\n", size);
	for (size_t i = 0; i < size; i++)
	{
		printf("Id: %d\n", cats[i].id);
		printf("Age: %d\n", cats[i].age);
		printf("Price: %d\n", cats[i].price);
		printf("Amount of hair: %d\n", cats[i].hair);
		printf("Name: %s\n", cats[i].name);
		printf("Breed: %s\n", cats[i].breed);
		printf("Address: %s\n", cats[i].address);
		printf("Owner: %s\n\n", cats[i].owner);
	}
}