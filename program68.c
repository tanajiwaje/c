#include<stdio.h>

void Display(int Arr[])
{
	int iCnt=0;
  printf("Elements of arry are:\n");	
  for(iCnt=0;iCnt<5;iCnt++)
  {
  printf("%d\n",Arr[iCnt]);
  }
	
}

int main()
{
	
  auto int Brr[5];
  register int iCnt=0;
  printf("Enter Elements : \n");
  for(iCnt=0;iCnt<5;iCnt++)
  {
  scanf("%d",&Brr[iCnt]);
  }
	
  Display(Brr);//Display(100);
  	
	return 0;
}