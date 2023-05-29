#include<stdio.h>

void main()
{
	int i,j,sum=0;
	int r,c;
	printf("enter row:");
	scanf("%d",&r);
	
	printf("enter colmns:");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			
		}printf("\n");
		
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j || i+j==r-1)
			{
				printf("%d");
				sum = sum + a[i][j];
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
	
	printf("sum : %d",sum);
	
}
