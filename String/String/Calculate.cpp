#include "pch.h"
double Calculate(double x, char operation, double y)
{
    switch (operation)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
    return 0.0;
}
int Calculat(int x, char operation, int y) {
    switch (operation)
    {
    case '%':
        return x % y;
    default:
        return 0.0;
    }
    return 0.0;
}
bool test(char ch, const char* keys, unsigned int size)
{
    for (int i = 0; i < size; i++)
        if (keys[i] == ch) return true;
    return false;
}
int main()
{
    /*2. Пользователь вводит строку вида 2234 + 455. Программа подсчитывает результат.Операторы: +- % * /  */

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char operation = '+';
    cout << "Calculator" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b | a%b" << endl;
    char numbers[16] = { '0','1','2','3','4','5','6','7','8','9','.','+','-','*','/','%' }; //42-57 и 37
    char ch;
        Calculate;
        while (true)
        {
            while ((ch = _getch()) != '\r')//enter
                if (test(ch, numbers, 16))
                {
                    cin >> x >> operation >> y;
                    
                    if (operation == '/' && y == 0)
                    {
                        cout << "Division by 0 exception" << endl;
                        continue;
                    }
                    if (operation == '%') {
                        result = Calculat(x, operation, y);
                    }
                    else
                    {
                        result = Calculate(x, operation, y);
                    }
                    cout << "Result is: " << result << endl;
                }
        }
    return 0;
}