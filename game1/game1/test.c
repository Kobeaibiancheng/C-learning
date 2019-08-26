#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("**********************************\n");
	printf("***********    1.play      *******\n");
	printf("***********    0.exit      *******\n");
	printf("**********************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW-3][COL-3] = { 0 };
	InitBoard(board, ROW, COL);//³õÊ¼»¯ÆåÅÌ
	DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ
	while (1)
	{
		PlayerMove(board, ROW, COL);//Íæ¼Ò×ß
		DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ
		ret = IsWiner(board, ROW, COL);
		//ÅĞ¶ÏÊäÓ®
		if ('*' == ret)
		{
			printf("Íæ¼ÒÓ®\n");
			break;
		}
		else if ('#' == ret)
		{
			printf("µçÄÔÓ®\n");
			break;
		}
		else if ('p' == ret)
		{
			printf("Æ½¾Ö\n");
			break;
		}
		ComputerMove(board, ROW, COL);//µçÄÔ×ß
		DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ
		ret = IsWiner(board, ROW, COL);
		//ÅĞ¶ÏÊäÓ®
		if ('*' == ret)
		{
			printf("Íæ¼ÒÓ®\n");
			break;
		}
		else if ('#' == ret)
		{
			printf("µçÄÔÓ®\n");
			break;
		}
		else if ('p' == ret)
		{
			printf("Æ½¾Ö\n");
			break;
		}
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("ÇëÊäÈë>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}