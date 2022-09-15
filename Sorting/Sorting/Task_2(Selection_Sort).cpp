#include "pch.h"

void Selection_Sort2(int* letter, long size)
{
    long i, j, k;
    int x;

    // i - номер текущего шага.
    for (i = 0; i < size; i++)
    {
        k = i;
        x = letter[i];

        //цикл выбора наименьшего элемента массива.
        for (j = i + 1; j < size; j++) // j номер след шага
        {
            if (letter[j] < x) // x текущий шаг
            {
                // k - индекс наименьшего элемента
                k = j;
                x = letter[j];
            }
        }

        // меняем местеами наименьший элемент с [i] 
        letter[k] = letter[i];
        letter[i] = x;

        // промежуточный результат
        //Print(letter, size);
    }
}