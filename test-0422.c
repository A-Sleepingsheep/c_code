#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//����һ����д��ĸ����Сд��ĸ�����
/*
int main()
{
	char c1, c2;
	scanf("%c", &c1);
	printf("%C\n", c1);
	printf("%d\n", c1);
	c2 = c1 + 32;
	printf("%c\n", c2);
	printf("%d\n", c2);
	return 0;
}
*/
//��д��ĸ����Сд��ĸ+32��ASCALL���32.

//����n!
/*
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret=%d\n", ret);
	return 0;
}
*/

//����1��+2��+....+10��
/*
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}
*/

//��һ�����������в��Ҿ����ĳ������n�����۰�����㷨��
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k =6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���\n");
		}
	    }
	return 0;
}
