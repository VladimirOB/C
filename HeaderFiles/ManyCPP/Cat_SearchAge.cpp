#include "pch.h"
#include "Cat.h"

void SearchAge(Cat* cats, size_t size, unsigned int startAge, unsigned int endAge, unsigned int id)
{
	for (size_t i = 0; i < size; i++)
	{
		if (cats[i].age >= startAge && cats[i].age <= endAge) // проверяем диапазон возрастов.
		{
			printf("Id: %d\n", cats[i].id);
			printf("Age: %d\n", cats[i].age);
			printf("Price: %d\n", cats[i].price);
			printf("Amount of hair: %d\n", cats[i].hair);
			printf("Name: %s\n", cats[i].name);
			printf("Breed: %s\n", cats[i].breed);
			printf("Address: %s\n", cats[i].address);
			printf("Owner: %s\n", cats[i].owner);
			system("pause");
		}
		else
		{
			puts("Something wrong!");
			system("pause");
		}
	}

}