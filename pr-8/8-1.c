//C program to swap two numbers using pointers

#include<stdio.h>
#define P printf

void swap(int *p1, int *p2)
{
	int i;
	
	i = *p1;
	*p1 = *p2;
	*p2 = i;
	
}
void main()
{
	int a,b;
	
	P("enter a:");
	scanf("%d",&a);
	
	P("enter b:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	P("a : %d\nb : %d",a,b);	
	
}
