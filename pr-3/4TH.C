#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,fact=1;
	clrscr();
	printf("enter nuber :");
	scanf("%d",&n);
	do
	{
		fact *= i;
		i++;
	}while(i<=n);

	printf("factorial%d  :%d",n,fact);

	getch();

}
