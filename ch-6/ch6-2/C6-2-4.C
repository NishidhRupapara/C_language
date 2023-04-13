#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i;
	clrscr();
	P("enter starting point :");
	scanf("%d",&i);
	do
	{
		P("%d\n",i);
		i--;
	}while(i>=1);
	getch();
}