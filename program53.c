#include<stdio.h>

int Reverse(int iNo)
{  int iRev=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
	    iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{   int iRet=0;
	int iValue=0;
    printf("Enter Number \n");
	scanf("%d",&iValue);
    iRet=Reverse(iValue);
	printf("Reverse Number is:%d",iRet);
	return 0;
}