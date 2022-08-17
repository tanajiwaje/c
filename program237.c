#include<stdio.h> //standard input output
#include<stdlib.h> //standard library
#include<unistd.h> //universal std
#include<fcntl.h>
#include<string.h> //string header file

//O_RDONLY read
//O_WRONLY write
//O_RDWR  Read+Write

int main()
{
	char Fname[20];
	
	
	int fd=0;
	printf("Enter file name to open\n ");
	scanf("%s",Fname);
	
	
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)  
	{
		printf("unable to open a file");
		return -1;
	}
	
	printf("file is succefully opened with fd %d \n",fd);
   
	
	return 0;
}