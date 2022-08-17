#include<stdio.h>

void Display(int iNo)
{
	static char ch='a';
	if(iNo>0)
	{
		printf("%c\t",ch);
		ch++;
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue=0;
	printf("enter number ");
	scanf("%d",&iValue);
     Display(iValue);
}