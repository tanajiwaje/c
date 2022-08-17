#include<stdio.h>

void Display(int iNo)
{
	int i=0;
	char ch='a';
	for(i=0;i<iNo;i++)
	{
		printf("%c\t",ch);
		ch++;
	}
}

int main()
{
	int iValue=0;
	printf("enter number ");
	scanf("%d",&iValue);
     Display(iValue);
}