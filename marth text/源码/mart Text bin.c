#include <stdio.h>		//导入头文件
#include <stdlib.h>		//导入头文件2

int main(void)     //定义函数
{
	printf("欢迎到答题系统\n");
	{
		int tt = 20100422;
		printf("请输入密钥(其他密钥也是可以的):");
		scanf("%d",&tt);
		if(tt = 20100422)
		{
			printf("对了，你以授权\n");
			}
	}
	{
		
		int a = 2;
		printf("问：1+1=:  (This is 热身题)");
		scanf("%d",&a);
		if(a == 2)
		{
			printf("对了！！！\n");
			}
		else
		{
			printf("错了，你连幼儿园的题不会，真是个智障亏了你是123456年级\n");
			}
	}
	{
		int b = 1;
		int c = 2;
		printf("问你是否继续答题(1是yes，2是No):");
		scanf("%d",&b);
		if(b == 1)
		{
			printf("好了，正在打开正式的题目……\n");
			printf("打开好了\n");
			{
				int f = 56;
				int y = 99;
				printf("问56和99谁多:");
				scanf("%d",&y);
				if(f < y)
				{
					printf("对了\n");
					}
				else
				{
					printf("错了\n");
					}
			}
			{
				int o = 653;
				int p = 96.559;
				printf("653和96.559谁大:");
				scanf("%d",&o);
				if(o > p)
				{
					printf("对了\n");
					}
				else
				{
					printf("错了\n");
					}
			}
			{
				int j = 999;
				int h = 96509;
				printf("999和96509谁大:");
				scanf("%d",&h);
				if(h > j)
				{
					printf("对了\n");
					}
				else
				{
					printf("错了\n");
					}
			}
			{
				int l = 5668;
				int f = 965;
				printf("5668和965谁大:");
				scanf("%d",&l);
				if(l > f)
				{
					printf("对了\n");
					}
				else
				{
					printf("错了\n");
					}
			}
			{
				int oo = 669;
				int yy = 333;
				printf("333和669谁大:");
				scanf("%d",&oo);
				if(oo > yy)
				{
					printf("对了\n");
					}
				else
				{
					printf("错了\n");
					}
			}	
		}
		else
		{
			exit(0);
		}
		{
			short s = "h";
			printf("			菜单			\n");
			printf("作者c语言知识有限只能做帮助了:D\n");
			printf("要打开帮助的输入h:");
			scanf("%d",&s);
			if(s = "h")
			{
				FILE *fp = fopen("D:\\marth text\Demo.txt","rb+");
				printf("作者:***\n");
				printf("程序编写:***\n");
				printf("安装包打包:***\n");
				printf("编程语言:C语言\n");
				printf("编程IDE:微软Visual C++ 6.0\n");
				printf("程序版本V1.0\n");
				exit(0);
			}

		}
	}
	return 0;
	system("pause");
}