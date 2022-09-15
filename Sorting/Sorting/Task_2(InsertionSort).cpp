#include "pch.h"

void InsertionSort2(int* letter, int size)
{
    int i, j, k, temp;

    //���� �� ���� ��������� �������
    for (i = 1; i < size; i++)
    {
        // ������� �������, ��� �������� ���� �������.
        temp = letter[i];

        // ����� ���������� ������� ( j - ������� ������ )
        for (j = 0; j < i; j++)
        {
            if (letter[j] > temp) break;
        }

        if (j == i) continue; // ����� �� ���� �����.

        // �������� ����� - �������
        for (k = i; k > j; k--)
            letter[k] = letter[k - 1];
        // ������ ������� � ���������� �������.
        letter[j] = temp;

        // ������������� ���������
        //Print(letter, size);
    }
}