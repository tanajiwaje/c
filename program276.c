#include<stdio.h>

void Display(char *str)
{
	if(*str!='\0')
	{
		printf("%s\n",str); //tail recursion
		Display(str+1);
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter String \n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	return 0;
}