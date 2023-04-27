#include<stdio.h>
#define P printf

void main()
{
	
	int n;
	
	P("enter size of array :");
	scanf ("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		P("enter a[%d] :",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			P("negativ elements :%d",a[i]);
			
		}
		else
		{
			P(" ");
			
		}
	}P("\n");
	
}
