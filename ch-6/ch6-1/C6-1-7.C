#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=2000;
	clrscr();
	while(i<=3000)
	{
		P("%d,",i);
		i++;
	}

	getch();
}