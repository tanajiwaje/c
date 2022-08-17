#include<stdio.h> //standard input output
#include<stdlib.h> //standard library
#include<unistd.h> //universal std
#include<fcntl.h>
int main()
{
	char Fname[20];
	int fd=0; //file descriptor
	printf("Enter file name to create ");
	scanf("%s",Fname);
	
	//creat is a system call
	fd=creat(Fname,0777); //(file name,octol number)
	if(fd==-1)  //(0 octal,4 read,2 write,1 execute)
	{
		printf("unable to create a file");
		return -1;
	}
	else
	{
		printf("file is succefully created with fd %d \n",fd);
	}
	return 0;
}