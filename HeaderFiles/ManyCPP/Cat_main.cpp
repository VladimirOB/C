//#include "pch.h"
//#include "Cat.h"
//
//void PrintMenu(); // Cat_PrintMenu
//
//unsigned int AddCat(Cat* cats, unsigned int size, const int MaxSize);
//
//unsigned int DeleteCat(Cat* cats, size_t size, unsigned int id);
//
//void ShowCat(Cat* cats, const size_t size, const unsigned int id);
//
//void SearchName(Cat* cats, size_t size, char* name, unsigned int id);
//
//void SearchAge(Cat* cats, size_t size, unsigned int startAge, unsigned int endAge, unsigned int id);
//
//void SearchAddress(Cat* cats, size_t size, char* address, unsigned int id);
//
//bool SaveDBReport(Cat* cats, const size_t size, char* fileName);
//
//bool SaveDBToFile(Cat* cats, const size_t size, char* fileName);
//
//int LoadFromFile(Cat* cats, char* fileName, const unsigned int maxSize);
//
//void ShowAllCats(Cat* cats, const size_t size);
//
//void main()
//{
//	int size = 0; // размер массива ( текущий )
//
//	const int MaxSize = 100; // макс кол-во котов (размер массива)
//
//	Cat* cats = new Cat[MaxSize]; // динамический массив котов.
//
//	while (true) // бесконечный цикл для работы с меню
//	{
//		PrintMenu(); // вывод менюшки
//
//		char choice = _getch(); // _getch() для ввода одного символа.
//		unsigned int id = 0; // положительный айди
//		char fileName[40]; // имя файла для save / load.
//		int result; // для загрузки файла.
//		char name[40]; // для поиска по имени
//		char address[40]; // для поиска по адресу
//		int startAge; // для начала поиска по возрасту
//		int endAge; // для окончания поиска по возрасту
//		switch (choice)
//		{
//		case '1':
//			size = AddCat(cats, size, MaxSize);
//			break;
//		case '2':
//			puts("Enter ID of the cat to delete:");
//			cin >> id;
//			size = DeleteCat(cats, size, id);
//			break;
//		case '3':
//			puts("Enter ID of the cat to show:");
//			cin >> id;
//			ShowCat(cats, size, id);
//			break;
//		case '4':
//			puts("Enter cat name:");
//			cin >> name;
//			SearchName(cats, size, name, id);
//			break;
//		case '5':
//			puts("Enter a range of ages in the format from and to: ");
//			puts("Enter the beginning of the ages: ");
//			cin >> startAge;
//			puts("Enter the end of the ages: ");
//			cin >> endAge;
//			SearchAge(cats, size, startAge, endAge, id);
//			break;
//		case '6':
//			puts("Enter cat address:");
//			cin >> address;
//			SearchAddress(cats, size, address, id);
//			break;
//		case '7':
//			puts("Enter file name:");
//			cin >> fileName;
//			if (SaveDBReport(cats, size, fileName))
//			{
//				puts("DB report was saved successfully.");
//			}
//			else puts("There was an Error during saving report!");
//			system("pause");
//			break;
//		case '8':
//			puts("Enter file name:");
//			cin >> fileName;
//			if (SaveDBToFile(cats, size, fileName))
//			{
//				puts("DB report was saved successfully.");
//			}
//			else puts("There was an Error during saving report!");
//			system("pause");
//			break;
//		case '9':
//			puts("Enter file name:");
//			cin >> fileName;
//
//			result = LoadFromFile(cats, fileName, MaxSize);
//
//			if (result > 0)
//			{
//				size = result;
//				puts("DB load was successfully!");
//			}
//			else puts("There was an Error during loading DB!");
//			system("pause");
//			break;
//		case 'a':
//			ShowAllCats(cats, size);
//			system("pause");
//			break;
//		case '0':
//			delete[] cats;
//			puts("Good bye.");
//			return;
//
//
//		defaut:
//			puts("Wrong choice!");
//			break;
//		}
//	}
//}