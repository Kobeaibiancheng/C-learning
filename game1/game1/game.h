
#define ROW 3
#define COL 3
#include<string.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWiner(char board[ROW][COL], int row, int col);


// '*' play win
// '#' computer win
// 'p' peace
// 'c' ¼ÌÐø