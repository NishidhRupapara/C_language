#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n;
	clrscr();
	P("enter number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		P("%d %d %d\n",n,i,n*i);
	}
	getch();
}