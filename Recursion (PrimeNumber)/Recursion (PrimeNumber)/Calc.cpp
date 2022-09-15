#include <iostream>
#include <stack> // Подключаем библиотеку для работы со стеком.
using namespace std;

struct Leksema // Структура, описывающая любое число либо операцию.
{
	char type; // Для операторов типа "+" и т.д. Для чисел всегда 0. 
	double value; // Значение только для чисел. У тайпа всегда 0.
};

bool Maths(stack <Leksema>& Stack_n, stack<Leksema>& Stack_o, Leksema& item)// Матем. функция, которая производит расчёты.
{ // Тип бул, чтоб при возникновении ошибки возвращать false.
	double a, b, res;
	if (Stack_n.size() == 0 || Stack_n.size() == 1) // Проверка на ввод
	{
		cout << "\nНеверный ввод" << endl;
		return false;
	}
	a = Stack_n.top().value; // Берём верхнее число из стека чисел.
	Stack_n.pop(); // Удаляем число из стека, т.к. мы его записали в а.
	switch (Stack_o.top().type)//Проверяется тип верхней операции из стека с операциями
	{
	case'+':
		b = Stack_n.top().value; // инициализируем 2-й операнд
		Stack_n.pop(); // удаляем его из стека (При помощи функции pop()).
		res = a + b;
		item.type = '0'; // Как уже писал в структуре, для чисел 0.
		item.value = res; // присвоили итемке результат.
		Stack_n.push(item); // Закинули итемку(результат операции) в стек чисел.
		Stack_o.pop(); // Очистили стек операторов.
		break;
	case '-':
		b = Stack_n.top().value;
		Stack_n.pop();
		res = b - a; // инверсия а и б для корректного отображения "-"
		item.type = '0';
		item.value = res;
		Stack_n.push(item);
		Stack_o.pop();
		break;
	case '*':
		b = Stack_n.top().value;
		Stack_n.pop();
		res = a * b;
		item.type = '0';
		item.value = res;
		Stack_n.push(item);
		Stack_o.pop();
		break;
	case '/':
		b = Stack_n.top().value;
		if (a == 0)
		{
			cerr << "\nНа 0 делить нельзя!" << endl; // cerr потому что типо вывод с ошибками.
			return false; // Вот и пригодился bool.
		}
		else {
			Stack_n.pop();
			res = (b / a);
			item.type = '0';
			item.value = res;
			Stack_n.push(item);
			Stack_o.pop();
			break;
		}
	default:
		cerr << "\nОшибка!" << endl;
		return false;
		break;
	}
	return true;
}

int getRang(char Ch)// Функция для приоритетов. 1 для +-. 2 для */. 
{
	if (Ch == '+' || Ch == '-') return 1;
	if (Ch == '*' || Ch == '/') return 2;
	else return 0; // Пригодится для скобок
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Калькулятор!\nВведите выражение: ";
	char Ch; // создаём переменную, в которой будет текущий обрабатываемый символ.
	double value; // переменная для ввод цыфр.
	bool flag = 1; // Для того чтоб можно было начать выражение с отрицательного числа.
	stack <Leksema> Stack_n; // Стек чисел.
	stack <Leksema> Stack_o; // Стек операций.
	Leksema item; // объект в который будем помещать выражения.
	while (1)
	{
		Ch = cin.peek(); // Смотрим только на первый символ.
		if (Ch == '\n') break; // Конец строки(\n) выход из цикла.
		if (Ch == ' ') {
			cin.ignore(); // Игнорируем много пробелов.
			continue;
		}
		if (Ch >= '0' && Ch <= '9' || Ch == '-' && flag == 1) {
			cin >> value;
			item.type = '0';
			item.value = value;
			Stack_n.push(item); // закидываем число в стек символов.
			flag = 0; // обнуляем флаг чтобы дальше работать с бинарным минусом. 
			continue;
		}
		if (Ch == '+' || Ch == '-' && flag == 0 || Ch == '*' || Ch == '/')
		{
			if (Stack_o.size() == 0)
			{ // Если стек с операциями пуст
				item.type = Ch;
				item.value = 0;
				Stack_o.push(item); // Кидаем операцию в стек операций.
				cin.ignore();
				continue;
			}
			if (Stack_o.size() != 0 && getRang(Ch) > getRang(Stack_o.top().type))//Если стек с операциями НЕ пуст, но приоритет текущей операции выше верхней в стеке с операциями
			{
				item.type = Ch;
				item.value = 0;
				Stack_o.push(item); // аналогично кидаем в стек.
				cin.ignore();
				continue;
			}
			if (Stack_o.size() != 0 && getRang(Ch) <= getRang(Stack_o.top().type))//Если стек с операциями НЕ пуст, но приоритет текущей операции ниже либо равен верхней в стеке с операциями
			{ // для того чтоб коррекно работали такие операции 2+2*2+2
				if (Maths(Stack_n, Stack_o, item) == false) {// проверка
					system("pause");
					return 0;
				}
				continue;
			}
		}
		if (Ch == '(') { // Если прочитана открыв. скобка
			item.type = Ch;
			item.value = 0;
			Stack_o.push(item); // закидываем её в стек оп.
			cin.ignore();
			continue;
		}
		if (Ch == ')' && Stack_n.size() != 0) {
			while (Stack_o.top().type != '(') { // идём вниз стека пока не найдём скобку
				if (Maths(Stack_n, Stack_o, item) == false) {
					system("pause");
					return 0;
				}
				else continue; // Если всё окей, идём дальше.
			}
			Stack_o.pop();
			cin.ignore();
			continue;
		}

		else
		{ // Если случайно ввёл что - то не то.
			cout << "\nНеверный ввод" << endl;
			system("pause");
			return 0;
		}
	}
	while (Stack_o.size() != 0) {//Вызываем матем. функцию до тех пор, пока в стеке с операциями не будет 0 элементов
		if (Maths(Stack_n, Stack_o, item) == false) {
			system("pause");
			return 0;
		}
		else continue;
	}
	cout << "Ответ: " << Stack_n.top().value << endl;
	return 0;
}
