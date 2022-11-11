#include<stdio.h>
#include<conio.h>

#define max 10
int slinklist[max],n;

void Create();
void Insert();
void Delete();
void Display();
void Search();

int main()
{
	int choice;
	do
	{
		printf("\nArray Implementation using Single linked list\n");
		printf("\t1.Create\n");
		printf("\t2.Insert\n");
		printf("\t3.Delete\n");
		printf("\t4.Display\n");
		printf("\t5.Search\n");
		printf("\t6.Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				Create();
				break;
			case 2:
			    Insert();
			    break;
			case 3:
			    Delete();
				break;	
			case 4:
			    Display();
			    break;
			case 5:
			    Search();
			    break;
			case 6:
			    int exit(0);
//			default: 
//			    printf("\nInvalid option!!!");
//				break;	    
		}
	}while(choice<7);
	
	
	return 0;
}

void Create()
{
	int i;
	printf("\nEnter the number of elements to be added in the list:\t");
	scanf("%d",&n);
	
	printf("\nEnter the element in list:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&slinklist[i]);
	}
//	Display();
}

void Insert()
{
	int i,data,pos;
	printf("\nEnter the data to be inserted :\t");
	scanf("%d",&data);
	printf("\nEnter the position at which the element to be inserted:\t");
	scanf("%d",&pos);
	
	for(i=n-1;i>pos-1;i++)
	{
			slinklist[i+1]=slinklist[i];
	}
	slinklist[pos-1]=data;
	n++;
	Display();

}

void Delete()
{
	int i,pos;
	printf("\nEnter the position of data to be deleted:\t");
	scanf("%d",&pos);
	printf("\nThe deleted element is\t %d",slinklist[pos-1]);
	
	for(i=pos-1;i<n-1;i++)
	{
		slinklist[i]=slinklist[i+1];
	}
	n--;
	Display();
}

void Display()
{
	int i;
	printf("*********Elements in the List*********\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",slinklist[i]);
	}
}

void Search()
{
	int search,i;
	printf("\nEnter the element to be search:\t");
	scanf("%d",&search);
	
	for(i=0;i<n;i++)
	{
		if(slinklist[i]==search)
		{
			printf("\nElement is present at %d",i);
			break;
		}
	}
}


