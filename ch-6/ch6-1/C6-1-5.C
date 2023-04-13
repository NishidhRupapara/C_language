#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int i=1,n;
	clrscr();
	P("enter ending point :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			P("%d\n",i);
		}
		i++;
	}

	getch();
}