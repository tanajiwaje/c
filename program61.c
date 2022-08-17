//armstrong Number
#include<stdio.h>
#include<stdbool.h>
bool CheckArmstrong(int iNo)
  {  int iDigit=0;
	int iTemp=0;
	int iDigCnt=0;
	int iSum=0;
	int iCnt=0;
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iTemp=iNo;
	//calculate number of digits
	while(iNo!=0)
	{
		iDigCnt++;
		iNo=iNo/10;
	}
	iNo=iTemp;
	while(iNo!=0)
	{
		iMult=1;
		iDigit=iNo%10;
		for(iCnt=1;iCnt<=iDigCnt;iCnt++)
	        {
		         iMult=iMult*iDigit;
	        }
		iSum=iSum+iMult;
		
		iNo=iNo/10;
	}
	if(iSum==iTemp)
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
   int iValue1=0;
	bool bRet;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue1);
	bRet=CheckArmstrong(iValue1);
	if(bRet==true)
	{
		printf("%d is armstrong number",iValue1);
	}
	else
	{
		printf("%d is not armstrong number",iValue1);
	}
	return 0;
}