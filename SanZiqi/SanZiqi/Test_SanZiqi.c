#define  _CRT_SECURE_NO_WARNINGS 1

#include"SZQ.h" 

//�˵�
void menu()
{
	printf("***************************\n");
	printf("********* 1.start *********\n");
	printf("********* 0.exit  *********\n");
	printf("***************************\n");
}

//��Ϸ
void game()
{
	char board[ROW][COL] = { 0 };

	IniBoard(board, ROW, COL);//��ʼ������

	DisplayBoard(board, ROW, COL);//��ʾ����

	int rec = CheckWin(board, ROW, COL);//�ж���Ӯ

	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		if (rec != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

		//������
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

//����ģ��
void test()
{
	srand((unsigned int)time(NULL));//���������
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  //������Ϸ
			game(); //��Ϸ����
			break;
		case 0:  //�˳���Ϸ
			printf("���˳���\n");
			break;
		default:  //�������
			printf("������Ч�����������룡\n");
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}