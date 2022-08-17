#include<stdio.h> //standard input output
#include<stdlib.h> //standard library
#include<unistd.h> //universal std
#include<fcntl.h>
#include<string.h> //string header file

//permission 0_Owner_Group_Other

int main()
{
	char Fname[20];
	char Data[100];
	int iRet=0;
	
	int fd=0; //file descriptor
	printf("Enter file name to create ");
	scanf("%s",Fname);
	
	printf("Enter the data that you want to write \n");
	scanf(" %[^'\n']",Data);
	//creat is a system call
	fd=creat(Fname,0777); //(file name,octol number)
	if(fd==-1)  //(0 octal,4 read,2 write,1 execute)
	{
		printf("unable to create a file");
		return -1;
	}
	
	printf("file is succefully created with fd %d \n",fd);
    iRet=write(fd,Data,strlen(Data));
    printf("%d bytes succesfully written in the file\n",iRet);
	
	return 0;
}