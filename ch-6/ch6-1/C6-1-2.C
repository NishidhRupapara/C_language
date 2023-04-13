#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=10;
	clrscr();
		while(i>=0)
		{
			P("%d\n",i);
			i--;
		}

	getch();
}