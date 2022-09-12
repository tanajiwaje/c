#include<stdio.h>

int main()
{
	char ch='\0';
	int lower,upper;
	printf("Enter character \n");
	scanf("%c",&ch);
	
	lower=(ch=='a' || ch=='e' || ch=='i' || ch=='o'||ch=='u');
	upper=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' );
    printf("%d",lower);
	if(lower||upper)
	{
		printf("Vowel");
	}
	else
	{
		printf("consonat");
	}
	
	return 0;
}
