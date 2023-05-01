			//	6.WAP to convert given string in togglecase.


#include<stdio.h>
#define P printf

void main()
{
	char a;
	
	P("enter any charecter : ");
	scanf("%c",&a);
	
	if(a>=65 && a<=90)
	{
		a+=32;
	}
	else if(a>=97 && a<=122)
	{
		a-=32;
	}
	P("%c",a);
}
