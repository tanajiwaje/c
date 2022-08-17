#include<stdio.h>
/////////////////////////////////////////////////////////
// Function Name:Addition
// Description  :Used to perform addition of 2 number
// Input        :Integer,Integer
// Output       :Integer
// Date         :12/4/2022
// Autor        :
////////////////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{
	int iAns=0;
	iAns=iValue1+iValue2;
	return iAns;
}


////////////////////////////////////////////////////////
//
// Write a program to perform addition of 2 number
//
///////////////////////////////////////////////////////

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iNo3=0;
	
	printf("Enter first number \n");
	scanf("%d",&iNo1);
	
	
	printf("Enter Second number \n");
	scanf("%d",&iNo2);
	
	iNo3=Addition(iNo1,iNo2);
	
	printf("Addition is :%d \n",iNo3);

return 0;	
}