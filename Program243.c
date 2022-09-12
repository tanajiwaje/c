#include<stdio.h>

int main()
{
	//whether leap year or not
	//400
	//100
	//4
	
	int year;
	printf("Enter a year \n");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("%d is a leap year",year);
	}
	else if(year%4==0)
	{
	    printf("%d is a leap year div by 4 ",year);	
	}
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
	else
	{
		printf("%d is not a leap year ",year);
	}
		
	return 0;
}