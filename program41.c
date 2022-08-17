#include<stdio.h>
#include<stdbool.h>


int CountFactor(int iNo)
{
	int iFactCnt=0;
	int iCnt=0;
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		
		if(iNo%iCnt==0)
		{
		iFactCnt++;	
		}
		
		
	}
	return iFactCnt;
	
}

int main()
{
	int iRet;
	int iValue=0;
	printf("Enter Number \n");
	scanf("%d",&iValue);
	iRet=CountFactor(iValue);
	printf("Number of Factor are :%d \n",iRet);
	return 0;
}