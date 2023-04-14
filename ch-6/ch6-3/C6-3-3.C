#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		P("%d\n",i);
	}
	getch();
}