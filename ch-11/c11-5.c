// WAP to toggle any character using pointer with UDF.

#include<stdio.h>
#define P printf

void togglecase()
{
	char a;
	int *ptr;
	
	ptr = &a;
	
	P("enter name :");
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
 void main()
 {
 	togglecase();
 }
