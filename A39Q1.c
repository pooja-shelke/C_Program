#include<stdio.h>
#include<stdlib.h>

struct node
{
int Data;
struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=iNo;
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
	while(Head!=NULL)
	{
		printf("[%d]->",Head->Data);
		
		Head=Head->next;
	}
	printf("NULL\n");
	
}

void InsertLast(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	temp=*Head;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=iNo;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	
	while(temp->next=NULL)
	{
		temp=temp->next;
	}
	temp->next=newn;
	
	
}


















int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
		
	}
	return iCnt;
}
int main()
{
PNODE first=NULL;
int iNo=0;
int iRet=0;
printf("Enter first Number\n");
scanf("%d",&iNo);
InsertFirst(&first,iNo);

printf("Enter first Number\n");
scanf("%d",&iNo);
InsertFirst(&first,iNo);

printf("Enter Last Number\n");
scanf("%d",&iNo);
InsertLast(&first,iNo);

Display(first);
iRet=Count(first);
printf("Counter%d\n",iRet);
return 0;
}