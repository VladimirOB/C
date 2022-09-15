#include "pch.h"

void Selection_Sort2(int* letter, long size)
{
    long i, j, k;
    int x;

    // i - ����� �������� ����.
    for (i = 0; i < size; i++)
    {
        k = i;
        x = letter[i];

        //���� ������ ����������� �������� �������.
        for (j = i + 1; j < size; j++) // j ����� ���� ����
        {
            if (letter[j] < x) // x ������� ���
            {
                // k - ������ ����������� ��������
                k = j;
                x = letter[j];
            }
        }

        // ������ �������� ���������� ������� � [i] 
        letter[k] = letter[i];
        letter[i] = x;

        // ������������� ���������
        //Print(letter, size);
    }
}