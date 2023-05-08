#include<stdio.h>
#define P printf

void arrayinput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		P("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
}
int sum(int a[],int n)
{
	int i,sum =0 ;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
		P("sum : %d",sum);
		
	}
}

void main()
{
	int n;
	
	P("enter n :");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput(a,n);
	sum(a,n);
}
