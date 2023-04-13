#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n,sum=0;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);

	while(i<=n)
	{
	     sum=sum+i;
	     i++;


	}
		P("sum :%d",sum);
	getch();
}