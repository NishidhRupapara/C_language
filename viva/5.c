
/*
	id name address email salary role
*/


#include<stdio.h>
#define P printf


struct employee
{
	int  id;
	char name[30];
	char address[50];
	char role[30];
	char email[30];
	int salary;
};

void main()
{
	int i,n;
	
	P("enter number of employee :");
	scanf("%d",&n);
	
	struct employee e[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		P("employee (%d/%d)\n\n",i+1,n);
		
		P("enter id\t:");
		scanf("%d",&e[i].id);
		P("enter name\t:");
		scanf("%s",&e[i].name);
		P("enter address\t:");
		scanf("%s",&e[i].address);
		P("enter role\t:");
		scanf("%s",&e[i].role);
		P("enter email\t:");
		scanf("%s",&e[i].email);
		P("enter salary\t:");
		scanf("%d",&e[i].salary);
		
		system("cls");
	}
	
	
	P("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
	
	for(i=0; i<n; i++)
	{
		P("%d\t",e[i].id);
		P("%s\t",e[i].name);
		P("%s\t",e[i].address);
		P("%s\t",e[i].role);
		P("%s\t",e[i].email);
		P("%d\n",e[i].salary);
	
	}
	
	
}

