//猜数字游戏
//1.电脑随机生成一个数字 1-100
//2.玩家猜数字
//  玩家猜小了告知猜小
//  玩家猜大了告知猜大
//  直到猜对为止
//3.游戏可以一直玩

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("########################\n");
//	printf("####### 1. play ########\n");
//	printf("####### 0. exit ########\n");
//	printf("########################\n");
//
//}
//void game()
//{
//	//1.随机生成一个数字
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	//2.猜数字
//	while (1)
//	{
//		int n = 0;
//		printf("猜数字:>\n");
//		scanf("%d", &n);
//		if (n > ret)
//			printf("猜大了\n");
//		else if (n < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入非法,请重新输入\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	N:
//	printf("hello\n");
//	goto N;
//
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("输入我是猪,否则电脑将在一分钟之内关机\n");
//
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0);
//		{
//			system("shutdown -a");//取消关机
//			break;
//		}
//	}
//	return 0;
//}


//反向输出一个四位数
//1234  ->  4321
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		ret = n % 10;
//		n = n / 10;
//		printf("%d", ret);
//	}
//	return 0;
//}


//写代码将三个整数数按从大到小输出。
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = c;
//		c = a;
//		a = tmp;
//	}
//	if (c < b)
//	{
//		tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d", a,c,b);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int i = 0, j = 0;
//	scanf("%d %d", &i, &j);
//	int max = i > j ? i : j;
//	for (int n = max; n > 0; n--)
//	{
//		if (i % n == 0 && j % n == 0)
//		{
//			printf("%d ", n);
//			break;
//		}
//	}
//	return 0;
//
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0 )&& (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for ( j = 2; j < i; j++)
//		{
//			if (i%j==0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d ", count);
//	return 0;
//}



//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int flag = 1;
//	double sum = 0.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			flag = -flag;
//		//sum = sum + 1.0 / (i * flag);
//		sum += flag * 1.0 / i;
//		/*flag = -flag; */
//
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	//输入
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d =%2d  ", j,i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}