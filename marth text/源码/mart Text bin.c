#include <stdio.h>		//����ͷ�ļ�
#include <stdlib.h>		//����ͷ�ļ�2

int main(void)     //���庯��
{
	printf("��ӭ������ϵͳ\n");
	{
		int tt = 20100422;
		printf("��������Կ(������ԿҲ�ǿ��Ե�):");
		scanf("%d",&tt);
		if(tt = 20100422)
		{
			printf("���ˣ�������Ȩ\n");
			}
	}
	{
		
		int a = 2;
		printf("�ʣ�1+1=:  (This is ������)");
		scanf("%d",&a);
		if(a == 2)
		{
			printf("���ˣ�����\n");
			}
		else
		{
			printf("���ˣ������׶�԰���ⲻ�ᣬ���Ǹ����Ͽ�������123456�꼶\n");
			}
	}
	{
		int b = 1;
		int c = 2;
		printf("�����Ƿ��������(1��yes��2��No):");
		scanf("%d",&b);
		if(b == 1)
		{
			printf("���ˣ����ڴ���ʽ����Ŀ����\n");
			printf("�򿪺���\n");
			{
				int f = 56;
				int y = 99;
				printf("��56��99˭��:");
				scanf("%d",&y);
				if(f < y)
				{
					printf("����\n");
					}
				else
				{
					printf("����\n");
					}
			}
			{
				int o = 653;
				int p = 96.559;
				printf("653��96.559˭��:");
				scanf("%d",&o);
				if(o > p)
				{
					printf("����\n");
					}
				else
				{
					printf("����\n");
					}
			}
			{
				int j = 999;
				int h = 96509;
				printf("999��96509˭��:");
				scanf("%d",&h);
				if(h > j)
				{
					printf("����\n");
					}
				else
				{
					printf("����\n");
					}
			}
			{
				int l = 5668;
				int f = 965;
				printf("5668��965˭��:");
				scanf("%d",&l);
				if(l > f)
				{
					printf("����\n");
					}
				else
				{
					printf("����\n");
					}
			}
			{
				int oo = 669;
				int yy = 333;
				printf("333��669˭��:");
				scanf("%d",&oo);
				if(oo > yy)
				{
					printf("����\n");
					}
				else
				{
					printf("����\n");
					}
			}	
		}
		else
		{
			exit(0);
		}
		{
			short s = "h";
			printf("			�˵�			\n");
			printf("����c����֪ʶ����ֻ����������:D\n");
			printf("Ҫ�򿪰���������h:");
			scanf("%d",&s);
			if(s = "h")
			{
				FILE *fp = fopen("D:\\marth text\Demo.txt","rb+");
				printf("����:***\n");
				printf("�����д:***\n");
				printf("��װ�����:***\n");
				printf("�������:C����\n");
				printf("���IDE:΢��Visual C++ 6.0\n");
				printf("����汾V1.0\n");
				exit(0);
			}

		}
	}
	return 0;
	system("pause");
}