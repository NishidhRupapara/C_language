#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n,sum=0;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	P("sum of 1 to %d :%d",n,sum);
	getch();
}