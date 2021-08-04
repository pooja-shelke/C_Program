#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
    else
	{
		newn->next=*Head;
		*Head=newn;
	}	
}

void Display(PNODE Head)
{
	while((Head)!=NULL)
	{
		printf("[%d]->",Head->data);
		Head=Head->next;
	}
	printf("NULL");
	
}

int Count(PNODE Head)
{
	int iCnt=0;
	while((Head)!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp=(*Head);
	
	if(*Head!=NULL)
	{
		*Head=(*Head)->next;
		free(temp);
	}
}

void InsertLast(PPNODE Head,int iValue)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	PNODE temp=(*Head);
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


void DeleteLast(PPNODE Head)
{
	PNODE temp=(*Head);
	
	if((*Head)==NULL)
	{
		return;
	}
	
	else if(temp->next==NULL)
	{
	  free(temp);
      *Head=NULL;	  
	}
}


void InsertAtPos(PPNODE Head,int iValue,int iPos)
{
	int i=0,iCnt=0;
	PNODE newn=NULL;
	PNODE temp=*Head;
	PNODE temp2=NULL;
	iCnt=Count(*Head);
	if((iPos<1 )||(iPos>iCnt+1))
	{
		return;
	}
	if(iPos==1)
	{
		InsertFirst(Head,iValue);
	}
	
	if(iPos==(iCnt+1))
	{
		InsertLast(Head,iValue);
	}
	else 
	{
		newn=(PNODE)malloc(sizeof(NODE));
		
		newn->data=iValue;
		newn->next=NULL;
		
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp2=temp->next;
		
		newn->next=temp2;
		temp->next=newn;
	}
}

























int main()
{
	PNODE first=NULL;
	int iNo=0,choice=0,iPos=0;
	
	while(choice!=0)
	{
		printf("\n 1:InsertFirst elements:");
		printf("\n 2:DeleteFirst elements:");
		printf("\n 3:InsertLast elements:");
		printf("\n 4:DeleteLast elements:");
		printf("\n 5:InserAtPos elements:");
		//printf("\n 6:DeleteAtPos elements:");
		printf("\n 7:Display elements:");
		printf("\n 8:Count elements:");
		printf("\n 0: exit:");
		
		switch(choice)
		{
			case 1: 
			printf("enter first elements:");
			scanf("%d",&iNo);
			InsertFirst(&first,iNo);
			
			case 2: 
			printf("\nDelete first elements:");
			DeleteFirst(&first);
			
			case 3: 
			printf("\nenter Last elements:");
			scanf("%d",&iNo);
			
			InsertLast(&first,iNo);
			
			case 4: 
			printf("\nDelete last elements:");
			DeleteLast(&first);
			
			case 5: 
			printf("\nenter elements at position:");
			scanf("%d",iNo);
			printf("Enter position");
			scanf("%d",&iPos);
			InsertAtPos(&first,iNo,iPos);
			
			
			case 7: 
			printf("\nDisplay elements:");
			Display(first);
			
			case 8: 
			printf("\nCount elements:%d",Count(first));
		
			 
			case 0:
			printf("\n..........Thank you for using Application..........\n ");
			
		    default : 
			printf("\nWrong Choice\n");
			
			
		}
	printf("\n.............Give your Time to Impove our Self.........\n");
	}
	return 0;
}

