#include "pch.h"
#include "Cat.h"

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