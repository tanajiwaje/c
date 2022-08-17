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

bool CheckPrime(int iNo)
{
	int iRet=0;
	iRet=CountFactor(iNo);
	if(iRet==0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	bool bRet;
	int iValue=0;
	printf("Enter Number \n");
	scanf("%d",&iValue);
	bRet=CheckPrime(iValue);
	if(bRet==true)
	{
		printf("%d is prime number \n",iValue);
	}
	else
	{
		printf("%d is not prime number \n",iValue);
	}
	return 0;
}