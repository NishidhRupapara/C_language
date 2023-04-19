#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c=0;
	clrscr();
	printf("enter number :");
	scanf("%d",&n);
	while(n>0)
	{
		n/=10;
		c++;

	}
	printf("nuber has %d digits",c);
	getch();
}




