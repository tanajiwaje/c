//input:5
//output:5* 4*3 *2 *1 *
//complexity 0(n)


#include<stdio.h>

void Display(int iNo)
{  
    int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d *\t",iCnt);
	}
}

int main()
{
	int iValue=0;
	printf("Plese enter the value: \n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}