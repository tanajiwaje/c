//program to display 1 to 5 on screen
//output 1  2  3  4  5 

#include<stdio.h>

int Sum(int iNo)
{	
   int iAns=0;
   int iCnt=0;
   
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
	   iAns=iCnt+iAns;
	   
   }
   return iAns;
  
  
}


int main()
{
	int iRet=0;
	int iValue=0;
	printf("enter the number");
	scanf("%d",&iValue);
	iRet=Sum(iValue);
	printf("%d \n",iRet);
	return 0;
}