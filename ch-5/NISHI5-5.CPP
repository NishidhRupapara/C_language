#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c,d;
	clrscr();
	P("enter a b c d :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	(a>b)
		?(a>c)
			?(a>d)
				?P("a is max")
				:P("d is max")
			:(c>d)
				?P("c is max")
				:P("d is max")
		:(b>c)
			?(b>d)
				?P("b is max")
				:P("d is max")
			:(c>d)
				?P("c is max")
				:P("d is max");

	getch();
}