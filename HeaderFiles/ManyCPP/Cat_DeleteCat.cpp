#include "pch.h"
#include "Cat.h"

unsigned int DeleteCat(Cat* cats, size_t size, unsigned int id)
{
	int index = -1;

	for (size_t i = 0; i < size; i++) // ���� �������� id � �������.
	{
		if (cats[i].id == id)
		{
			index = id;
			break;
		}
	}
	if (index != -1) // ���� id ������
	{
		for (size_t i = index; i < size; i++) // i = index = id
		{
			cats[i] = cats[i + 1]; // �������� ��� ����������� �������� ����� �� 1
		}
		size--; // ��������� ������ �������
		return size;
	}
	else
	{
		puts("Wrong ID!");
		system("pause");
		return size;
	}
}