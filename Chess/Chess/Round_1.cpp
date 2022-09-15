#include "pch.h"

//Доп.задача по рекурсии : программа расставляет на шахматной доске 8 ферзей так, чтобы они друг друга не били.
//Можно найти один вариант или все возможные варианты

int board[8][8];

int main()
{
	srand(time(NULL));
	board[0][rand()%8] = 1; // первый ферзь

	for (int q = 0; q < 8; q++)
	{
		for (int w = 0; w < 8; w++)
		{
			board[q][w] = 2;
			for (int e = 0; e < 8; e++)
			{
				board[q][e] = 3;
				for (int r = 0; r < 8; r++)
				{
					for (int t = 0; t < 8; t++)
					{
						for (int y = 0; y < 8; y++)
						{
							for (int u = 0; u < 8; u++)
							{
								for (int i = 0; i < 8; i++)
								{
									
									

								}
							}
						}
					}
				}
			}
		}
	}


	for (int i = 0; i < 8; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << board[i][k] << " ";
		}
		cout << endl;
	}
}
