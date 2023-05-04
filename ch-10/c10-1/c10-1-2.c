//2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF.

#include<stdio.h>


void div()
{
	int a,div;
	
	printf("enter any nuber : ");
	scanf("%d",&a);
	
	if(a%3 == 0 && a%5==0)
	{
		printf("\n\ngiven nunmber is divisible by 3 & 5 ");
		
	}
	else
	{
		printf("\n\ngiven nunmber is not divisible by 3 & 5 ");
	}
	
}

void main()
{
	div();
}

