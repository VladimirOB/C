//#include "pch.h" 
//#include "task_2(func).h"
/////*2. пользователь вводит строку, программа сортирует все символы строки в алфавитном порядке и выводит отсортированную
////строку на экран (hello -> ehllo)*/
////
/////// вывод результата
/////// <param name="letter"></param>
/////// <param name="size"></param>
////void print2(int* letter, int size);
////
/////// пузырьковая сортировка.
/////// <param name="letter">массив кода букв</param>
/////// <param name="size">размер массива</param>
////void bubble_sort2(int* letter, int size);
////
/////// сортировка выбором.
/////// <param name="letter">массив кода букв</param>
/////// <param name="size">размер массива</param>
////void selection_sort2(int* letter, long size);
////
/////// сортировка вставками.
/////// <param name="letter">массив кода букв</param>
/////// <param name="size">размер массива</param>
////void insertionsort2(int* letter, int size);
////
/////// быстрая сотрировка.
/////// <param name="letter"></param>
/////// <param name="start"></param>
/////// <param name="end"></param>
////void qsort2(int* letter, int start, int end);
////
////void quicksort2(int* letter, int size);
////
//int main(void)
//{
//	char str[100];
//	puts("enter a string: ");
//	cin >> str; 
//    //int letter[100]; // массив содержащий коды к буквам.
//    //int pos = 0;
//    /*for (int j = 0; str[j] != 0; j++)
//    {
//        if (str[j] >= 'a' && str[j] <= 'z')
//        {
//            letter[pos] = str[j]-97;
//            pos++;
//        }
//    }
//    cout << endl;*/
//    for (int i = 0; i < strlen(str)-1; i++)
//    {
//        for (int j = i; j < strlen(str)-1; j++)
//        {
//            if (str[i] > str[j] +1)
//                swap(str[i], str[j+1]); // криво работает.
//        }
//    }
//        cout << str;
//    
//
//    //bubble_sort2(letter, pos); 
//    //selection_sort2(letter, pos);
//    //insertionsort2(letter, pos);
//    //quicksort2(letter, pos);
//    //print2(letter, pos);
//}