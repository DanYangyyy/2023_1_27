//��������Ϸ
//1.�����������һ������ 1-100
//2.��Ҳ�����
//  ��Ҳ�С�˸�֪��С
//  ��Ҳ´��˸�֪�´�
//  ֱ���¶�Ϊֹ
//3.��Ϸ����һֱ��

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
//	//1.�������һ������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	//2.������
//	while (1)
//	{
//		int n = 0;
//		printf("������:>\n");
//		scanf("%d", &n);
//		if (n > ret)
//			printf("�´���\n");
//		else if (n < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶���\n");
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
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("����Ƿ�,����������\n");
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
//		printf("����������,������Խ���һ����֮�ڹػ�\n");
//
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0);
//		{
//			system("shutdown -a");//ȡ���ػ�
//			break;
//		}
//	}
//	return 0;
//}


//�������һ����λ��
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


//д���뽫�������������Ӵ�С�����
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

//дһ�������ӡ1-100֮������3�ı���������
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


//���������������������������Լ��
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


//��ӡ1000�굽2000��֮�������
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


//��ӡ100~200֮�������
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


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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



//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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


//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	//����
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

//����Ļ�����9*9�˷��ھ���
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