#include "pch.h"

void InsertionSort2(int* letter, int size)
{
    int i, j, k, temp;

    //цикл по всем элементам массива
    for (i = 1; i < size; i++)
    {
        // текущий элемент, для которого ищем позицию.
        temp = letter[i];

        // поиск правильной позиции ( j - искомый индекс )
        for (j = 0; j < i; j++)
        {
            if (letter[j] > temp) break;
        }

        if (j == i) continue; // стоит на своём месте.

        // смещение слева - направо
        for (k = i; k > j; k--)
            letter[k] = letter[k - 1];
        // ставим элемент в правильную позицию.
        letter[j] = temp;

        // промежуточный результат
        //Print(letter, size);
    }
}