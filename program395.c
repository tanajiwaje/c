#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*Head!=NULL)
	{
		newn->next=*Head;
	}
	*Head=newn;
}

void Display(PNODE Head)
{
	printf("Elements of linked list are :\n");
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL");
}

int MiddleElement(PNODE Head)
{
   PNODE Fast=Head;
   PNODE Slow=Head;
   
   while((Fast!=NULL) && (Fast->next!=NULL))
   {
	   Fast=Fast->next->next;
	   Slow=Slow->next;
   }
   return Slow->data;
}

void Reverse(PPNODE Head)
{
	PNODE Previous=NULL;
	PNODE Current=*Head;
	PNODE Next=NULL;
	
	while(Current!=NULL)
	{
		Next=Current->next;
		Current->next=Previous;
		Previous=Current;
		Current=Next;
	}
	*Head=Previous;
	
}

bool CheckLoop(PNODE Head)
{
	PNODE Fast=Head;
	PNODE Slow=Head;
	
	while((Fast!=NULL)&&(Fast->next!=NULL))
	{
		Slow=Slow->next;
		Fast=Fast->next->next;
		
		if(Fast==Slow)
		{
			Fast=true;
			break;
		}
		
	}
	return Flag;
	
}

int main()
{
	PNODE First=NULL;
	int iRet=0;
    PNODE Third=NULL;
	PNODE Last=NULL;
	
	InsertFirst(&First,51);
	InsertFirst(&First,52);
	InsertFirst(&First,53);
	InsertFirst(&First,54);
	InsertFirst(&First,55);
	InsertFirst(&First,56);
	
	
	
	bRet=CheckLoop(First);
	if(bRet==true)
	{
		printf("There is a loop in linked list \n");
	}
	else
	{
		printf("There is no loop in linked list \n");
	}
	//printf("Middle elments is :%d",iRet);
}