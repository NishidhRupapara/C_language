#include<stdio.h>

void main()
{
	char s1[30],s2[30];
	
	int count =0;
	
	printf("enter first name:");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	count = strcmp(s1,s2);
	
	if(count==0)
	{
		printf("this is palindrom\n");
		
	}
	else
	{
		printf("this is not palindrom\n");
	}
	
	printf("name 1:\t");
	puts(s1);
	
	printf("name 2:\t");
	puts(s2);
	
	printf("comparision :\t %d",count);
		
}
