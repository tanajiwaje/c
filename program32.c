#include<stdio.h>


int DisplayNonFactor(int iNo)
{
	int iCnt=0;
	int Flage=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iCnt%2)!=0)
		{
			Flage=Flage+iCnt;
			printf("%d",iCnt);
		}
	}


     return Flage;	
} 




int main()
{

int iValue=0;
int iRet=0;


printf("enter a value \n" );
scanf("%d",&iValue);

iRet=DisplayNonFactor(iValue);
printf("%d",iRet);

}