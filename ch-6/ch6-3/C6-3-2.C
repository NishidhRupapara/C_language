#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=10;
	clrscr();
	for(i=10;i>=1;i--)
	{
		P("%d\n",i);
	}
	getch();
}