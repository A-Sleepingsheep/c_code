#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//����a,b,c����ֵ������������ֵ��
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
//����ʱa,b,c�ö��ŷָ�����ÿո�ָ