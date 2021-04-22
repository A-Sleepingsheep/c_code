#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//输入a,b,c三个值，输出其中最大值。
int main()
{
	int a, b, c, max;
	printf("please input a,b,c:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("The largest number is %d\n", max);
	return 0;
}
//输入时a,b,c用逗号分割，不能用空格分割。