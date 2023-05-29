#include<stdio.h>


void arrayinput(int[],int);

void arraydisplay(int[],int);

void arrayCRUD(int[],int*);

void insert(int[],int**,int,int);

void update(int[],int,int);

void delet(int[],int**,int);


void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	
	arrayinput(a,n);
	arraydisplay(a,n);
	
	arrayCRUD(a,&n);
}


void arrayinput(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
}

void arraydisplay(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%d elements: %d\n",i+1,a[i]);
	}
}

void arrayCRUD(int a[],int *n)
{
	int choice;
	int pos,val;
	
	do
	{
		
		printf("1) insert\n2) update\n3) delete\n4)display\n5) exit\n\nenter your chioce : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			
			case 1:
				printf("enter position: ");
				scanf("%d",&pos);
				printf("enter value: ");
				scanf("%d",&val);
				
				insert(a,&n,pos,val);
				break;
				
			case 2:
				printf("enter position: ");
				scanf("%d",&pos);
				printf("enter value: ");
				scanf("%d",&val);
				
				update(a,pos,val);
				break;
				
			case 3:
				printf("enter position: ");
				scanf("%d",&pos);
				
				delet(a,&n,pos);
				break;
					
			case 4:
				arraydisplay(a,*n);
				break;
				
			case 5:
				break;
				
				
				
		}
		
	}while(choice!=5);
}

void insert(int a[],int **n,int p,int v)
{
	int i;
	
	for(i= **n;i>=p;i--)
	{
		a[i]=a[i+1];
		
	}
	a[p]=v;
	++ **n;
}

void update(int a[],int p,int v)
{
	a[p] =v;
}

void delet(int a[],int **n,int p)
{
	int i;
	
	for(i=p;i<= **n;i++)
	{
		a[i] = a[i+1];
	}
	-- **n;
}
