#include<stdio.h>
#define P printf

void main()
{
	
	int n;
	
	P("enter size of array :");
	scanf ("%d",&n);
	
	int a[n],i,max;
	
	for(i=0;i<n;i++)
	{
		P("enter a[%d] :",i);
		scanf("%d",&a[i]);
		
		
	}
	
	for(i=0;i<n;i++)
	{
		P("a[%d] : %d",i,a[i]);
		P("\n");
	}
	
	max = a[0];
	
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	
	P("\n\nlargest array element : %d",max);
	
}
