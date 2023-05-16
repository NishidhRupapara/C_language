//C program to create a file and write data into file.

#include<stdio.h>

void main()
{
	
	FILE *f1;
	
	char a[30] = "nishidh";
	
	f1 = fopen("C:\\Users\\r22\\Desktop\\pr.txt","w");
	
	fprintf(f1,"%s",a);
	
}
