					/*	1.WAP to check of a given password is valid or not by satisfying below criteria:
						(1)password must wntains at least one letter,one digit and one special symbol.
						(2)password must br at least of 6 characters.	*/
						
#include<stdio.h>
#include<string.h>
#define P printf

void main()
{
	char password[6];
	int i,length=0,count=0,sp=0,letter=0,digit=0;
	P("enter password :");
	gets(password);
	
	
	
		
			for(i=0;i<7;i++ ||i>=65 && i<=90 || i>=97 && i<=122 || i>=48 && i<=57 )
			{
				letter++;
				digit++;
				sp++;
			
			}
	
	
	if(length>6 && sp>0 && digit >0 && length >0)
	{
		P("password is valid");
	}
	else 
	{
		P("password is not valid");
	}
}
