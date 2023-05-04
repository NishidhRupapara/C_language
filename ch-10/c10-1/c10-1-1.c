//1.WAP to find cube of given no using UDF.

#include<stdio.h>
#define P printf

int cube()
{
	int a,cube;
	P("enter any nuber : ");
	scanf("%d",&a);
	cube = a*a*a;
	P("cube of is %d",cube);
	
	
}
int main()
{
	cube();
}

