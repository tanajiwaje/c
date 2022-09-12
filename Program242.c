#include<stdio.h>

int main()
{
	int no1=0,no2=0,no3=0;
	printf("Enter first Number");
	scanf("%d",&no1);
	
	printf("Enter second Number");
	scanf("%d",&no2);
	
	printf("Enter Third Number");
	scanf("%d",&no3);
	
	if(no1>no2 && no1>no3)
		printf("no1 is greater %d",no1);
	else if(no2>no1 && no2>no3)
		printf("no2 is greater %d",no2);
	else
		printf("no3 is greater %d",no3);
}