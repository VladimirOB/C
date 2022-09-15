#include "pch.h"

void Bubble_Sort2(int* letter, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = size - 1; j >= i; j--)
        {
            if (letter[j - 1] > letter[j])
            {
                int temp = letter[j - 1];
                letter[j - 1] = letter[j];
                letter[j] = temp;
            }
        }
    }
}