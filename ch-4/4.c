//	4.WAP to find a the answer given formula (x-y)3.		(a – b)3 = a3 – 3a2b + 3ab2 – b3

#include<stdio.h>

void main()
{
	int x,y,ans;
	
	printf("enter  x:");
	scanf("%d",&x);
	printf("enter  y:");
	scanf("%d",&y);
	
	ans = (x*x*x)-(3*(x*x)*y)+(3*x*(y*y))-(y*y*y);
	
	printf("(x-y)3 = %d",ans);
	
}

