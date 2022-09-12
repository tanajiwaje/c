#include<stdio.h>

int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='z')
       printf("character is an alphabet");
	else
		printf("character is not alphabet");
	
	return 0;
}
