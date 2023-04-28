#include<stdio.h>
#define P printf

void main()
{

	int n;
	P("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	
	for(i=0;i<n;i++)
	{
		P("enter a[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		P("a[%d] : %d\n",i,a[i]);
		count++;
	}
	
		P(" \n length of array :%d",count);

}
