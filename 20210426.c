#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//打印9*9乘法口诀表
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/


//猜数字游戏
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************************************\n");
	printf("*******       1.play      0.exit     **************\n");
	printf("***************************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
	int main()
	{
		int input = 0;
		int srand = ((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择>:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}
		} while (input);
		return 0;
    }
