#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n;
	clrscr();
		P("enter ending pint :");
		scanf("%d",&n);
		while(i<=n)
		{
			P("%d\n",i);
			i++;
		}


	getch();
}