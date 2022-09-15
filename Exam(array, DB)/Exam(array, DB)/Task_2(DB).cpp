#include "pch.h"

/*������ 2 (5 ������)

����������� ��������� "����� ������", ������� ��������� ������� ��������� ���������� � ��������:
�	����� - id
�	��� (���)
�	�����
�	���� ��������
�	�������
�	�����

��������� ������ ������������ ������������ ������ �������� ��� �������� ���� �����������. ��������� ����� ����, � ������� ���� ��������� �������:
�	�������� ���� �����������
�	�������� ����������
�	������� ����������
�	�������� ������ ���������� (�������� �������, �����, ���� ��������, �����)
�	����� �� �����
�	��������� / ��������� ���������� ����� � ���� (� �������� ����)
�	�����
*/

struct HRD // Human Resources Department
{
	unsigned int id; // unsigned ������ ������ �������������.
	char full_name[40]; // ���
	char address[40]; // �����
	char age[40]; // ������� � ������� 01.01.1990
	char phone_number[40]; // ����� ��������
	char salary[40]; // �����
};

void PrintMenu()
{
	system("cls");
	puts("> Human Resources Department <");
	puts("|     >>> Main Menu <<<      |");
	puts("|     Choose an option:      |"); 
	puts(" ----------------------------\n");
	puts("1 - Add employee."); // employee - ���������.
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
	//cin.ignore(); // ��� ���������� ������ cin.getline � cin 

	if (size < MaxSize) // ���� �� ����� �� ������� �������.
	{
		HRD newHuman; // ��������� ����� ������ ���������.
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

		humans[size] = newHuman; // ��������� ������ ���������� � ������ size �������.
		size++; // � ����������� �, ���� ����� �������� ������ ����������.
		puts("Employee added.");
		system("pause");
	}
	else
		puts("Something wrong!");

	return size; // ���������� ������ �������.
}

unsigned int DeleteEmployee(HRD* humans, size_t size, unsigned int id)
{
	int index = -1;

	for (size_t i = 0; i < size; i++) // ���� �������� id � �������.
	{
		if (humans[i].id == id)
		{
			index = id;
			break;
		}
	}
	if (index != -1) // ���� id ������
	{
		for (size_t i = index; i < size; i++) // i = index = id
		{
			humans[i] = humans[i + 1]; // �������� ��� ����������� �������� ����� �� 1
		}
		size--; // ��������� ������ �������
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
		if (strcmp(humans[i].full_name, name) == 0) // ���� �������� ��� �������
		{
			index = humans[i].id; // ����������� ������� ��� ����.
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
{  //�������� ������ ����������(�������� �������, �����, ���� ��������, �����)

	int index = -1;
	for (size_t i = 0; i < size; i++) // ���� �������� id � �������.
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

			char ch = _getch(); // _getch() ��� ����� ������ �������.

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
		if (fileSize % sizeof(HRD) != 0 || fileSize / sizeof(HRD) > maxSize)
			return -1;

		// ������ �� �� �����
		fread(humans, sizeof(HRD), fileSize / sizeof(HRD), r);
		fclose(r);

		// ���������� ����� ������ �� (���������� ����������� �������)
		return fileSize / sizeof(HRD);
	}
	else return -1;
}

void main()
{
	int size = 0; // ������ ������� ( ������� )

	const int MaxSize = 100; // ���� ���-�� ����������� (������ �������)

	HRD* humans = new HRD[MaxSize]; // ������������ ������ �����������.

	while (true) // ����������� ���� ��� ������ � ����
	{
		PrintMenu(); // ����� �������

		char choice = _getch(); // _getch() ��� ����� ������ �������.
		unsigned int id = 0; // ������������� ����
		char fileName[40]; // ��� ����� ��� save / load.
		int result; // ��� �������� �����.
		char name[40]; // ��� ������ �� �����
		
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