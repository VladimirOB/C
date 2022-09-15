#include "pch.h"

void QSort2(int* letter, int start, int end)
{
    // в случае неправильных данных - выйти
    if (start >= end) return;
    int i = start, j = end;

    // выбрать середину массива
    int baseElementIndex = start + (end - start) / 2;

    // пока индекс левой части меньше правой
    while (i < j)
    {
        // значение погран элемента
        int value = letter[baseElementIndex];

        // перемещаем инд. левой части вперёд, пока не встретится большой элемент
        while (i < baseElementIndex && (letter[i] <= value))i++;

        // перемещать индекс правой части массива назад, пока не встретится слишком маленький элемент
        while (j > baseElementIndex && (letter[j] >= value))j--;

        // i, j - индексы элементов, которые нужно поменять местами
        // если индесы правильные (есть смысл обмена элементов)
        if (i < j)
        {
            int temp = letter[i];
            letter[i] = letter[j];
            letter[j] = temp;

            //Print(letter, size);

            // корректировка базового элемента
            if (i == baseElementIndex) baseElementIndex = j;
            else if (j == baseElementIndex) baseElementIndex = i;
        }
    }
    // рекурсивная сортировка левой и правой частей массива
    QSort2(letter, start, baseElementIndex);
    QSort2(letter, baseElementIndex + 1, end);

}

void QuickSort2(int* letter, int size)
{
    QSort2(letter, 0, size - 1);
}