#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//��ӡ9*9�˷��ھ���
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


//��������Ϸ
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
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
			printf("��ѡ��>:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}
		} while (input);
		return 0;
    }
