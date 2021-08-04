#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	
	if((*Head)==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
	
}

void InsertLast(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	
	PNODE temp=NULL;
	temp=*Head;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		
		temp->next=newn;
	}
}

void Display(PNODE Head)
{
	while((Head)!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

int SearchFstOcc(PNODE Head,int iValue)
{
	int i=0,iPos=1;
	
	while((Head)!=NULL)
	{
		i++;
		if((Head)->data==iValue)
		{
			
		 iPos=i ; 	
		}
		
		Head=Head->next;
	}
	return iPos;
	
	
	
	
	
}


int main()
{
struct node* first=NULL;

int iValue=0,iRet=0;

printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);

printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);

printf("Enter  first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);

printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);


printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);


printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);


printf("Enter first number:");
scanf("%d",&iValue);
InsertFirst(&first,iValue);




Display(first);

printf("Enter element that u want:");
scanf("%d",&iValue);

iRet=SearchFstOcc(first,iValue);
printf("\nPosition :%d\n",iRet);
return 0;

}