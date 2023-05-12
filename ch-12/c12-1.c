
			/*1.WAP to student record system using structure.
			Consider >eDow mentioned attri>utes in Student’s
			structureI
			= stuiC
			= stunam?
			= stuag?
			= stucours?
			= stucit1
			= stustC
			= stuschooD
			*/

#include<stdio.h>
#define P printf


struct student
{
	int  id;
	char name[30];
	int  age;
	char course[30];
	char city[30];
	int  std;
	char school[30];
};

void main()
{
	int i,n;
	
	P("enter number of student :");
	scanf("%d",&n);
	
	struct student s[n];
	
	system("cls");
	
	for(i=0; i<n; i++)
	{
		P("student (%d/%d)\n\n",i+1,n);
		
		P("enter id\t:");
		scanf("%d",&e[i].id);
		P("enter name\t:");
		scanf("%s",&e[i].name);
		P("enter age\t:");
		scanf("%d",&e[i].age);
		P("enter course\t:");
		scanf("%s",&e[i].course);
		P("enter city\t:");
		scanf("%s",&e[i].city);
		P("enter std\t:");
		scanf("%d",&e[i].std);
		P("enter school\t:");
		scanf("%s",&e[i].school);
		
		system("cls");
	}
	
	P("id\tname\tage\tcourse\tcity\tstd\tschool\t\n\n");
	P("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
	
	for(i=0; i<n; i++)
	{
		P("%d\t",e[i].id);
		P("%s\t",e[i].name);
		P("%d\t",e[i].age);
		P("%s\t",e[i].course);
		P("%s\t",e[i].city);
		P("%d\t",e[i].std);
		P("%s\n",e[i].school);
	}
	
	
}















