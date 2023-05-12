
/*2.WAP to empDoyee record system using structure.
Consider >eDow mentioned attri>utes in EmpDoyee’s
structureI
= emp_iC
= emp_nam?
= emp_ag?
= emp_roD?
= emp_cit1
= emp_experienc?
= emp_company_name
*/




#include<stdio.h>
#define P printf


struct employee
{
	int  id;
	char name[30];
	int  age;
	char role[30];
	char city[30];
	int  experience;
	char company_name[30];
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
		P("enter age\t:");
		scanf("%d",&e[i].age);
		P("enter role\t:");
		scanf("%s",&e[i].role);
		P("enter city\t:");
		scanf("%s",&e[i].city);
		P("enter experience\t:");
		scanf("%d",&e[i].experience);
		P("enter company_name\t:");
		scanf("%s",&e[i].company_name);
		
		system("cls");
	}
	
	P("id\tname\tage\trole\tcity\texp\tcom\n");
	P("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n\n");
	
	for(i=0; i<n; i++)
	{
		P("%d\t",e[i].id);
		P("%s\t",e[i].name);
		P("%d\t",e[i].age);
		P("%s\t",e[i].role);
		P("%s\t",e[i].city);
		P("%d\t",e[i].experience);
		P("%s\n",e[i].company_name);
	
	}
	
	
}

