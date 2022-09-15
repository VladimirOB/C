#include "pch.h"
int Calculator(int a, char operation, int b)
{
	switch (operation)
	{
	case '%':
		return a % b;
	}
}
int main()
{
	int a, b;
	int result = 0.;
	char operation;
	while (true)
	{
		cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b | a%b" << endl;
		cin >> a >> operation >> b;

				
		switch (operation)
		{
		case '+':
			result = a + b;
			break;
		case '%':
			result = a % b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b != 0)
				result = a / b;
			else
				cout << "Division by 0 exception\n";
			break;
		default:
			cout << "Error.\n";
			break;
		}
			cout << a << " " << operation << " " << b << " = " << result << "\n";
	}
	return 0;
} 