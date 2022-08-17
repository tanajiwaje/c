#include<stdio.h>
//Input :7856
//output :
//6
//5
//8
//7
int SumetionDigits(int iNo)
{
	int iSum=0;
	int iDigit=0;
	//int iNo=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		//printf("%d ",iDigit);
		iNo=iNo/10;
		
	}
	return iSum;
}
int main()
{   int iRet=0;
	int iValue=0;
    printf("Enter Number \n");
	scanf("%d",&iValue);
	iRet=SumetionDigits(iValue);
	printf(" sumetion is of digit:%d",iRet);
	return 0;
}