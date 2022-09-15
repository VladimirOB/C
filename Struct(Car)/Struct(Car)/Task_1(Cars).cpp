#include "pch.h"
#define COUT cout << "Welcome to Garage menu.\n\nPress 1 to add a new car.\nPress 2 to view all cars\nPress 3 to delete car by ID\nPress 4 to view car info by ID\nPress 5 to save car's.\nPress 6 to load car's.\nPress 7 to exit" << endl;
/*1. Разрабоать программу Garage, которая позволяет хранить информацию об автомобилях. Данные об одном авто:
- id авто
- Brand
- Model
- MaxSpeed
- Price
- Address
- Owner (владелец)

Программа имеет экранное меню со следующими пунктами:
- добавить авто
- просмотр всех авто
- удалить авто по id
- просмотр инфо об одном авто по id
- сохранить БД в текстовый файл
- загрузить БД с автомобилями из текстового файла

Реализовать задачу при помощи динамического массива структур и функций.*/

// объявление пользовательского типа данных cars
struct cars
{
	char brand[40];
	char model[40];
	char address[40];
	char owner[40];
	int id;
	int maxSpeed;
	int price;
};
void CheckID(cars* car, int size)
{
		cin >> car[size].id;
		for (int i = 0; i < size; i++)
		{
			while(car[size].id == car[i].id)
			{
				cout << "This ID is already in use. Enter another ID. " << endl;
				cin >> car[size].id;
				if (car[size].id != car[i].id)
					break;
			}

		}
}
// ввод информации об одном автомобиле и добавление её в конец массива
void EnterCar(cars* car, int size)
{		
		cout << "Enter brand: ";
		cin >> car[size].brand;

		cout << "Enter model: ";
		cin >> car[size].model;

		cout << "Enter address: ";
		cin >> car[size].address;

		cout << "Enter owner: ";
		cin >> car[size].owner;

		cout << "Enter id: ";
		//cin >> car[size].id;
		CheckID(car, size);
		cout << "Enter maxSpeed: ";
		cin >> car[size].maxSpeed;

		cout << "Enter price: ";
		cin >> car[size].price;

		cout << endl;
}
//вывод списка авто
void PrintCarList(cars* car, int size)
{
	cout << "In garage " << size << " auto.\n" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Brand: " << car[i].brand << endl;
		cout << "Model: " << car[i].model << endl;
		cout << "Adrress: " << car[i].address << endl;
		cout << "Owner: " << car[i].owner << endl;
		cout << "ID: " << car[i].id << endl;
		cout << "MaxSpeed: " << car[i].maxSpeed << endl;
		cout << "Price: " << car[i].price << endl;
		cout << endl;
	}
}

void Save(cars* car, int size)
{
	FILE* w = fopen("Cars.txt", "w");
	fprintf(w, "%d\n\n",size);
	for (int i = 0; i < size; i++)
	{
		fprintf(w, "%s\n", car[i].brand);
		fprintf(w, "%s\n", car[i].model);
		fprintf(w, "%s\n", car[i].address);
		fprintf(w, "%s\n", car[i].owner);
		fprintf(w, "%d\n", car[i].id);
		fprintf(w, "%d\n", car[i].maxSpeed);
		fprintf(w, "%d\n\n", car[i].price);
	}
	fclose(w);
}
////rewind(r); // перемещает указатель положения в файле на начало указанного потока. Она также сбрасывает флаги конца файла и ошибки, связанные со stream.
void Load(cars* car, int &size)
{	
	FILE* r = fopen("Cars.txt", "r");
	fscanf(r, "%d", &size);
	if (r != NULL)
	{
		for (int i = 0; i < size; i++)
			{
			    fscanf(r, "%s", car[i].brand);
			    fscanf(r, "%s", car[i].model);
			    fscanf(r, "%s", car[i].address);
			    fscanf(r, "%s", car[i].owner);
			    fscanf(r, "%d", &car[i].id);
			    fscanf(r, "%d", &car[i].maxSpeed);
			    fscanf(r, "%d", &car[i].price);
			}
		fclose(r);
	}
}
bool flag = false;

void Search(cars* car, int size)
{
	int ID;
	cin >> ID;
	for (int i = 0; i < size; i++)
	{
		if (ID == car[i].id)
		{
			cout << "Brand: " << car[i].brand << endl;
			cout << "Model: " << car[i].model << endl;
			cout << "Adrress: " << car[i].address << endl;
			cout << "Owner: " << car[i].owner << endl;
			cout << "ID: " << car[i].id << endl;
			cout << "MaxSpeed: " << car[i].maxSpeed << endl;
			cout << "Price: " << car[i].price << endl;
			cout << endl;
			flag = true;
		}
	}
	if (!flag)
		cout << "This ID not found." << endl;
}

void Del(cars* car, int size)
{
	int ID;
	cin >> ID;
	for (int i = 0; i < size; i++)
	{
		if (ID == car[i].id)
		{
			memset(&car[i], 0, sizeof(cars)); // memset делает из всего 0.
			cout << "You Delete - " << ID <<" ID"<< endl;
			flag = true;
		}
	}
	if (!flag)
		cout << "This ID not found." << endl;
}

void Sortirovka(cars* car, int size)
{
	for (int i = 0; i < size; i++)
		{
			if (car[i].id == 0 )
			{
				swap(car[i], car[size]); // кидаем пустой контейнер в конец и удаляем.
			}
		}
}

int main()
{system("COLOR 89");

	int MaxCarCount=10;
	int PrintCnt = 0;
	int auto_size = 0;
	struct cars* car = new cars[MaxCarCount];
	int menu;
	while (true)
	{
		COUT // #define на меню.
		cin >> menu;
		switch (menu)
		{
		case 1:
			PrintCnt++;
			EnterCar(car, auto_size);
			auto_size++;
			cout << "You added a new car." << endl; 
			system("pause");
			system("cls");
			break;

		case 2:
			cout << "Welcome to Garage list.\n"; 
			Sortirovka(car, auto_size);
			PrintCarList(car, PrintCnt);
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "Enter the ID of the car you want to delete: " << endl; 
			Del(car, auto_size);
			if (flag)
			{
				auto_size--;
				PrintCnt--;
				flag = false; // флаг для проверки найден ли айди.
			}
			system("pause");
			system("cls");
			break;

		case 4:
			cout << "Enter the ID of the car you want to see" << endl; // done
			Search(car, auto_size);
			flag = false;
			system("pause");
			system("cls");
			break;

		case 5:
			Save(car, auto_size);
			cout << "Save successfully."<< endl; // done
			system("pause");
			system("cls");
			break;

		case 6:
			Load(car, auto_size);
			cout << "Load successfully." << endl;
			PrintCnt = auto_size;
			system("pause");
			system("cls");
			break;

		case 7:
			return 0;
			break;

		default:
			cout << "Error.";
			break;
		}

	}
	delete[] car;
}
