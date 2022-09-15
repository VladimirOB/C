//#include "pch.h"
//
//struct Car
//{
//	unsigned int Id;
//	char SerialNumber[20];
//	char Brand[20];
//	char Model[20];
//	char Owner[40];
//	unsigned int Year;
//	double Price;
//};
//
//void PrintMenu()
//{
//	system("cls");
//	//cout << sizeof(Car) << endl;
//	cout << "Choose an option, please:" << endl;
//	cout << "1 - Add a car" << endl;
//	cout << "2 - Show all cars" << endl;
//	cout << "3 - Delete a car" << endl;
//	cout << "4 - View a car" << endl;
//	cout << "5 - Save to file" << endl;
//	cout << "6 - Load from file" << endl;
//	cout << "7 - Exit" << endl;
//	cout << endl;
//}
//
//unsigned int AddCar(Car* cars, unsigned int size, const int MaxSize)
//{
//	cin.ignore();
//
//	// ���� ���� ��������� ����� � ������� �����������
//	if (size < MaxSize)
//	{
//		Car newCar;
//		newCar.Id = size;
//
//		cout << "Enter the serial number of the car:" << endl;
//		cin >> newCar.SerialNumber;
//		cout << "Enter the brand of the car:" << endl;
//		cin >> newCar.Brand;
//		cout << "Enter the model of the car:" << endl;
//		cin >> newCar.Model;
//		cout << "Enter the owner of the car:" << endl;
//		cin >> newCar.Owner;
//		cout << "Enter the year of the car:" << endl;
//		cin >> newCar.Year;
//		cout << "Enter the price of the car:" << endl;
//		cin >> newCar.Price;
//
//		cars[size] = newCar;
//		size++;
//	}
//	else cout << "There is no enough space for adding a new car!" << endl;
//
//	return size;
//}
//
//void PrintCars(Car* cars, const size_t size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << "Id: " << cars[i].Id << endl;
//		cout << "Serial number: " << cars[i].SerialNumber << endl;
//		cout << "Brand:" << cars[i].Brand << endl;
//		cout << "Model: " << cars[i].Model << endl;
//		cout << "Owner:" << cars[i].Owner << endl;
//		cout << "Year: " << cars[i].Year << endl;
//		cout << "Price:" << cars[i].Price << endl;
//		cout << endl;
//	}
//	cout << endl << "Press any key..." << endl;
//	_getch();
//}
//
//// �������� ���������� �� ������� ������� �� 1 ������� �����
//unsigned int DeleteCar(Car* cars, size_t size, unsigned int id)
//{
//	int index = -1;
//
//	// ����� ���������� �������� � ��������� id
//	for (size_t i = 0; i < size; i++)
//	{
//		if (cars[i].Id == id)
//		{
//			index = id;
//			break;
//		}
//	}
//
//	// �������� ������� �� ���� ������ ���� ����������� �������� ����� �� 1
//	if (index != -1)
//	{
//		for (size_t i = index; i < size; i++)
//		{
//			cars[i] = cars[i + 1];
//		}
//		size--;
//		return size;
//	}
//	else // ��������� ������� �� ������
//	{
//		cout << "Wrong Id!" << endl;
//		cout << endl << "Press any key..." << endl;
//		_getch();
//		return size;
//	}
//}
//
//void ShowCar(Car* cars, const size_t size, const unsigned int id)
//{
//	// ����� ������� ���������� ��������
//	int index = -1;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (cars[i].Id == id)
//		{
//			index = id;
//			break;
//		}
//	}
//
//	// ���� ������� ������
//	if (index != -1)
//	{
//		cout << "Id: " << cars[index].Id << endl;
//		cout << "Serial number: " << cars[index].SerialNumber << endl;
//		cout << "Brand:" << cars[index].Brand << endl;
//		cout << "Model: " << cars[index].Model << endl;
//		cout << "Owner:" << cars[index].Owner << endl;
//		cout << "Year: " << cars[index].Year << endl;
//		cout << "Price:" << cars[index].Price << endl;
//		cout << endl;
//		cout << endl << "Press any key..." << endl;
//		_getch();
//	}
//	else
//	{
//		cout << "Wrong Id!" << endl;
//		cout << endl << "Press any key..." << endl;
//		_getch();
//	}
//}
//
//bool SaveToFile(Car* cars, const size_t size, char* fileName)
//{
//	FILE* file = fopen(fileName, "wb");
//	if (file != nullptr)
//	{
//		fwrite(cars, sizeof(Car), size, file);
//		fclose(file);
//		return true;
//	}
//	else return false;
//}
//
//// ��������� ������ �� ����� � ���������� ���������� ����������� ������� (-1 � ������ ����)
//int LoadFromFile(Car* cars, char* fileName, const unsigned int maxSize)
//{
//	// �������� ����� � �������� ��� ������
//	FILE* file = fopen(fileName, "rb");
//
//	// �������� �� ���������� �������� �����
//	if (file != nullptr)
//	{
//		// �������� ������ �����
//		fseek(file, 0, SEEK_END);
//		long fileSize = ftell(file);
//		fseek(file, 0, SEEK_SET);
//
//		// ���� ������ ����� �� ���������� (�� ������� ������� ��������� ��� ������ ��������� ��)
//		if (fileSize % sizeof(Car) != 0 || fileSize / sizeof(Car) > maxSize)
//			return -1;
//
//		// ������ �� �� �����
//		fread(cars, sizeof(Car), fileSize / sizeof(Car), file);
//		fclose(file);
//
//		// ���������� ����� ������ �� (���������� ����������� �������)
//		return fileSize / sizeof(Car);
//	}
//	else return -1;
//}
//
//void main()
//{
//	// ������� ������ �������
//	int size = 0;
//
//	// ������������ ������ �������
//	const int MaxSize = 40000;
//
//	// ������������ ������ �����������
//	Car* cars = new Car[MaxSize];
//
//	// �������� ���� ��������� ��� ������ � ����
//	while (true)
//	{
//		// ����� ����
//		PrintMenu();
//
//		// ���� ������ ������� � ����������
//		char choice = _getch();
//		unsigned int id = 0;
//		char fileName[40];
//		int result;
//
//		// ������ ����� ������������
//		switch (choice)
//		{
//		case '1':
//			size = AddCar(cars, size, MaxSize);
//			break;
//		case '2':
//			PrintCars(cars, size);
//			break;
//		case '3':
//			cout << "Enter Id of the car to delete:" << endl;
//			cin >> id;
//			size = DeleteCar(cars, size, id);
//			break;
//		case '4':
//			cout << "Enter Id of the car to show:" << endl;
//			cin >> id;
//			ShowCar(cars, size, id);
//			break;
//		case '5':
//			cout << "Enter file name:" << endl;
//			cin >> fileName;
//			if (SaveToFile(cars, size, fileName))
//			{
//				cout << "Database was saved successfully!";
//			}
//			else cout << "There was an ERROR during saving database!!!" << endl;
//
//			cout << endl << "Press any key..." << endl;
//			_getch();
//			break;
//		case '6':
//			cout << "Enter file name:" << endl;
//			cin >> fileName;
//
//			result = LoadFromFile(cars, fileName, MaxSize);
//			if (result > 0)
//			{
//				size = result;
//				cout << "Database was saved successfully!";
//			}
//			else cout << "There was an ERROR during loading database!!!" << endl;
//
//			cout << endl << "Press any key..." << endl;
//			_getch();
//			break;
//		case '7':
//			delete[] cars;
//			return;
//		}
//	}
//}
//


//bool SaveDBReport(Cat* cats, const size_t size, char* fileName)
//{
//	FILE* w = fopen(fileName, "w");
//	fprintf(w, "_____________________________________________________________________\n");
//	fprintf(w, "|ID  |AGE  |PRICE|HAIR |NAME   |BREED  |ADDRESS|OWNER  |\n");
//	fprintf(w, "_____________________________________________________________________\n");
//	if (w != NULL)
//	{
//		for (int i = 0; i < size; i++)
//		{
//
//			fprintf(w, " %d  ", cats[i].id);
//			fprintf(w, " %d  ", cats[i].age);
//			fprintf(w, "  %d ", cats[i].price);
//			fprintf(w, " %d  ", cats[i].hair);
//			int lenname = strlen(cats[i].name);
//			if (lenname > 5)
//				fprintf(w, "%s    ", cats[i].name);
//			fprintf(w, "%s    ", cats[i].breed);
//			fprintf(w, "%s    ", cats[i].address);
//			fprintf(w, "%s    \n", cats[i].owner);
//		}
//		fclose(w);
//		return true; // �.�. ������� ��������� ���������� ��� (���� ��������� �����)
//	}
//	else return false;
//}