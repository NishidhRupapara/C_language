#include<stdio.h>
#define P printf

		//2.WAP to swap two variables using Pointer.
		
void swape(int *p1,int *p2)
{
	int c;
	c =*p1;
	*p1 =*p2;
	*p2 = c;
}		

		
void main()
{
	int a,b;
	
	P("enter a :");
	scanf("%d",&a);
	P("enter b :");
	scanf("%d",&b);
	
	swape(&a,&b);
	
	P("a = %d \nb = %d ",a,b);
}
