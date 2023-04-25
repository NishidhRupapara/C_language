#include<stdio.h>
#define P printf

void main()
{
	int n;
	P("enter length of array :");
	scanf("%d",&n);
	
	int a[n],i,pos,val,choice;
	for(i=0;i<n;i++)
	{
		P("entr a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	do
	{
	
	
		P("enter.....\n");
		P("1) insert\n2)updete\n3)delete\n4)display\n5)exit\nenter your choice :");
		scanf("%d",&choice);
		
		
			
	
		switch(choice)
		{
			case 1:
				P("enter position to insert :");
				scanf("%d",&pos);
				P("enter value to insert :");
				scanf("%d",&val);
				
				for(i=n-1;i>=pos;i--)
				{
					a[i+1]=a[i];
				}
				a[pos]=val;
				n++;
				
				break;
			
			case 2:
				P("enter position to update :");
				scanf("%d",&pos);
				P("enter value to update :");
				scanf("%d",&val);
				
				a[pos]=val;
				
				break;
				
			case 3:
				P("enter position to delete :");
				scanf("%d",&pos);
		
				for(i=pos;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n--;
				
				break;
					
			case 4:
				P("\narray a: ");
				
				for(i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				P("\n");
				break;
			
		}
						
	}while(choice!= 5);
	
	
}
			
	
	

