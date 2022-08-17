#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrom(int iNo)
{  int iRev=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iTemp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
	    iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(iRev==iTemp)
	{
	   return true;
	}
	else
	{
		return false;
	}
}
int main()
{   bool bRet=false;
	int iValue=0;
    printf("Enter Number \n");
	scanf("%d",&iValue);
    bRet=CheckPallindrom(iValue);
	if(bRet==true)
	{
		printf("Number i pallindrom %d",iValue);
	}
	else
	{
		printf("Number is not pallindrom %d",iValue);
	}
	//printf("Reverse Number is:%d",iRet);
	return 0;
}