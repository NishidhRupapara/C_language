#include<stdio.h>
#include<conio.h>
#define P printf

void main()
{
	int a,b,c,d,e;
	clrscr();

	P("enter a,b,c,d & e :");
	scanf("%d%d%d%d%d  :",&a,&b,&c,&d,&e);
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					P("a is small");
				}
				else
				{
					P("e is amall");
				}
			}
			else
			{
				if(d<e)
				{
					P("d is small");
				}
				else
				{
					P("e is small");
				}

			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					P("c is small");
				}
				else
				{
					P("e is small");
				}
			}
			else
			{
				if(d<e)
				{
					P("d is small");
				}
				else
				{
					P("e is small");
				}

			}

		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					P("b is small");
				}
				else
				{
					P("e is small");
				}
			}
			else
			{
				if(d<e)
				{
					P("d is small");
				}
				else
				{
					P("e is small");
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					P("c is small");
				}
				else
				{
					P("e is small");
				}
			}
			else
			{
				if(d<e)
				{
					P("d is small");
				}
				else
				{
					P("e is small");
				}

			}

		}

	}

	getch();
}