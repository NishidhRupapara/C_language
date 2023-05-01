		//	4.WAP to convert given string in uppercase.
		
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
		if(a[i]>=97 && a[i]<=122)
		{
			P("%c",a[i]-=32);
		}
    }
	
	
	
}
