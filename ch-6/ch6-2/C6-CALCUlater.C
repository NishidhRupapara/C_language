#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int choice,a,b;
	do
	{
		clrscr();
		P("\t\t\twelcom in the system");
		clrscr();
		P("1=>   addition\n");
		P("2=>   subtraction\n");
		P("3=>   multiplication\n");
		P("4=>   divition\n");
		P("5=>   modulos\n");
		P("6=>   exit\n\n\n");
		P("\t\t\tenter your choice  :");
		scanf("%d",&choice);
		clrscr();

		switch(choice)
		{
			case 1:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("addition  :%d",a+b);
				getch();
				break;
				clrscr();

			case 2:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("subtraction  :%d",a-b);
				getch();
				break;
				clrscr();

			case 3:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("mutiplication  :%d",a*b);
				getch();
				break;
				clrscr();

			case 4:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("division  :%d",a/b);
				getch();
				break;
				clrscr();

			case 5:
				P("A:");
				scanf("%d",&a);
				P("B:");
				scanf("%d",&b);
				P("modulos  :%d",a%b);
				getch();
				break;
				clrscr();

			case 6:
				break;
		}


	}while(choice!=6);

	P("\n\n\n\n\t\t\t\t-------------------\n");
	P("\t\t\t\t||thanks to coming||\n");
	P("\t\t\t\t-------------------");
	getch();
}