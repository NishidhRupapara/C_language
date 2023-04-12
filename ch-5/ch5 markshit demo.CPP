#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("marks :");
	scanf("%d",&a);
	if(a<100 && a>90)
	{
		printf("grade A1");
	}
	else if(a<90 && a>80)
	{
		printf("grade A2");
	}
	else if(a<80 && a>70)
	{
		printf("grade B1");
	}
	else if(a<70 && a>60)
	{
		printf("grade B2");
	}
	else if(a<60 && a>50)
	{
		printf("grade C1");
	}
	else if(a<50 && a>33)
	{
		printf("grade C2");
	}
	else
	{
		printf("faile");
	}

	getch();
}