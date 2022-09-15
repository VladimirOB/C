#include "pch.h"
#include "Cat.h"

bool SaveDBToFile(Cat* cats, const size_t size, char* fileName)
{
	FILE* file = fopen(fileName, "wb");
	if (file != nullptr)
	{
		fwrite(cats, sizeof(Cat), size, file);
		fclose(file);
		return true;
	}
	else return false;
}