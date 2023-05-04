 //WAP to convert String into Toggle Case by UDF stringToggle(char str[])
 
#include<stdio.h>
#define P printf

void togglecase()
{
	char a[30];
	
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
