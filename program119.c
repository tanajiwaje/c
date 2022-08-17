//singly linear linked list
/*
   InsertFirst 
   InsertLast
   InsertAtPosition
   
   DeleteFirst
   DeleteLast
   DeleteAtPosition
   
   Display
   Count
*/ 
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
	
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

/*
1.allocate memory for node
2.Initialise the node 
3.chcke whether LL is empty or not
4.if LL is empty the new node is the first node
5.if ll contians atleast node in it then store 


*/
void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
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
	while(Head != NULL)
	{
		printf("%d\t",Head->)
		
	}
}

int main()
{
	PNODE First=NULL; //stuct node *First =NULL
	
	
	Display(First)
	return 0;
}
/*
   Rules 
   1.use only dynamic memeory allocations
   2.Dont write ant techical syntax in main
   3.Dont use any global vairables
   4.be carefullly while manipulating the first pointer 
   5.Pass the First pointer directly if the function is not going to modify the ll.
   6.Pass the address of first pointer if the function is going to modify the ll.(Insert)



*/