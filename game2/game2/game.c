#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char x)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = x;
		}
	}
}

void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while ()
	{
		printf("请输入要查找的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				break;
			}
			
			

		}
		else
		{
			printf("输入错误\n");
		}
	}
}


