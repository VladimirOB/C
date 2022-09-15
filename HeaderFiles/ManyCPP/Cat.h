
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
