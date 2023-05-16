//C program to copy contents from one file to another.

#include<stdio.h>
#include<string.h>

void main()
{
	FILE *p1;
	FILE *p2;
	
	
	
	char a[30];
	
	p1 =fopen("C:\\Users\\r22\\Desktop\\ch13-1.txt.txt","w");
		
	p2 =fopen("C:\\Users\\r22\\Desktop\\ch13-2.txt.txt","r");
	
	fscanf(p2,"%[^\n]",&a);
	
	printf("%s",a);
	fprintf(p1,"%s",a);
	
	
	
}
