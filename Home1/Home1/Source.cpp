#include <iostream>
using namespace std;
//1. Пользователь вводит 7 чисел, программа находит и минимум и максимум чисел.

/*int main()
{
    /*int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, min, max;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c :";
    cin >> c;
    cout << "Enter d :";
    cin >> d;
    cout << "Enter e :";
    cin >> e;
    cout << "Enter f :";
    cin >> f;
    cout << "Enter g :";
    cin >> g;

     max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    if (max < d) max = d;
    if (max < e) max = e;
    if (max < f) max = f;
    if (max < g) max = g;
    cout << "Max = " <<  max << endl;
    min = a;
    if (max > b) max = b;
    if (max > c) max = c;
    if (max > d) max = d;
    if (max > e) max = e;
    if (max > f) max = f;
    if (max > g) max = g;
    cout << "Min = " << min << endl;*/

    // 2. Пользователь вводит 5 чисел, программа выводит "YESS", если все они являются положительными числами

    /*int a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter c :";
    cin >> c;
    cout << "Enter d :";
    cin >> d;
    cout << "Enter e :";
    cin >> e;

    if (a >= 0 && b >= 0 && c >= 0 && d >= 0 && e >= 0)
        cout << "\nYES" << endl;*/

        //3. Пользователь вводит 4 числа, программа выводит "YESS", если все они являются нечётными числами

        /*int a = 0, b = 0, c = 0, d = 0;
        cout << "Enter a :";
        cin >> a;
        cout << "Enter b :";
        cin >> b;
        cout << "Enter c :";
        cin >> c;
        cout << "Enter d :";
        cin >> d;

        if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0)
            cout << "\nYES" << endl;
            */

            //For 1. Даны целые числа K и N (N > 0). Вывести N раз число K.

            /*int k, n;
            cout << "Enter k :";
            cin >> k;
            cout << "Enter n :";
            cin >> n;

            for (int i = 0; i < n; ++i)
                cout << k << endl;*/


                //For 2.  Даны два целых числа A и B (A < B). Вывести в порядке возрастания все целые числа, расположенные между A и B (включая сами числа A и B), а также количество N этих чисел.
            /*
            int a, b;
            cout << "A = ";
            cin >> a;
            cout << "B = ";
            cin >> b;
            int i;
            for (int i = a; i <= b; i++)

                cout << i << endl;
                cout << "N =" << b - a + 1 << endl;*/


                //For 3. Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа, расположенные между A и B (не включая числа A и B), а также количество N этих чисел.

               /* int a, b;
                cout << "A = ";
                cin >> a;
                cout << "B = ";
                cin >> b;
                int i;
                for (int i = b-1; i > a; i--)
                    cout << i << endl;
                cout << "N = " << b - a -1  << endl;*/


                //For 7. Даны два целых числа A и B (A < B). Найти сумму всех целых чисел от A до B включительно.

                /* int a, b;
                 cout << "A =";
                 cin >> a;
                 cout << "B = ";
                 cin >> b;
                 int sum = 0;
                 for (int i = a; i <= b; ++i)

                     sum = sum + i;
                 cout << "Sum = " << sum;
                 return 0;*/

                 //For 8. Даны два целых числа A и B (A < B). Найти произведение всех целых чисел от A до B включительно.

                 /*int a, b;
                 cout << "A = ";
                 cin >> a;
                 cout << "B = ";
                 cin >> b;
                 int prod = 1;

                 for (int i = a; i <= b; ++i)

                     prod = prod * i;
                     cout << "Prod = " << prod;
                 */

                 //For 9. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел от A до B включительно.

                 /* int a, b;
                  cout << "A = ";
                  cin >> a;
                  cout << "B = ";
                  cin >> b;
                  int sum = 0;
                  for (int i = a; i <= b; i++)
                      sum =sum + i*i;
                      cout << "Sum: " << sum;
                  */

                  //For 39.  Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).
                   /*int a, b;
                   cout << "A = ";
                   cin >> a;
                   cout << "B = ";
                   cin >> b;
                   int i, i2;
                   for (int i = a; i <= b; i++)
                       for (i2 = 1; i2 <= i; ++i2)
                           cout << i <<" ";*/

                           //For 40. Даны целые числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом число A должно выводиться 1 раз, число A + 1 должно выводиться 2 раза и т. д.
                            /*int a, b;
                            cout << "A = ";
                            cin >> a;
                            cout << "B = ";
                            cin >> b;
                            int i, i2;
                            for (int i = 1; i <= b-a+1; i++)
                                for (i2 = 1; i2 <= i; ++i2)
                                    cout << a+ i -1 << "";*/
                                    //}