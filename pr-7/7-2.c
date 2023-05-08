#include<stdio.h>
#define P printf

void input(char a[])
{
	P("enter name :");
	scanf("%[^\n]",&a);
	
}

void len()
{
	char a[20];
	int i, count=0;
	for(i=0;i<a[20];i++)
	{
	
		count++;
		
		
	}
	P("name[%s] has %d length",a,count);
	
}

void main()
{
	char a[20];

	input(a);
	len();

}
