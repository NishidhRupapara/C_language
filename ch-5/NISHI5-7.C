#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c,d,e;
	clrscr();
	P("enter a b c d e :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	(a>b)
		?(a>c)
			?(a>d)
				?(a>e)
					?P("a is max")
					:P("e is max")
				:(d>e)
					?P("d is max")
					:P("e is max")
			:(c>d)
				?(c>e)
					?P("c is max")
					:P("e is max")
				:(d>e)
					?P("d is max")
					:P("e is max")
		:(b>c)
			?(b>d)
				?(b>e)
					?P("b is max")
					:P("e is max")
				:(d>e)
					?P("d is max")
					:P("e is max")
			:(c>d)
				?(c>e)
					?P("c is max")
					:P("e is max")
				:(d>e)
					?P("d is max")
					:P("e is max");

	getch();
}