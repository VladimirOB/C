//#include "pch.h"
//int main()
//{
//    char str[20];
//    int second_number, n, i;
//    float result, first_number;
//    while (true)
//    {
//        cout << "Insert the expression: " << endl;
//        cin.getline(str, 19);
//        n = strlen(str);
//        result = 0, first_number = 0;
//        second_number = 1, n, i = 0;
//        while (i < n)//цикл только один раз через массив 
//        {
//            while (str[i] >= '0' && str[i] <= '9')//Число
//            {
//                first_number = first_number * 10 + (str[i] - '0');
//                i++;
//            }
//            switch (str[i])
//            {
//                case '+': {
//                    result += first_number * second_number;
//                    first_number = 0;
//                    break;
//                }
//                case '-': {
//                    result += first_number * second_number;
//                    first_number = 0;
//                    second_number = -1;
//                    break;
//                }  
//                    default:
//                        if (str[i] != (str[i] >= '0' && str[i] <= '9'))
//                        {
//                            cout << "Error! Wrong input." << endl;
//                            break;
//                        }
//            }
//            if (i >= (n - 1))
//            {
//                    result += first_number * second_number;
//            }
//            i++;
//        }
//        cout << "=" << result << endl;
//        system("pause");
//        system("cls");
//    }
//}

