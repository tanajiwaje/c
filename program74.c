//accept number from user and display larger number from user
//accpet n number and display sum of number

#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iSize)
{
	int iCnt=0;
	int iMin=Arr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
	
}
int main()
{
	int *ptr=NULL;
	int iCnt=0;
	int iSize=0;
	printf("Enter how many number your want to store \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));
	printf("Enter number \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	int iRet=Minimum(ptr,iSize);
	printf("Minimun number is %d \n",iRet);
	free(ptr);
	return 0;
}