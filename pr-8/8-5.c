//How to return multiple value from function.

#include<stdio.h>
#define P printf

void mul(int *a, int *b ,int *c)
{
	*a = 10;
	*b = 20;
	*c = 3;
}

void main()
{
	int a,b,c;
	mul(&a,&b,&c);
	P("a : %d\nb : %d\nc : %d",a,b,c);
}
