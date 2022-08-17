//accept number from user and display factor of that Number 
//Input 10
//1  2  5
#include<stdio.h>
 
void DisplayFactor(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo-1;iCnt=iCnt+1)
	{
		if((iNo%iCnt)==0)
		{
		  printf("%d\n",iCnt);
		}
	}
}
 
int main()
{ 
 int iValue=0;
 printf("Enter a Number");
 scanf("%d",&iValue);
 DisplayFactor(iValue);
 return 0;	 
}

/*
if((iNo%1)==0)
{}
if((iNo%2)==0)
{}
if((iNo%3)==0)
{}
if((iNo%4)==0)
{}
if((iNo%5)==0)
{}
if((iNo%6)==0)
{}
if((iNo%7)==0)
{}
if((iNo%8)==0)
{}
if((iNo%9)==0)
{}
*/
