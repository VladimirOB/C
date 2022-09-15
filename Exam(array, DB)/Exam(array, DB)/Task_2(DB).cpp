#include "pch.h"

/*Задача 2 (5 баллов)

Разработать программу "Отдел кадров", которая позволяет хранить следующую информацию о человеке:
•	номер - id
•	ФИО (имя)
•	адрес
•	дата рождения
•	телефон
•	оклад

Программа должна использовать динамический массив структур для хранения базы сотрудников. Программа имеет меню, в котором есть следующие функции:
•	просмотр всех сотрудников
•	добавить сотрудника
•	удалить сотрудника
•	изменить данные сотрудника (поменять телефон, адрес, дату рождения, оклад)
•	поиск по имени
•	загрузить / сохранить телефонную книгу в файл (в бинарном виде)
•	выход
*/

struct HRD // Human Resources Department
{
	unsigned int id; // unsigned значит только положительные.
	char full_name[40]; // ФИО
	char address[40]; // адрес
	char age[40]; // возраст в формате 01.01.1990
	char phone_number[40]; // номер телефона
	char salary[40]; // оклад
};

void PrintMenu()
{
	system("cls");
	puts("> Human Resources Department <");
	puts("|     >>> Main Menu <<<      |");
	puts("|     Choose an option:      |"); 
	puts(" ----------------------------\n");
	puts("1 - Add employee."); // employee - сотрудник.
	puts("2 - Delete employee(ID).");
	puts("3 - View info about all employees.");
	puts("4 - Search employee by name.");
	puts("5 - Change employee information.");
	puts("6 - Save the db in binary form.");
	puts("7 - Load db from binary file.");
	puts("0 - Exit.");
}

unsigned int AddEmployee(HRD* humans, unsigned int size, const int MaxSize)
{
	//cin.ignore(); // для корректной работы cin.getline с cin 

	if (size < MaxSize) // чтоб не выйти за пределы массива.
	{
		HRD newHuman; // добавляем новую ячейку структуры.
		newHuman.id = size;

		puts("Enter full name:");
		cin.getline(newHuman.full_name, 39);
		puts("Enter address:");
		cin.getline(newHuman.address, 39);
		puts("Enter age in the format: 01.01.1990 ");
		cin.getline(newHuman.age, 39);
		puts("Enter phone number: ");
		cin.getline(newHuman.phone_number, 39);
		puts("Enter salary: ");
		cin.getline(newHuman.salary, 39);

		humans[size] = newHuman; // добавляем нашего сотрудника в ячейку size массива.
		size++; // и увеличиваем её, чтоб потом добавить нового сотрудника.
		puts("Employee added.");
		system("pause");
	}
	else
		puts("Something wrong!");

	return size; // возвращаем размер массива.
}

unsigned int DeleteEmployee(HRD* humans, size_t size, unsigned int id)
{
	int index = -1;

	for (size_t i = 0; i < size; i++) // ищем указаный id в массиве.
	{
		if (humans[i].id == id)
		{
			index = id;
			break;
		}
	}
	if (index != -1) // если id найден
	{
		for (size_t i = index; i < size; i++) // i = index = id
		{
			humans[i] = humans[i + 1]; // сдвигаем все последующие элементы влево на 1
		}
		size--; // уменьшаем размер массива
		printf("Delete ID %d successfully\n", index);
		system("pause");
		return size;
	}
	else
	{
		puts("Wrong ID!");
		system("pause");
		return size;
	}
}

void ShowAllEmployee(HRD* humans, const size_t size)
{
	printf("\nYou have a %d employee.\n\n", size);
	for (size_t i = 0; i < size; i++)
	{
		printf("Id: %d\n", humans[i].id);
		printf("Full name: %s\n", humans[i].full_name);
		printf("Address: %s\n", humans[i].address);
		printf("Age: %s\n", humans[i].age);
		printf("Phone number: %s\n", humans[i].phone_number);
		printf("Salary: %s\n\n", humans[i].salary);
	}
}

void SearchName(HRD* humans, size_t size, char* name, unsigned int id)
{
	int index = -1;
	for (size_t i = 0; i < size; i++)
	{
		if (strcmp(humans[i].full_name, name) == 0) // если введённое имя найдено
		{
			index = humans[i].id; // присваиваем индексу его айди.
			break;
		}
	}

	if (index != -1)
	{
		printf("Id: %d\n", humans[index].id);
		printf("Full name: %s\n", humans[index].full_name);
		printf("Address: %s\n", humans[index].address);
		printf("Age: %s\n", humans[index].age);
		printf("Phone number: %s\n", humans[index].phone_number);
		printf("Salary: %s\n", humans[index].salary);
		system("pause");
	}
	else
	{
		puts("Wrong name!");
		system("pause");
	}
}

