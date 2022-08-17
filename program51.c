//disply even number
//721
//2 
#include<stdio.h>
//Input :7856
//output :
//6
//5
//8
//7
int SumEvenDigits(int iNo)
{  int iSum=0;
	int iDigit=0;
	//int iNo=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
	     if(iDigit%2==0)
		 {
			 iSum=iSum+iDigit;
		 }
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{   int iRet=0;
	int iValue=0;
    printf("Enter Number \n");
	scanf("%d",&iValue);
    iRet=SumEvenDigits(iValue);
	printf(" sumetion is of digit:%d",iRet);
	return 0;
}