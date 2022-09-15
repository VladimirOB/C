
struct Cat
{
	unsigned int id; // unsigned значит только положительные.
	unsigned int age; // возраст
	int price; // стоимость
	int hair; // кол-во волос
	char name[40]; // имя
	char breed[40]; // порода
	char address[40]; // адрес
	char owner[40]; // владелец

};

void PrintMenu();

unsigned int AddCat(Cat* cats, unsigned int size, const int MaxSize);

unsigned int DeleteCat(Cat* cats, size_t size, unsigned int id);

void ShowCat(Cat* cats, const size_t size, const unsigned int id);

void SearchName(Cat* cats, size_t size, char* name, unsigned int id);

void SearchAge(Cat* cats, size_t size, unsigned int startAge, unsigned int endAge, unsigned int id);

void SearchAddress(Cat* cats, size_t size, char* address, unsigned int id);

bool SaveDBReport(Cat* cats, const size_t size, char* fileName);

bool SaveDBToFile(Cat* cats, const size_t size, char* fileName);

int LoadFromFile(Cat* cats, char* fileName, const unsigned int maxSize);

void ShowAllCats(Cat* cats, const size_t size);
