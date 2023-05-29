// 2.WAP to find a the answer given formula (x-y)2.   (a – b)2 = a2 – 2ab + b2


#include<stdio.h>

void main()
{
	int x,y,ans;
	
	printf("enter  x:");
	scanf("%d",&x);
	printf("enter  y:");
	scanf("%d",&y);
	
	ans = (x*x)+(y*y)-(2*x*y);
	
	printf("(x-y)2 = %d",ans);
	
}

