#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n;
	clrscr();
	P("enter Ending point :");
	scanf("%d",&n);
	while(i<=10)
	{
		P("%d %d %d\n",n,i,n*i);
		i++;
	}
	getch();
}