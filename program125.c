#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,int no)
{
  //Allocate memory for node 
  //Initialise that node
  //check whether ll is empty or not
  //if ll is empty then new node is the first node so update its address in first pointer through head  
  //if ll is not empty then store the address of first node in the next pointer of our new node
  //update the first pointer through head  
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=no;
  newn->next=NULL;
  
  if(*head==NULL) //ll is empty
  {
	  *head=newn;
  }
  else //ll is contain atleast one node 
  {
	newn->next=*head;
    *head=newn;	
  }
}

void InsertLast(PPNODE head,int no)
{
	
  //Allocate memory for node 
  //Initialise that node
  //check whether ll is empty or not
  //if ll is empty then new node is the first node so update its address in first pointer through head  
  //if ll is not empty then 
  //travel till last node of ll 
  // store address of new node in the next pointer of last node   
  PNODE newn=NULL;
   PNODE temp=NULL;
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=no;
  newn->next=NULL;
  
  if(*head==NULL) //ll is empty
  {
	  *head=newn;
  }
  else //ll is contain atleast one node 
  {
	//travel till last node 
	//store address of new node in the next pointer of last node
    temp=*head;
    while(temp->next!=NULL)
	{
		temp=temp->next;
	}
     temp->next=newn;	
  }
}

void Display(PNODE head)
{
	printf("Elements from linked list are :\n");
	while(head!=NULL)
	{
		printf("| %d |->",head->data);
		head=head->next;
	}
	printf("NULL \n");
}
int Count(PNODE head)
{
	int iCnt=0;
	
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	//if ll is empty then return
	//if ll contains atleast one node then 
	//store the address of second node in the first pointer through head
	//and delete the first node
	PNODE temp=NULL;
	if(*head==NULL)// ll is empty
	{
		return;
	}
	else  //ll contains atleast one node
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
	
}

void DeleteLast(PPNODE head)
{
	//if ll is empty then return
	// if ll contains one node then delete that node and return
	// if ll contains more than one node then travel till second last node and delete last node
	PNODE temp=NULL;
	if(*head==NULL) //ll is empty
	{
		return;
		
	}
	else if((*head)->next==NULL) //ll contains one node
	{
		free(*head);
		*head=NULL;
		
	}
	else //llcontains more than one node
	{    temp=*head;
	     while(temp->next->next!=NULL)
		 {
			 temp=temp->next;
		 }
		 free(temp->next);
		 temp->next=NULL;
		
	}
}

void InsertAtPos(PPNODE head,int no,int pos)
{
	//if position is invalid then return directly
	//if position is 1 then call insertfirst
	//if position is N+1 the call insertlast
	int size=0,iCnt=0;
	PNODE newn=NULL;
	size=Count(*head);
	PNODE temp=NULL;
	if((pos<1 || (pos>(size+1))))
	{
		printf("Position is invalid \n");
		return;
	}
	if(pos==1)
	{
		InsertFirst(head,no);
	}
	else if(pos==size+1)
	{
		InsertLast(head,no);
	}
	else //at position
	{
		 
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
		temp=*head;
	     for(iCnt=1;iCnt<pos-1;iCnt++)
	      {
			  temp=temp->next;
		  }
		  newn->next=temp->next;
		  temp->next=newn;
		  
	}
	
	
	
	
}

void DeleteAtPos(PPNODE head,int no,int pos)
{
	int size=0,iCnt=0;
	PNODE tempdelete=NULL;
	size=Count(*head);
	PNODE temp=NULL;
	if((pos<1 || (pos>(size))))
	{
		printf("Position is invalid \n");
		return;
	}
	if(pos==1)
	{
		DeleteFirst(head);
	}
	else if(pos==size)
	{
		DeleteLast(head);
	}
	else //at position
	{
		 
        temp=*head;
	     for(iCnt=1;iCnt<pos-1;iCnt++)
	      {
			  temp=temp->next;
		  }
		  tempdelete=temp->next;
		  temp->next=temp->next->next;
		  free(tempdelete);
		  
	}
	
	
}

int main()
{
	int iRet=0;
	PNODE first=NULL;
	
	InsertFirst(&first,101); //call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	InsertAtPos(&first,75,3);
	DeleteAtPos(&first,3);
	Display(first);  //call by value
	iRet=Count(first);
	printf("Count is :%d\n",iRet);
	InsertFirst(&first,1);
	
	Display(first);  //call by value
	iRet=Count(first);
	printf("Count is :%d\n",iRet);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	Display(first);
	
	DeleteFirst(&first);
	DeleteFirst(&first);
	Display(first);
	
	
	iRet=Count(first);
	printf("Count is :%d\n",iRet);
	DeleteLast(&first);
	Display(first);
	
	
	iRet=Count(first);
	printf("Count is :%d\n",iRet);
	
	
	
	return 0;
}