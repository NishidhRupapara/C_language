#include<stdio.h>
#include<conio.h>
#define P printf
			    //wap to print 10 to 1 using do while loop
void main()
{
	int i=10;
	clrscr();
	do
	{
		P("%d\n",i);
		i--;
	}while(i>=1);
	getch();
}