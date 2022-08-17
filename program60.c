//armstrong Number

#include<stdio.h>
#include<stdbool.h>

bool Armstrong(int iNo)
{
	int iCnt=1;
	int iTemp=iNo;
	int iDigit=0;
	int iAr=0;
	int iAns=0;
	while(iNo>0)
	{
		iNo/10;
		iCnt++;
		iNo=iNo/10;
	}
	
	while(iNo>0)
	{
		iDigit=iNo/10;
		iAns=iDigit*iCnt;
		iAr=iAr+iAns;
		iNo=iNo/10;
	}
	if(iAr==iTemp)
	{
		printf("number same");
		
	}
	else
	{
		printf("mot saeme");
	}
}

int main()
{
   int iValue1=0;
	bool bRet=0;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue1);
	bRet=Armstrong(iValue1);
	//printf(if)
	return 0;
}