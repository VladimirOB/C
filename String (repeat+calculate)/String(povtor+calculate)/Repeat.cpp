#include "pch.h"

int main()
{
char str[400];
cin.getline(str, 399);

for (int i = 0; i < str[i] != 0; i++)
{
    for (int j = i + 1; j < str[j] != 0; j++)
    {
        if (str[i] == str[j])
            str[j] = ' ';
    }
}
cout << "OTBET" << endl;
cout << str;

return 0;
}



//char* removeDuplicate(char str[], int n)
//{
//    // ������������ ��� ������ � ���������� ������ 
//    int cnt = 0;
//    // �������� �� ���� 
//    for (int i = 0; i < n; i++) 
//    {
//        int j;
//
//        for (j = 0; j < i; j++)
//            if (str[i] == str[j])
//                break;
//        if (j == i)
//            str[cnt++] = str[i];
//    }
//    return str;
//}
//int main()
//{
//    char str[400];
//    cin.getline(str, 399);
//    int n = sizeof(str) / sizeof(str[0]);
//    cout << removeDuplicate(str, n);
//    return 0;
//}

//� �����, ��� std::unique ����� ��������, ���� ���� ���� ������ �� �������������, ������ ��� ���, ��� ��� �������, -��� ���������������� ���������.
//
//�������, �� �� ����� �����, ��� / ����� �������� ����������� ��������, � �� ������ ����������, ��� ����� ������, 
//���������� ������� �����, ����� ���������� ���������� �� ��������� �����, ��������, �������.
//
//��� ���� O(N), �� ����� ������ ��������.
//
//���� ��������, ������� ����� ������ ��������, -��� std::remove_if, ������ ��� �� ������ �������� ���� ����������� ��������, 
//������� ����� ��������� ���������, ����� �� ����, ����� ��� ��������� ������.

