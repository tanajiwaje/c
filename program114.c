/*

*
**
***
* * * *







*/
/*
a b c d
a b c d
a b c d
*/

#include<stdio.h>
void Display(int iRow,int iCol)
{  
   int i=0;
   int j=0;
 
   if(iRow != iCol)
    {
	  printf("Invalid input \n");
	  return;
    }  
	for(i=1;i<=iRow;i++)
    {
	  for(j=iCol;j>=1;j--)
	   {
		   if(i==j)
		   {
		printf("$\t");
	   
		   }
		   else
		   {
			   printf("*\t");
		   }
		   }
		   
	     printf("\n");
    }
   
  
}

int main()
{
	int iValue1=0,iValue2=0;
	printf("Please Enter Row: \n");
	scanf("%d",&iValue1);
	printf("Please Enter column \n");
	scanf("%d",&iValue2);
	Display(iValue1,iValue2);
	return 0;
}