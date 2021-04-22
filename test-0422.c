#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//给定一个大写字母，用小写字母输出。
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
//大写字母换成小写字母+32，ASCALL相差32.

//计算n!
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

//计算1！+2！+....+10！
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

//在一个有序数组中查找具体的某个数字n。（折半查找算法）
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
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到\n");
		}
	    }
	return 0;
}
