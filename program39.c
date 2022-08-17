#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt=0;
	bool bFlag=true;

for(iCnt=2;iCnt<=(iNo/2);iCnt++)
{
	if(iNo%iCnt==0)
	{
		bFlag=false;
	}
}
return bFlag;	
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
		printf("%d Number is prime \n",iValue);
	}
	else
	{
		printf(" %d Number is not prime \n",iValue);
	}
}