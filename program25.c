//Accept 0 te 35 passed class
/*
o to 35  Fail
35 to 60 pass class
50 to 60  Second class
60 to 70   First class
70 to 100  First class with disti
*/
#include<stdio.h>

void DisplayClass(float fMarks)
{
	if((fMarks>=0.0) && (fMarks<35.0))
	{
		printf("Your are fail\n");
	}
	
    else if(fMarks>=35.0 && fMarks<50.0)
	{
		printf("Pass class \n");
	}
	
	else if(fMarks>=50.0 && fMarks<60.0)
	{
		printf("Second class \n");
	}
	else if(fMarks>=60.0 && fMarks<70.0)
	{
		printf("First class \n");
	}		
	
    else if(fMarks >=70.0 && fMarks<=100.0)
	{
		printf("First class with distinction");
	}
	else
	{
		printf("Invalid marks");
	}
}

int main()
{
	float fValue=0.0;
	
	printf("Enter the percentages");
	scanf("%f",&fValue);
	
	DisplayClass(fValue);
	return 0;
} 