void ChangeEmployeeInfo(HRD* humans, size_t size, unsigned int id)
{  //изменить данные сотрудника(поменять телефон, адрес, дату рождения, оклад)

	int index = -1;
	for (size_t i = 0; i < size; i++) // ищем указаный id в массиве.
	{
		if (humans[i].id == id)
		{
			index = id;
			break;
		}
	}
	if (index != -1)
	{
		
		while (true)
		{
			printf("Id: %d\n", humans[index].id);
			printf("Full name: %s\n", humans[index].full_name);
			printf("Address: %s\n", humans[index].address);
			printf("Age: %s\n", humans[index].age);
			printf("Phone number: %s\n", humans[index].phone_number);
			printf("Salary: %s\n", humans[index].salary);
			system("pause");

			system("cls");
			puts("Select what information needs to be changed.");
			puts("Press 1 to change address.");
			puts("Press 2 to change age.");
			puts("Press 3 to change phone number.");
			puts("Press 4 to change salary.");
			puts("Press 0 to return to the main menu.");

			char ch = _getch(); // _getch() для ввода одного символа.

			if (ch == '0') break;
			if (ch < '0' || ch > '4')
				{
					cout << "error.\n";
					system("pause");
					continue;
				}
			switch (ch)
			{
			case '1':
				puts("Enter a new address:");
				cin.getline(humans[index].address, 39);
				break;
			case '2':
				puts("Enter a new age in the format: 01.01.1990");
				cin.getline(humans[index].age, 39);
				break;
			case '3':
				puts("Enter a new phone number:");
				cin.getline(humans[index].phone_number, 39);
				break;
			case '4':
				puts("Enter a new salary:");
				cin.getline(humans[index].salary, 39);
				break;
			}
		}
	}
	else
	{
		puts("Wrong ID!");
		system("pause");
	}

}

bool SaveDBToFile(HRD* humans, const size_t size, char* fileName)
{
	FILE* file = fopen(fileName, "wb");
	if (file != nullptr)
	{
		fwrite(humans, sizeof(HRD), size, file);
		fclose(file);
		return true;
	}
	else return false;
}

int LoadFromFile(HRD* humans, char* fileName, const unsigned int maxSize)
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
		if (fileSize % sizeof(HRD) != 0 || fileSize / sizeof(HRD) > maxSize)
			return -1;

		// чтение БД из файла
		fread(humans, sizeof(HRD), fileSize / sizeof(HRD), r);
		fclose(r);

		// возвратить новый размер БД (количество заполненных записей)
		return fileSize / sizeof(HRD);
	}
	else return -1;
}

void main()
{
	int size = 0; // размер массива ( текущий )

	const int MaxSize = 100; // макс кол-во сотрудников (размер массива)

	HRD* humans = new HRD[MaxSize]; // динамический массив сотрудников.

	while (true) // бесконечный цикл для работы с меню
	{
		PrintMenu(); // вывод менюшки

		char choice = _getch(); // _getch() для ввода одного символа.
		unsigned int id = 0; // положительный айди
		char fileName[40]; // имя файла для save / load.
		int result; // для загрузки файла.
		char name[40]; // для поиска по имени
		
		switch (choice)
		{
		case '1':
			size = AddEmployee(humans, size, MaxSize);
			break;
		case '2':
			puts("Enter ID of the employee to delete:");
			cin >> id;
			size = DeleteEmployee(humans, size, id);
			break;
		case '3':
			ShowAllEmployee(humans, size);
			system("pause");
			break;
		case '4':
			puts("Enter employee name:");
			cin.getline(name,39);
			SearchName(humans, size, name, id);
			break;
		case '5':
			puts("Enter ID of the employee to change:");
			cin >> id;
			ChangeEmployeeInfo(humans, size, id);
			break;
		case '6':
			puts("Enter file name:");
			cin >> fileName;
			if (SaveDBToFile(humans, size, fileName))
			{
				puts("DB report was saved successfully.");
			}
			else puts("There was an Error during saving report!");
			system("pause");
			break;
		case '7':
			puts("Enter file name:");
			cin >> fileName;

			result = LoadFromFile(humans, fileName, MaxSize);

			if (result > 0)
			{
				size = result;
				puts("DB load was successfully!");
			}
			else puts("There was an Error during loading DB!");
			system("pause");
			break;

		case '0':
			delete[] humans;
			puts("Good bye.");
			return;


		defaut:
			puts("Wrong choice!");
			break;
		}
	}
}