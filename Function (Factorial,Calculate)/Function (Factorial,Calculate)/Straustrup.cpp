//#include "pch.h"
//#include <ctype.h>
//
////Программа калькулятора состоит из четырех основных частей : анализатора, функции ввода, таблицы
////имен и драйвера.
//
////Для синтаксического анализа используется метод, обычно называемый рекурсивным спуском.
//
////Терминальные символы(например, END, NUMBER, +и - ) распознаются лексическим анализатором
////get_token().Нетерминальные символы распознаются функциями синтаксического анализатора expr(),
////term() и prim().
//
////Анализатор использует для ввода функцию get_token().Значение последнего вызова get_token()
////хранится в глобальной переменной curr_tok.Переменная curr_tok принимает значения элементов
////перечисления token_value :
//
////Для всех функций анализатора предполагается, что get_token() уже была вызвана, и поэтому в curr_tok
////хранится следующая лексема, подлежащая анализу.Это позволяет анализатору заглядывать на одну
////лексему вперед.
//
////Функция expr() обрабатывает сложение и вычитание.
////Она состоит из одного цикла, в котором распознанные термы складываются или вычитаются :
//
////Функция term() справляется с умножением и делением аналогично тому, как функция expr() со
////сложением и вычитанием
//
// //Функции term()
// //и get_token() должны быть описаны до определения expr().
//
//enum token_value {
//	NAME, 
//	NUMBER, 
//	END,
//	PLUS = '+', 
//	MINUS = '-', 
//	MUL = '*',
//	DIV = '/',
//	PRINT = ';',
//	ASSIGN = '=', 
//	LP = '(', 
//	RP = ')'
//};
//token_value curr_tok;
//
//struct name {     // таблица имён
//	char* string;
//	name* next; //Член next используется только служебными функциями, работающими с таблицей:
//	double value;
//};
//name* look(const char*); // ругается, если имя не было занесено в таблицу. Это означает, что в калькуляторе
//						 //можно использовать имя без предварительного описания, но в первый раз оно может появиться только
//						 //в левой части присваивания.
//name* insert(const char*);
//
//
//double expr() // сложение и вычитание.
//{
//	double left = term();
//	for(;;) // бесконечный цикл.
//		switch (curr_tok) {
//		case PLUS:
//			get_token();
//			left += term();
//			break;
//		case MINUS:
//			get_token();
//			left -= term();
//			break;
//		default:
//			return left;
//		}
//}
//
//double term() // умножает и складывает
//{
//	double left = prim();
//	for (;;)
//		switch (curr_tok) {
//		case MUL:
//			get_token(); // случай '*'
//			left *= prim();
//			break;
//		case DIV:
//			get_token(); // случай '/'
//			double d = prim(); //Переменная d появляется в программе там, где она
//			                   //действительно нужна, и сразу же инициализируется.
//			if (d == 0) { cout << "Error"; break; }
//			left /= d;
//			break;
//		default:
//			return left;
//		}
//}
//
//double number_value;
//char name_string[256];
//double prim() // обрабатывает первичное
//{
//	switch (curr_tok) {
//	case NUMBER: // константа с плавающей точкой
//		get_token();
//		return number_value;
//	case NAME:
//		if (get_token() == ASSIGN) {
//			name* n = insert(name_string);
//			get_token();
//			n->value = expr();
//			return n->value;
//		}
//		return look(name_string)->value;
//	case MINUS: // унарный минус
//		get_token();
//		return -prim();
//	case LP:
//		get_token();
//		double e = expr();
//		if (curr_tok != RP) { cout << "Error";}
//		get_token();
//		return e;
//	case END:
//		return 1;
//	default:
//	{ cout << "Error";  }
//	}
//}
//
//token_value get_token()
//{
//	char ch;
//	do { // пропускает обобщенные пробелы за исключением '\n'
//		if (!cin.get(ch)) return curr_tok = END;
//	} while (ch != '\n' && isspace(ch));
//	switch (ch) {
//	case ';':
//	case '\n':
//		cin >> ws; // пропуск обобщенного пробела
//		return curr_tok = PRINT;
//	case '*':
//	case '/':
//	case '+':
//	case '-':
//	case '(':
//	case ')':
//	case '=':
//		return curr_tok = token_value(ch);
//	case '0': case '1': case '2': case '3': case '4':
//	case '5': case '6': case '7': case '8': case '9':
//	case '.':
//		cin.putback(ch);
//		cin >> number_value;
//		return curr_tok = NUMBER;
//	default: // NAME, NAME= или ошибка
//		if (isalpha(ch)) {
//			char* p = name_string;
//			*p++ = ch;
//			while (cin.get(ch) && isalnum(ch)) *p++ = ch;
//			cin.putback(ch);
//			*p = 0;
//			return curr_tok = NAME;
//		}
//		{ cout << "Error"; }
//		return curr_tok = PRINT;
//	}
//}
//
//int main()
//{
//	char ch;
//	do { // пропускает пробелы за исключением '\n'
//		if (!cin.get(ch)) return curr_tok = END; //Функция cin.get(ch) читает один символ из стандартного входного потока в ch.
//	} while (ch != '\n' && isspace(ch));
//
//	switch (ch) {
//	case ';':
//	case '\n':
//		cin >> ws; // пропуск обобщенного пробела
//		return curr_tok = PRINT;
//
//		if (isalpha(ch)) {
//			char* p = name_string;
//			*p++ = ch;
//			while (cin.get(ch) && isalnum(ch)) *p++ = ch;
//			cin.putback(ch);
//			*p = 0;
//			return curr_tok = NAME;
//		}
//}
//
