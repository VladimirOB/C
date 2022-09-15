#include "pch.h"

	/*2. Пользователь вводит строку вида 2234 + 455 - 23 + 1234 ...
		Программа подсчитывает результат.Операторы: +-и(*) с приоритетами*/

int main()
{
    char str[20];
    int second_number, n, i;
    float result, first_number, cnt, cnt2;
    while (1)
    {
        cout << "insert the expression:" << endl;
        cin.getline(str, 19);
        n = strlen(str);
        result = 0, first_number = 0, cnt = 0, cnt2 = 0;
        second_number = 1, n, i = 0;
        while (i < n)//цикл только один раз через массив 
        {
            while (str[i] >= '0' && str[i] <= '9')//Число
            {
                first_number = first_number * 10 + (str[i] - '0');
                i++;
            }
            switch (str[i])
            {
            case '+': {

                if (!(str[i - 1] == '*') && !(str[i - 1] == '/'))  //Проверка на умножение и деление.
                {
                    if (cnt2 == 1)// было найдено раньше: 2*2+1 
                    {
                        result += cnt * first_number * second_number;// обновление результата
                        cnt = 0;// Сброс.
                    }
                    else if (cnt2 == 2)// / было найдено раньше: 2/2+1 
                    {
                        result += cnt / first_number * second_number;
                        cnt = 0;
                    }
                    else
                    {
                        result += first_number * second_number;
                    }
                    first_number = 0;
                    cnt2 = 0;
                }

                second_number = 1;

                break;
            }
            case '-': {
                if (!(str[i - 1] == '*') && !(str[i - 1] == '/'))
                {
                    if (cnt2 == 1)
                    {
                        result += cnt * first_number * second_number;
                        cnt = 0;
                    }
                    else if (cnt2 == 2)
                    {
                        result += cnt / first_number * second_number;
                        cnt = 0;
                    }
                    else
                    {
                        result += first_number * second_number;
                    }
                    cnt2 = 0;
                    first_number = 0;
                }
                second_number = -1;
                break;
            }
            case '*': {
                if (!cnt)
                {
                    cnt = first_number * second_number; // cnt хранит результат операций * и / 
                }
                else if (cnt2 == 2)
                {
                    cnt /= first_number * second_number;
                }
                else
                {
                    cnt *= first_number * second_number;
                }
                cnt2 = 1;
                first_number = 0;
                second_number = 1;
                break;
            }
            case '/': {
                if (!cnt)
                {
                    cnt = first_number * second_number;
                }
                else if (cnt2 == 1)
                {
                    cnt *= first_number * second_number;
                }
                else
                {
                    cnt /= first_number * second_number;
                }
                cnt2 = 2;
                first_number = 0;
                second_number = 1;
                break;
            }
            default:;
            }
            if (i >= (n - 1))// обновляет результат, потому что в конце строки нет + или -
            {
                if (cnt2 == 1)
                {
                    result += cnt * first_number * second_number;
                }
                else if (cnt2 == 2)
                {
                    result += cnt / first_number * second_number;
                }
                else
                {
                    result += first_number * second_number;
                }
            }
            i++;
        }if (str[i] == (str[i] >= '0' && str[i] <= '9'))
        {
            cout << "Error! Wrong input." << endl;
        }else
            cout << "=" << result << endl;
        system("pause");
        system("cls");

    }

}

