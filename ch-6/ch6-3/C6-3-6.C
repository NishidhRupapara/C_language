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
		if(i%2==0)
		{
			P("%d\n",i);
		}
	}
	getch();
}