//progaram to display 5 times hello on screen
#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;


	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("Hello\n");
	}
}
int main()
{
	int iValue=0;
	printf("Enter how much number");
	scanf("%d",&iValue);
	 Display(iValue);
	
	return 0;
}