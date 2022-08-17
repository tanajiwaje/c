#include<stdio.h>

int SumDigit(int iNo)
{
	int digit=0;
	int iSum=0;
	while(iNo>0)
	{
		digit=iNo%10;
		iSum=digit+iSum;
		iNo=iNo/10;
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter digit");
	scanf("%d",&iValue);
	iRet=SumDigit(iValue);
	printf("addition is:%d",iRet);
}