#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	for(i=0;i<iNo;i++)
	{
		printf("%c\t",'a'+i);
		
	}
}

int main()
{
	int iValue=0;
	printf("enter number ");
	scanf("%d",&iValue);
     Display(iValue);
}