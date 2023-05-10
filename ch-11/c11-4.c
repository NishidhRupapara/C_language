//WAP to get cube of any int using pointer with udf.
#include<stdio.h>
#define P printf


void cube()
{
	int a,cube;
	
	int *ptr;	
	ptr = &a;
	
	P("enter any number :");
	scanf("%d",&a);
	
	cube = a*a*a;
	P("cube of %d is %d",a,cube);
}

void main()
{
	cube();
}
