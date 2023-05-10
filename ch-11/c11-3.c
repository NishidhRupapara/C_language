// WAP to convert string into Toggle case using pointer.


#include<stdio.h>
#define P printf

void togglecase()
{
	char a[30];
	int *ptr[30];
	
	ptr[30] = &a;
	
	P("enter name :");
	scanf("%s",&a);
	
	int i;
	
	for(i=0;i<30;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			a[i]-=32;
		}
	}
	P("%s",a);
}
 
 void main()
 {
 	togglecase();
 }

