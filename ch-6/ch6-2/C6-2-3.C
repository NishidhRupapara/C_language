#include<stdio.h>
#include<conio.h>
#define P printf
			//wap to print 1 to n using do while loop
void main()
{
	int i=1,n;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	do
	{
		P("%d\n",i);
		i++;
	}while
	(i<=n);
	getch();
}