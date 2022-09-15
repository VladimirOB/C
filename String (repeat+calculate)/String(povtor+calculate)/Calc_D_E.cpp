//#include "pch.h"
//int main()
//{
//	enum Operations 
//	{
//		Plus, Minus, Production, Division, Mod
//	};
//
//	
//		enum  States {
//			WaitForFirstNumber,  // автомат ожидает первое число.
//			FirstNumber,         // автомат движется по первому числу.
//			WaitForOperator,     // автомат ожидает оператор.
//			WaitForSecondNumber, // автомат ожидает второе число.
//			SecondNumber,        // автомат движ. по 2-му.
//			WaitForOperator,     //ждёт оператор
//			ErrorState,          // состояние ошибки парсинга.
//			FinalState,           // состояние окончания парсинга.
//
//		};
//	
//	char str[400];
//
//	cout << "Enter a string:" << endl;
//	cin.getline(str, 399);
//
//	States currentState = States::WaitForFirstNumber; // current это текущее состояние.
//
//	int firstNumber = 0;
//	int secondNumber = 0;
//	//int moreNumber = 0;
//	Operations mainOperator = Operations::Plus;
//
//	for (int i = 0; i < str[i] != 0; i++)
//	{
//		switch (currentState)
//		{
//		case WaitForFirstNumber:
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				firstNumber = str[i] - 48;
//			}
//			else if (str[i] != ' ')
//			{
//				currentState = States::ErrorState;
//			}
//			break;
//
//		case FirstNumber:
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				firstNumber = firstNumber * 10 + str[i] - 48;
//			}
//			else if (str[i] == ' ')
//			{
//				currentState = States::WaitForOperator;
//			}
//			else 
//				currentState = States::ErrorState;
//			break;
//
//		case WaitForOperator:
//			if (str[i] != ' ')
//			{
//				switch (str[i])
//				{
//				case '+':
//					mainOperator = Plus;
//					break;
//				case '-':
//					mainOperator = Minus;
//					break;
//				case '*':
//					mainOperator = Production;
//					break;
//				case '//':
//					mainOperator = Division;
//					break;
//				case '%':
//					mainOperator = Mod;
//					break;
//				default:
//					currentState = States::ErrorState;
//					break;
//				}
//				currentState =States::WaitForSecondNumber;
//			}
//			break;
//
//		case WaitForSecondNumber:
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				secondNumber = str[i] - 48;
//			}
//			else if (str[i] != ' ')
//			{
//				currentState = States::ErrorState;
//			}
//			break;
//
//		case SecondNumber:
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				secondNumber = secondNumber * 10 + str[i] - 48;
//			}
//			else if (str[i] == '\13')
//			{
//				currentState = States::FinalState;
//			}
//			else if (str[i] == ' ')
//			{
//				currentState = States::WaitForOperator;
//			}
//			else currentState = States::ErrorState;
//			break;
//
//
//		case FinalState:
//			cout << firstNumber << " " << mainOperator << " " << secondNumber << " = " << endl;
//			break;
//
//		case ErrorState:
//			cout << "ERROR!" << endl;
//			break;
//			
//
//		}
//		if (currentState == ErrorState)
//			break;
//	}  return 0;
//
//}