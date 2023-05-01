		//	3.WAP to convert given string in lowercase.
		
		
#include<stdio.h>
#define P printf
void main()
{
	int i;
	char a[i];
	
	P("enter any name :");
	scanf("%s",&a);
	
	for(i=0;i<20;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			P("%c",a[i]+32);
		}
    }
	
	
	
}
