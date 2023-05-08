#include<stdio.h>
#define P printf

int fact(int n)
{
	if(n<=1)
	{
		return 1;
		
	}
	else
	{
		return n*fact(n-1);
		
	}
}

void main()
{
	int ans = fact(5);
	P("factoriyal is %d",ans);
}
