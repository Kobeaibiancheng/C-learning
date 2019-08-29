#define _CRT_SECURE_NO_WARNINGS 1



#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("***********  1.play ************\n");
	printf("***********  0.exit ************\n");
	printf("********************************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DispalyBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);//设置雷
	DispalyBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);//找雷
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}