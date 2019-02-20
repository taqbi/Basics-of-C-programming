#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void insertbeg();
void insertend();
void insertspecific();
void traverse();
struct node{
	int data;
	struct node *ptr;
};
struct node *start;
	struct node *temp;
int main()
{
	int ch;
	while(1)
	{
	printf("\nENTER YOUR CHOICE\n\t\t\t1TO INSERT AT BEGINING\n\t\t\t2 TO INSERT AT END\n\t\t\t3 TO INSERT AT A SPECIFIC POSITION\n\t\t\t4 TO TRAVERSE \n\t\t\t5 TO EXIT");
	scanf("%d",&ch);
switch(ch)
{
	case 1:
		insertbeg();
		break;
	case 2:
			insertend();
			break;
			case 3:
				insertspecific();
				break;
				case 4:
					traverse();
					break;
					case 5:
						exit(0);
						break;
						default:
							printf("wrong choice");
}
}
getch();
}
void insertbeg()
{
	struct node *temp;
	temp=(struct node*) malloc (sizeof (struct node));
	if(temp==NULL)
	printf("MEMORY CANNOT BE ALLOCATED");
	else
	{
		printf("ENTER THE ELEMENT");
		scanf("%d",&temp -> data);
		temp -> ptr=start;
		start=temp;
	}
}
void traverse()
{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		
		printf("  %d",temp->data);
		temp=temp->ptr;
	}
	}
	void insertend()
		{
				struct node *temp,*p;
				temp=start;
	p=(struct node*) malloc (sizeof (struct node));
	if(p==NULL)
	printf("MEMORY CANNOT BE ALLOCATED");
	else
	{
		printf("ENTER THE ELEMENT");
		scanf("%d",&p -> data);
	}
		if(start==NULL)
		{
		p -> ptr=NULL;
		start=p;
}
	else
	{
		while(temp -> ptr !=NULL)
		temp=temp -> ptr;
		p -> ptr=NULL;
		temp -> ptr=p;
	}

	}
	void insertspecific()
	{
		int i,position;
			struct node *temp,*p;
				temp=start;
	p=(struct node*) malloc (sizeof (struct node));
	if(p==NULL)
	printf("MEMORY CANNOT BE ALLOCATED");
	else
	{
		printf("ENTER THE ELEMENT");
		scanf("%d",&p -> data);
		printf("ENTER POSITION");
		scanf("%d",&position);}
		if(start==NULL)
	printf("EMPTY LIST");
	
	else
	{
		for(i=1;i<position;i++)
		{

		temp=temp -> ptr;
			if(temp -> ptr==NULL)
			{
			printf("INVALID POSITION");

		}
		p -> ptr=temp -> ptr;
		temp -> ptr=p;
	
	}
}
}
