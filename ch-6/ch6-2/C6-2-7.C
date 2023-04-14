#include<stdio.h>
#include<conio.h>
#define P printf
			//wap to print leap years from 2000 to 3000 using do while

void main()
{
	int i=2000;
	clrscr();
	do
	{
		if(i%4==0)
		{
			P("%d ",i);
		}
		i++;
	}while(i<=3000);
	getch();
}