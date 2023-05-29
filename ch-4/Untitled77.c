//	7.WAP to find a the answer given formula (x+y+z)2. 	 (a+b+c)2=a2+b2+c2+2ab+2ac+2bc

#include<stdio.h>

void main()
{
	int x,y,ans;
	
	printf("enter  x:");
	scanf("%d",&x);
	printf("enter  y:");
	scanf("%d",&y);
	printf("enter  z:");
	scanf("%d",&z);
	
	
	ans = (x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);
	
	printf("(x+y+z)2 = %d",ans);
	
}

