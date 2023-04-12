#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c;
	clrscr();
	P("enter a b c  :");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)
		?(a>c)
			?P("a is max")
			:P("c is max")
		:(b>c)
			?P("b is max")
			:P("c is max");
	getch();
}