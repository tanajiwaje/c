//accept number from user and check even and odd
#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
	if((iNo%2)==0)
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
	
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
		printf("%d is even number\n",iValue);
	}
	else
	{
		printf("%d number is odd\n",iValue);
	}
	return 0;
}