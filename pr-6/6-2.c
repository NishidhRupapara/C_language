#include<stdio.h>
#include<string.h>
#define P printf

void main()
{
	char str[30];
	int i,j,count=0,n;
	P("enter any name :");
	gets(str);
	
	for(j=0;str[j];j++)
	n=j;
	
	P("ferq of character in string :\n\n");
	
	for(i=0;i<n;i++)
	{	
		count=1;
		if(str[i])
		{
			for(j=i+1;j<=n;j++)
			{
				if(str[i]==str[j])
				{				
					count++;
					str[j]=NULL;
				}
			}
			P("%c = %d\n",str[i],count);
		}
	}
}
