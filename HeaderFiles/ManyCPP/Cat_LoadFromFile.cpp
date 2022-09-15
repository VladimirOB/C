#include "pch.h"
#include "Cat.h"

int LoadFromFile(Cat* cats, char* fileName, const unsigned int maxSize)
{
	// открытие файла с записями для чтения
	FILE* r = fopen(fileName, "rb");

	// проверка на успешность открытия файла
	if (r != nullptr)
	{
		// получить размер файла
		fseek(r, 0, SEEK_END);
		long fileSize = ftell(r);
		fseek(r, 0, SEEK_SET);

		// если размер файла НЕ правильный (НЕ кратный размеру структуры или больше максимума БД)
		if (fileSize % sizeof(Cat) != 0 || fileSize / sizeof(Cat) > maxSize)
			return -1;

		// чтение БД из файла
		fread(cats, sizeof(Cat), fileSize / sizeof(Cat), r);
		fclose(r);

		// возвратить новый размер БД (количество заполненных записей)
		return fileSize / sizeof(Cat);
	}
	else return -1;
}