#include<stdio.h>

int main()
{ //arr is one dimention array 
//which contains 5 elements 
//and each elements is of type int
  auto int Arr[5];
  register int iCnt=0;
  printf("Enter Elements : \n");
  for(iCnt=0;iCnt<5;iCnt++)
  {
  scanf("%d",&Arr[iCnt]);
  }
	
  printf("Elements of arry are:\n");	
  for(iCnt=0;iCnt<5;iCnt++)
  {
  printf("%d\n",&Arr[iCnt]);
  }
  	
	return 0;
}