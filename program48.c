//user retrurn number of count number is digit
#include<stdio.h>
int CountDigit(int iNo)
{
	int iCnt=0;
	if(iNo>0)
	{
		iNo=-iNo;
	}
    while(iNo>0)
	{
		iCnt++;
		iNo=iNo/10;
	}
      return iCnt;	
}

int main()
{
	int iRet=0;
int iNo=0;
printf("Enter a Number \n");
scanf("%d",&iNo);
iRet=CountDigit(iNo);
printf(" Value is %d",iRet);
return 0;
}