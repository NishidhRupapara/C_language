#include<stdio.h>
#include<conio.h>
#define P printf
			       // wap to print even numbers n to 1 using do while loop
void main()
{
	int i;
	clrscr();
	P("enter starting point :");
	scanf("%d",&i);
	do
	{
		if(i%2==0)
		{
			P("%d\n",i);

		}      i--;
	}while(i>=1);
	getch();
}