//accept number from user and display larger number from user
//accpet n number and display sum of number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Minimum(int Arr[],int iSize,int iNo)
{
	int iCnt=0;
	//int iMin=Arr[0];
	int iFrequency=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	      if(iNo==Arr[iCnt])
		   {
		     break;
		   }
	
	}
	return true;
	
}
int main()
{
    int iNo=0;
	int *ptr=NULL;
	int iCnt=0;
	int iSize=0;
	bool iRet;
	printf("Enter how many number your want to store \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));
	printf("Enter number \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter Number you want to frequency of that number \n");
	scanf("%d",&iNo);
	iRet=Minimum(ptr,iSize,iNo);
	//printf(" is %d \n",iRet);
	if(iRet==true)
	{
		printf("Number are found\n");
	}
	else
	{
		printf("Number not found\n");
	}
	free(ptr);
	return 0;
}