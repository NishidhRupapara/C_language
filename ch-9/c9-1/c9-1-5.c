		//	5.WAP to convert given string in titlecase.
		

#include<stdio.h>
#define P printf
void main()
{
	char i,a[i];
	
	P("enter any name :");
	scanf("%s",&a);
	if(a[0]>=97 && a[0]<=122)
	{
		a[i]-=32;
	
	}
	
	for(i=1;i<25;i++)
	{
		if(a[i]>=65  &&  a[i]<=90)
		{
			a[i]+=32;
		}
	}
	P("%s",a);
}
