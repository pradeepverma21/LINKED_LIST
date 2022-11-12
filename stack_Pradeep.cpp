#include<stdio.h>
#include<conio.h>
#define max 6
int stack[max];
int top=0;
7
void insert()
{
	int i,data;
	if(top==max)
	{
		printf("Stack is overflow");
	}
	else
    {
    	printf("\nEnter data : ");
    	scanf("%d",&data);
    	stack[top]= data;
    	top = top + 1;
    	printf("\Data entered into the stack");
	}
}
void display()
{
	int i;
	if(top==0)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\nElement in stack are :\n");
		for(i=0;i<top;i++)
		{
			printf("%d\t",stack[i]);
		}
	}
}
void delet()
{
	if(top==0)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nDeleted element from the stack is %d: ",stack[--top]);
	}
}

int main()
{
	int ch;
	do{
		
	
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Display");
	printf("\n4.Exit");
	
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
		    delet();
			break;
		case 3:
		    display();
			break;
		case 4:
		   int  exit(1);
			break;			
	}
    }while(ch<4);
    return 0;
}
