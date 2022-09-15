#include "pch.h"

/*1. ���������� ��������� Cats, ������� ��������� ������� ���������� �� �����. ������ �� ����� ����:
- id ����
- Name
- Age
- Breed (������)
- Price
- Address
- Owner (��������)

��������� ����� �������� ���� �� ���������� ��������:
- �������� ����
- �������� ���� �����
- ������� ���� �� id
- �������� ���� �� ����� ���� �� id
- ��������� �� � ��������� ���� � ���� ���������� ������
- ��������� �� � �������� ����
- ��������� �� �� ��������� �����
- ����� �� ����� ����
- ����� ����� �� �������� (�������� ����� ������ ���������� ��������)
- ����� �� ������

����������� ������ ��� ������ ������������� ������� �������� � �������.*/


// ��������� ��� �����.
struct Cat
{
	unsigned int id; // unsigned ������ ������ �������������.
	unsigned int age; // �������
	int price; // ���������
	int hair; // ���-�� �����
	char name[40]; // ���
	char breed[40]; // ������
	char address[40]; // �����
	char owner[40]; // ��������
	
};

//-�������� ����
//- �������� ���� �����
//- ������� ���� �� id
//- �������� ���� �� ����� ���� �� id
//- ��������� �� � ��������� ���� � ���� ���������� ������
//- ��������� �� � �������� ����
//- ��������� �� �� ��������� �����
//- ����� �� ����� ����
//- ����� ����� �� ��������(�������� ����� ������ ���������� ��������)
//- ����� �� ������

void PrintMenu()
{
	system("cls");
	puts(">>> Main Menu <<<"); // ���������� puts ��� ���������� �������� >
	puts("Choose an option:\n"); // � ���� ������������ �� �� ���������.
	puts("1 - Add a new cat.");
	puts("2 - Delete a cat(ID).");
	puts("3 - View info a cat(ID).");
	puts("4 - Search by cat name.");
	puts("5 - Search for cats by age.");
	puts("6 - Search for a cat by address.");
	puts("7 - Save db as a text report."); // db - database.
	puts("8 - Save the db in binary form.");
	puts("9 - Load db from binary file.");
	puts("0 - Exit.");
	puts("a - View information on all cats\n");
}

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

void ShowCat(Cat* cats, const size_t size, const unsigned int id)
{
	int index = -1;

	for (size_t i = 0; i < size; i++) // ���������� ��������.
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

void SearchName(Cat* cats, size_t size, char* name, unsigned int id)
{
	int index = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(cats[i].name, name)==0) // ���� �������� ��� �������
		{
			index = cats[i].id; // ����������� ������� ��� ����.
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

void SearchAge(Cat* cats, size_t size, unsigned int startAge, unsigned int endAge, unsigned int id)
{
	for (size_t i = 0; i < size; i++)
	{
		if (cats[i].age >= startAge && cats[i].age <= endAge) // ��������� �������� ���������.
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

void SearchAddress(Cat* cats, size_t size, char* address, unsigned int id)
{
	int index = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(cats[i].address, address) == 0) // ���� �������� ����� ������
		{
			index = cats[i].id; // ����������� ������� ��� ����.
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

bool SaveDBReport(Cat* cats, const size_t size, char* fileName)
{
	FILE* w = fopen(fileName, "w");
	fprintf(w, "You have a %d cats.\n", size);
	if (w != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			fprintf(w,"Id: %d\n", cats[i].id);
			fprintf(w,"Age: %d\n", cats[i].age);
			fprintf(w,"Price: %d\n", cats[i].price);
			fprintf(w,"Amount of hair: %d\n", cats[i].hair);
			fprintf(w,"Name: %s\n", cats[i].name);
			fprintf(w,"Breed: %s\n", cats[i].breed);
			fprintf(w,"Address: %s\n", cats[i].address);
			fprintf(w,"Owner: %s\n\n", cats[i].owner);
		}
		fclose(w);
		return true; // �.�. ������� ��������� ���������� ��� (���� ��������� �����)
	}
	else return false;
}

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

int LoadFromFile(Cat* cats, char* fileName, const unsigned int maxSize)
{
	// �������� ����� � �������� ��� ������
	FILE* r = fopen(fileName, "rb");

	// �������� �� ���������� �������� �����
	if (r != nullptr)
	{
		// �������� ������ �����
		fseek(r, 0, SEEK_END);
		long fileSize = ftell(r);
		fseek(r, 0, SEEK_SET);

		// ���� ������ ����� �� ���������� (�� ������� ������� ��������� ��� ������ ��������� ��)
		if (fileSize % sizeof(Cat) != 0 || fileSize / sizeof(Cat) > maxSize)
			return -1;

		// ������ �� �� �����
		fread(cats, sizeof(Cat), fileSize / sizeof(Cat), r);
		fclose(r);

		// ���������� ����� ������ �� (���������� ����������� �������)
		return fileSize / sizeof(Cat);
	}
	else return -1;
}

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

void main()
{
	int size = 0; // ������ ������� ( ������� )

	const int MaxSize = 100; // ���� ���-�� ����� (������ �������)

	Cat* cats = new Cat[MaxSize]; // ������������ ������ �����.

	while (true) // ����������� ���� ��� ������ � ����
	{
		PrintMenu(); // ����� �������

		char choice = _getch(); // _getch() ��� ����� ������ �������.
		unsigned int id = 0; // ������������� ����
		char fileName[40]; // ��� ����� ��� save / load.
		int result; // ��� �������� �����.
		char name[40]; // ��� ������ �� �����
		char address[40]; // ��� ������ �� ������
		int startAge; // ��� ������ ������ �� ��������
		int endAge; // ��� ��������� ������ �� ��������
		switch (choice)
		{
		case '1':
			size = AddCat(cats, size, MaxSize);
			break;
		case '2':
			puts("Enter ID of the cat to delete:");
			cin >> id;
			size = DeleteCat(cats, size, id);
			break;
		case '3':
			puts("Enter ID of the cat to show:");
			cin >> id;
			ShowCat(cats, size, id);
			break;
		case '4':
			puts("Enter cat name:");
			cin >> name;
			SearchName(cats,size,name,id);
			break;
		case '5':
			puts("Enter a range of ages in the format from and to: ");
			puts("Enter the beginning of the ages: ");
			cin >> startAge;
			puts("Enter the end of the ages: ");
			cin >> endAge;
			SearchAge(cats,size,startAge,endAge,id);
			break;
		case '6':
			puts("Enter cat address:");
			cin >> address;
			SearchAddress(cats, size, address, id);
			break;
		case '7':
			puts("Enter file name:");
			cin >> fileName;
			if (SaveDBReport(cats,size,fileName))
			{
				puts("DB report was saved successfully.");
			}
			else puts("There was an Error during saving report!");
			system("pause");
			break;
		case '8':
			puts("Enter file name:");
			cin >> fileName;
			if (SaveDBToFile(cats, size, fileName))
			{
				puts("DB report was saved successfully.");
			}
			else puts("There was an Error during saving report!");
			system("pause");
			break;
		case '9':
			puts("Enter file name:");
			cin >> fileName;

			result = LoadFromFile(cats, fileName, MaxSize);

			if (result > 0)
			{
				size = result;
				puts("DB load was successfully!");
			}
			else puts("There was an Error during loading DB!");
			system("pause");
			break;
		case 'a':
			ShowAllCats(cats, size);
			system("pause");
			break;
		case '0':
			delete[] cats;
			puts("Good bye.");
			return;


		defaut:
			puts("Wrong choice!");
			break;
		}
	}
}


