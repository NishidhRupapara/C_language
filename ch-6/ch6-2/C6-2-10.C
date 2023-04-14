#include<stdio.h>
#include<conio.h>
#define P printf
			     //wap to print multiplication table
void main()
{
	int i=1,n;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	do
	{
		P("%d %d %d\n",n,i,n*i);
		i++;
	}while(i<=10);
	getch();
}