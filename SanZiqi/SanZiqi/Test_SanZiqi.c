#define  _CRT_SECURE_NO_WARNINGS 1

#include"SZQ.h" 

//菜单
void menu()
{
	printf("***************************\n");
	printf("********* 1.start *********\n");
	printf("********* 0.exit  *********\n");
	printf("***************************\n");
}

//游戏
void game()
{
	char board[ROW][COL] = { 0 };

	IniBoard(board, ROW, COL);//初始化棋盘

	DisplayBoard(board, ROW, COL);//显示棋盘

	int rec = CheckWin(board, ROW, COL);//判断输赢

	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		if (rec != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//电脑走
		ComputerMove(board, ROW, COL);
		if (rec != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (rec == '*')
	{
		printf("You Win!");
	}
	else if (rec == '#')
	{
		printf("You Lost!");
	}
	else if (rec == 'D')
	{
		printf("Draw!");
	}
	DisplayBoard(board, ROW, COL);
}

//测试模块
void test()
{
	srand((unsigned int)time(NULL));//产生随机数
	int input = 0;
	do
	{
		menu();
		printf("请输入选项:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  //进入游戏
			game(); //游戏代码
			break;
		case 0:  //退出游戏
			printf("已退出！\n");
			break;
		default:  //输入错误
			printf("输入无效，请重新输入！\n");
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}