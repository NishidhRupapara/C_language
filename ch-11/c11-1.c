
#include<stdio.h>
#define P printf

void main()
{
	int a,*ptr,squre;
	
	ptr = &a;
	
	P("enter any number :");
	scanf("%d",ptr);
	
	squre =a*a;
	
	P("squre of %d is %d",a,squre);
	
}
