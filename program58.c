#include<stdio.h>
typedef unsigned long int ULONG;
ULONG Power(int iNo1,int iNo2)
{
	ULONG iMult=1;
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
	
}
int main()
{
	auto int iValue1=0,iValue2=0;
	ULONG  lRet=0;
	
	printf("Enter base :\n");
	scanf("%d",&iValue1);
	
	printf("Enter power :\n");
	scanf("%d",&iValue2);
	lRet=Power(iValue1,iValue2);
	printf("Result is : %ld \n",lRet);
	return 0;
}