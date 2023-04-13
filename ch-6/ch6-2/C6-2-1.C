#include<stdio.h>
#include<conio.h>
#define P printf
			 // wap to print 1 to 10 using do while loop
void main()
{
	int i=1;
	clrscr();
	do
	{
		P("%d\n",i);
		i++;
	}while(i<=10);

	getch();
}