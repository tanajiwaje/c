//accept number from user and check even and odd
#include<stdio.h>
#include<stdbool.h>


bool Check(int iNo)
{
	if(
	    ((iNo%3)==0) && 
	    ((iNo%5)==0)
	   )
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
	bool bRet=false;
	int iValue=0;
	printf("enter number");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	if(bRet==true)
	{
		printf("%d is divisibel by 3 & 5\n",iValue);
	}
	else
	{
		printf("%d is not divisibel by 3 & 5\n",iValue);
	}
	return 0;
}