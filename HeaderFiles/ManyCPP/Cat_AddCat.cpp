#include "pch.h"
#include "Cat.h"

unsigned int AddCat(Cat* cats, unsigned int size, const int MaxSize)
{
	cin.ignore(); // ��� ���������� ������ cin.getline

	if (size < MaxSize) // ���� �� ����� �� ������� �������.
	{
		Cat newCat; // ��������� ����� ������ ���������.
		newCat.id = size;

		puts("Enter age:");
		cin >> newCat.age;
		puts("Enter price:");
		cin >> newCat.price;
		puts("Enter the amount of hair:");
		cin >> newCat.hair;
		puts("Enter Name:");
		cin >> newCat.name;
		puts("Enter breed:");
		cin >> newCat.breed;
		puts("Enter address:");
		cin >> newCat.address;
		puts("Enter owner:");
		cin >> newCat.owner;

		cats[size] = newCat; // ��������� ������ ���� � ������ size �������.
		size++; // � ����������� �, ���� ����� �������� ������ ����.
		puts("Cat added.");
		system("pause");
	}
	else
		puts("Something wrong!");

	return size; // ���������� ������ �������.
}