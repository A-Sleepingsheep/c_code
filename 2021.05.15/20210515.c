#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用函数实现二分查找
/*int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid]>k)
		{
			right = mid - 1;
		}
		else
        {
		return mid;
        }

	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到这个数\n");
	}
	else
	{
		printf("找到了，这个数的位置是：%d\n", ret+1);
	}
	return 0;
}*/


//接受一个整型值（无符号），按照顺序打印它的每一位，例如1234，输出1 2 3 4
/*
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
*/

//编写函数不允许创建临时变量，求字符串长度
/*
int my_strlen(char* str)
{
	if(*str!='\0')
	return 1+my_strlen(str+1);
	else 
	return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}
*/

//递归求n!
/*
int Fac1(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac1(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);
	printf("ret=%d\n", ret);
	return 0;
}
*/

//求第n个斐波那契数。
/*
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}
*/

//汉诺塔
void hanoi(int n, char a, char b, char c)
{
	if (1 == n)
	{
		printf("%c-->%c\n", a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("%c-->%c\n", a, c);
		hanoi(n - 1, b, a, c);
	}
}
int main()
{
	int n;
	printf("Input the number of diskes:");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}