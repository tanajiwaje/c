#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>
#define FILESIZE 1024


int main()
{
    char Fname[20];
    int fd=0;
	char Data[10];
	
	printf("Enter the file name \n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	//last parameter 
	//0 starting point
	//1 Current position
	//2 Ent point
	lseek(fd,10,0); //lseek(kashat,kiti,kutun)
	read(fd,Data,5);
	write(1,Data,5);
	
  
	return 0;
}
