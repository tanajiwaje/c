//accpet n number and display sum of number

#include<stdio.h>
#include<stdlib.h>
int Summetion(int Arr[],int iSize)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	 iSum=iSum+Arr[iCnt];
	}
	return iSum;
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
	int iRet=Summetion(ptr,iSize);
	printf("Summetion of the number is %d \n",iRet);
	free(ptr);
	return 0;
}