
									//2.WAP to create login mechanism by entering right email & password.

#include<stdio.h>
#include<string.h>
#define P printf

void main()
{
	
	
	char email[30] = "nishidh43@gmail.com"  ;
	char password[30] ="nishidh@93" ;
	
	char e[30] , p[30];
	P("enter email :");
	scanf("%s",&e);
	P("enter password :");
	scanf("%s",&p);

	
	if( strcmp(email , e) == 0 && strcmp(password , p) == 0)
	{
		P("login is success");
	}
	else 
	{
		P("login is faile");
	}
	
	
}
