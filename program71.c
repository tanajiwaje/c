#include<stdio.h>
#include<stdlib.h>

int  DisplayEven(int Arr[],int iLength)
{ int iCnt=0;
int iEvenCnt=0;
     printf("Even Number is :\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
		iEvenCnt++;
		}
	}
	return iEvenCnt++;
}

int main()
{   int iSize=0;
    int *ptr=NULL;
	int iCnt=0;
	
	printf("Enter number of elements \n");
	scanf("%d",&iSize);
	ptr=(int*)malloc(iSize*sizeof(int));
	printf("Enter the Value \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	int iRet=DisplayEven(ptr,iSize);
	printf("Count of even Number is %d :",iRet);
	free(ptr);
	return 0;
}