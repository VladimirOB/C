//#include "pch.h"
//
////ƒоп.задача по рекурсии : программа расставл€ет на шахматной доске 8 ферзей так, чтобы они друг друга не били.
////ћожно найти один вариант или все возможные варианты
//
//int board[8][8];
//
//void setQueen(int i, int j)
//{
//	for (int k = 0; k < 8; ++k)
//	{
//		++board[k][j];
//		++board[i][k];
//		int foo;
//		foo = j - i + k;
//		if (foo >= 0 && foo < 8)
//			++board[k][foo];
//		foo = j + i - k;
//		if (foo >= 0 && foo < 8)
//			++board[k][foo];
//	}
//	board[i][j] = -1; // будет означать что там стоит ферзь
//}
//
//void resetQueen(int i, int j)
//{
//	for (int k = 0; k < 8; ++k)
//	{
//		--board[k][j];
//		--board[i][k];
//		int foo;
//		foo = j - i + k;
//		if (foo >= 0 && foo < 8)
//			--board[k][foo];
//		foo = j + i - k;
//		if (foo >= 0 && foo < 8)
//			--board[k][foo];
//	}
//	board[i][j] = 0;
//}
//
//bool tryQueen(int i)
//{
//	bool result = false;
//	for (int j = 0; j < 8; ++j)
//	{
//		if (board[i][j] == 0)
//		{
//			setQueen(i, j);
//			if (i == 7)
//			result = true;
//			else
//			{
//				if (!(result = tryQueen(i + 1)))
//					resetQueen(i, j);
//			}
//		}
//		if (result)
//		break;
//	}
//	return result;
//}
//
//int main()
//{
//	for (int i = 0; i < 8; i++)
//		for (int j = 0; j < 8; j++)
//			board[i][j] = 0;
//			tryQueen(0);
//		
//	
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)
//		{
//			if (board[i][j] == -1)
//				cout << "1 ";
//			else
//				cout << "0 ";
//		}
//		cout << endl;
//	}
//}
//int Queen[8];
//
//bool pr(int p, int q, int h, int v)
//{
//	return (q == v) || (p - h == q - v) // вертикаль, диагональ 
//		|| (p - h == v - q) || (p == h); // диагональ, горизонталь
//
//}
//
//bool go(int h, int v)
//{
//	for (int p = 0; p < h; p++)
//	{
//		if (pr(p, Queen[p], h, v))return false;
//	}
//	return true;
//}
//
//void printBoard(int found)
//{
//	cout << found;
//	cout << "\n----------------\n";
//	for (int h = 7; h > -1; --h) // горизонтали идут снизу вверх
//	{
//		for (int v = 0; v < 8; ++v) // вертикали идут слева направо
//			cout << '|' << (v == Queen[h] ? 'Q' : (h + v) % 2 == 0 ? '#' : ' ');
//
//		cout << '\n'; // перевод строки
//	}
//
//	cout << "----------------\n";
//
//}
//
//
//
//void foo()
//{
//	int found = 1;
//	for (int a = 0; a < 8; ++a)
//	{
//		Queen[0] = a;
//		for (int b = 0; b < 8; ++b)
//
//			if (go(1, b))
//			{
//				Queen[1] = b;
//
//				for (int c = 0; c < 8; ++c)
//
//					if (go(2, c))
//					{
//						Queen[2] = c;
//
//						for (int d = 0; d < 8; ++d)
//
//							if (go(3, d))
//							{
//								Queen[3] = d;
//
//								for (int e = 0; e < 8; ++e)
//
//									if (go(4, e))
//									{
//										Queen[4] = e;
//
//										for (int f = 0; f < 8; ++f)
//
//											if (go(5, f))
//											{
//												Queen[5] = f;
//
//												for (int g = 0; g < 8; ++g)
//
//													if (go(6, g))
//													{
//														Queen[6] = g;
//
//														for (int h = 0; h < 8; ++h)
//
//															if (go(7, h))
//															{
//																Queen[7] = h;
//																// есть решение, распечатаем
//																cout << '\n';
//
//																printBoard(found++);
//															}
//
//
//													}
//											}
//									}
//							}
//					}
//			}
//	}
//}
//
//int main()
//{
//	foo();
//	cout << endl;
//	return 0;
//}