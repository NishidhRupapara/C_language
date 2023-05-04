//Write C program to check whether a string is palindrome or not.
		
#include<stdio.h>
#include<string.h>
#define P printf

void main()
{
	char str1[20],str2[20];
	
	int count=0,i;
	
	P("enter name :");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	count=strcmp(str1,str2);
		
	if(count == 0)
	{
		P("%s is palindrome\n\n",str1);
	}
	else
	{
		P("%s is not palindrome\n\n",str1);
	}
	P("name 1");
	puts(str1);
	P("name 2");
	puts(str2);
	P("comparison : %d",count);	
}
