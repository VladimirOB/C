#include "pch.h"

//1. ������������ ������ ��� �����, ��������� ������������ ���������� ���� � ����� (����� ��������� ���������)
// 15 �����.
void main()
{
	int flag = 0;
	int word = 0;
	char filename[40];
	cout << "Enter file name for reading: ";
	cin.getline(filename, 39);

	FILE* f = NULL;

	f = fopen(filename, "r");

	//���� ���� ������� �������
	if (f != NULL)
	{
		char str[100] = "";


		// ���� �� ���������� ����� ����� !feof(f)
		//������ ����� ������ �� �����

		while (!feof(f))
		{
			//������� ������� ����������� ������
			strcpy(str, "");

			fgets(str, 99, f);
			// �������� �������� �� ����� ������
			if (str[strlen(str) - 1] == 10)
				str[strlen(str) - 1] = 0;
			/*if (str[strlen(str) - 1] != 32)
				str[strlen(str) - 1] = ' ';*/
			
			int i = 0;
			while (str[i] == ' ' && str[i] != '\0')

			i++;

			while (str[i] != '\0')
			{
				if (str[i] != ' ' && flag == 0)
				{ 
			      flag = 1; 
				  word++; 
				}
				else if (str[i] == ' ') 
				{ 
					flag = 0; 
				}
				i++;
			}

			cout << str << endl;

		}
		
		cout << "Number of words = " << word << endl;
		//�������� �����.
		fclose(f);
	}
}