#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//判断棋盘是否已满
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//棋盘初始化
void InitBoard(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col*sizeof(board[0][0]));
}


//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			printf("--- ");
		}
		printf("\n");
	}
}


//玩家走
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走>");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x <= row && x >= 1 && y <= col && y >= 1)
		{
			if (board[x-1][y-1] == '*'||board[x-1][y-1] == '#')
			{
				printf("坐标被占用\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
			printf("坐标输入有误，请重新输入\n");
	}
}


//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走>\n");
	while (1)
	{
		x = rand()%row;
		y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}




//判断输赢
char IsWiner(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] == board[i + 2][j + 2] == '*')
				return '*';
			else if (board[i][j] == board[i - 1][j - 1] == board[i - 2][j - 2] == '*')
				return '*';
			else if (board[i][j] == board[i][j + 1] == board[i][j + 2] == '*')
				return '*';
			else if (board[j][i] == board[j + 1][i] == board[j + 2][i] == '*')
				return '*';
		}
	}
}

