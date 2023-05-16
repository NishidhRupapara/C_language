#include<stdio.h>

void main()
{
	
	FILE *f1;
	
	char a[30];
	
	f1 = fopen("C:\\Users\\r22\\Desktop\\pr.txt","r");
	
	fscanf(f1,"%s",a);
	printf("name : %s",a);
	
}
