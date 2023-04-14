#include<stdio.h>
#include<conio.h>
#define P printf
		       //wap to print sum of 1 to n
void main()
{
	int i=1,n,sum=0;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	P("sum:%d",sum);

	getch();
}