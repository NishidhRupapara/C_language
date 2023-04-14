#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=2000;
	clrscr();
	for(i=2000;i<=3000;i++)
	{
		if(i%4==0)
		{
			P("%d ",i);
		}
	}
	getch();
}