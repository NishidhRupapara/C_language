#include<stdio.h>
#define P printf

void main()
{

	int n;
	P("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,count =0, average, sum =0;
	
	for(i=0;i<n;i++)
	{
		P("enter a[%d] : ",i);
		scanf("%d",&a[i]);
		count++;
		sum = sum + a[i];
		average = sum / count;
		
	}
	for(i=0;i<n;i++)
	{
		P(" \n length of array :%d",count);
		P("\n sum :%d",sum);
		P("\n  average : %d",average);
	
		
	}
	
	

}


