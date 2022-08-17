#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter string \n");
	scanf("%[^'\n']",arr);
	
	iRet=CountSmall(arr);
	
	printf("small character are: %d\n ",iRet);
	return 0;
}