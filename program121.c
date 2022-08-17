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

int main()
{
	int iRet=0;
	PNODE first=NULL;
	
	InsertFirst(&first,101); //call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
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
	
	iRet=Count(first);
	printf("Count is :%d\n",iRet);
	return 0;
}