#include "pch.h"

void Print2(int* letter, int size)
{
    char result[100];
    for (size_t i = 0; i < size; i++)
    {
        result[i] = letter[i] + 97;
        cout << result[i];
    }
    cout << endl;
}