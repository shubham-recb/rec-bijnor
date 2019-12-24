#include<stdio.h>
struct node{
	int info;
	struct node *link;
};


void display(struct node*);
void main()
{
	int item,choice=0;
	struct node*start=NULL,*temp=NULL;
	
	
	do
	{
	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the information:");
	scanf("%d",&item);
	
	temp->info=item;
	
	if(start==NULL)
		temp->link=NULL;			
	else
		temp->link=start;
		
	start=temp;
	
	
	
	printf("\n Do you want to add more nodes in the beginning of LL(0:No and 1:Yes):");
	scanf("%d",&choice);
}while(choice==1);
	
	printf("\n Linked list is as follow:\n");
	display(start);
	
	
		
}

void display(struct node*s)
{
	printf("\n START=>");
	while(s!=NULL)
	{
		printf("%d-->",s->info);
		s=s->link;
	}
	printf("X");
}
