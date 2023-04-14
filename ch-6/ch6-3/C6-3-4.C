#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i;
	clrscr();
	P("enter starting point :");
	scanf("%d",&i);
	for(i;i>=1;i--)
	{
		P("%d\n",i);
	}
	getch();

}