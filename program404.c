#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
	
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int iNo)
{
	PNODE temp=*Head;
	PNODE newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
	newn->lchild=NULL;
	newn->rchild=NULL;
	
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(1)
		{
			if(iNo>temp->data)
			{
				if(temp->rchild==NULL)
				{
					temp->rchild=newn;
					break;
				}
				temp=temp->rchild;
			}
			else if(iNo<temp->data)
			{
				if(temp->lchild==NULL)
				{
					temp->lchild=newn;
					break;
				}
				temp=temp->rchild;
			}
			else if(iNo==temp->data) //Duplicate
			{
				free(newn);
				printf("Data is already there BST");
				break;
			}
		}
	}
}

void Inorder(PNODE Head)
{
	if(Head!=NULL)
	{
		Inorder(Head->lchild);
		printf("%d",Head->data);
		Inorder(Head->rchild);
	}
}

void Preorder(PNODE Head)
{
	if(Head!=NULL)
	{
		printf("%d",Head->data);
		Inorder(Head->lchild);
		Inorder(Head->rchild);
	}
}

void Postorder(PNODE Head)
{
	if(Head!=NULL)
	{
		
		Inorder(Head->lchild);
		Inorder(Head->rchild);
		printf("%d",Head->data);
	}
}

bool Search(PNODE Head,int iNo)
{
	while(Head!=NULL)
	{
		if(Head->data==iNo)
		{
			
			break;
		}
		else if(iNo>Head->data)
		{
			Head=Head->rchild;
		}
		else if(iNo<Head->data)
		{
			Head=Head->lchild;
		}
	}
	if(Head==NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
    PNODE First=NULL;
	bool bret=false;
	Insert(&First,11);
	Insert(&First,21);
	Insert(&First,8);
	
	printf("\nInorder data \n");
	Inorder(First);
	
	printf("\nPostorder data \n");
	Postorder(First);
	
	printf("\nPreorder data \n");
	Preorder(First);
	
	
	bret=Search(First,7);
	if(bret==true)
	{
		printf("Elements is there in tree \n");
	}
	else
	{
		printf("There is no elmets in tree \n");
	}
	return 0;
}