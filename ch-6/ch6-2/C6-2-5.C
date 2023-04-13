#include<stdio.h>
#include<conio.h>
#define P printf
			  // wap to print odd number of 1 to n using do while loop
void main()
{
	int i=1,n;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	do
	{
		if(i%2==1)
		{
			P("%d\n",i);

		}     	i++;

	}while(i<=n);
	getch();
}