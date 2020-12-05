#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 3
#define COL 3

//菜单
void menu();

//游戏
void game();

//初始化棋盘
void IniBoard(char board[ROW][COL], int row, int col);

//显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
char CheckWin(char board[ROW][COL], int row, int col);