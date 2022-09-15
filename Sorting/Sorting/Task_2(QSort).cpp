#include "pch.h"

void QSort2(int* letter, int start, int end)
{
    // � ������ ������������ ������ - �����
    if (start >= end) return;
    int i = start, j = end;

    // ������� �������� �������
    int baseElementIndex = start + (end - start) / 2;

    // ���� ������ ����� ����� ������ ������
    while (i < j)
    {
        // �������� ������ ��������
        int value = letter[baseElementIndex];

        // ���������� ���. ����� ����� �����, ���� �� ���������� ������� �������
        while (i < baseElementIndex && (letter[i] <= value))i++;

        // ���������� ������ ������ ����� ������� �����, ���� �� ���������� ������� ��������� �������
        while (j > baseElementIndex && (letter[j] >= value))j--;

        // i, j - ������� ���������, ������� ����� �������� �������
        // ���� ������ ���������� (���� ����� ������ ���������)
        if (i < j)
        {
            int temp = letter[i];
            letter[i] = letter[j];
            letter[j] = temp;

            //Print(letter, size);

            // ������������� �������� ��������
            if (i == baseElementIndex) baseElementIndex = j;
            else if (j == baseElementIndex) baseElementIndex = i;
        }
    }
    // ����������� ���������� ����� � ������ ������ �������
    QSort2(letter, start, baseElementIndex);
    QSort2(letter, baseElementIndex + 1, end);

}

void QuickSort2(int* letter, int size)
{
    QSort2(letter, 0, size - 1);
}