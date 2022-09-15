#include "pch.h"

int main()
{
	int a = 5;
	int b = 3;
	int c = a + b;
	cout << c << endl;

	//printf(__FILE__); // адрес текущего cpp 

	char ch;
	FILE* r = fopen("Print_Source_Code.cpp", "r");
	
	if (r == NULL)
	{
		puts("File is not open!");
	}
	else
	{
		int file_size;
		fseek(r, 0, SEEK_END);
		file_size = ftell(r);
		char* buffer = new char[file_size];
		if (buffer != NULL)
		{
			fseek(r, 0, SEEK_SET);
			fread(buffer, (sizeof(char)), file_size, r);
			for (size_t i = 0; i < file_size; i++)
			{
				cout << buffer[i];
			}
		}
		fclose(r);
	}
}