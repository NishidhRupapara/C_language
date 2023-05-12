//C program to input and print array elements using pointers

#include<stdio.h>
#define P printf

void input(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
	
		P("a[%d]:",i);
		scanf("%d",&a[i]);
	
	}
}

void display(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		P("a[%d] : %d\n",i,a[i]);
	}
}

void main()
{
	int n;
	
	P("enter size of array :");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	
	ptr[n] = &a;
	
	input(a,n);
	display(a,n);
}
