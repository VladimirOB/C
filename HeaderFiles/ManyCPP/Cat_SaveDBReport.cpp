#include "pch.h"
#include "Cat.h"

bool SaveDBReport(Cat* cats, const size_t size, char* fileName)
{
	FILE* w = fopen(fileName, "w");
	fprintf(w, "You have a %d cats.\n", size);
	if (w != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			fprintf(w, "Id: %d\n", cats[i].id);
			fprintf(w, "Age: %d\n", cats[i].age);
			fprintf(w, "Price: %d\n", cats[i].price);
			fprintf(w, "Amount of hair: %d\n", cats[i].hair);
			fprintf(w, "Name: %s\n", cats[i].name);
			fprintf(w, "Breed: %s\n", cats[i].breed);
			fprintf(w, "Address: %s\n", cats[i].address);
			fprintf(w, "Owner: %s\n\n", cats[i].owner);
		}
		fclose(w);
		return true; // т.к. функция булевская возвращаем тру (чтоб проверить успех)
	}
	else return false;
}