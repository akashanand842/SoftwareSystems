//Akash Anand
//MT2022009


//22. Write a program to wait for data to be written into FIFO within 10 seconds, use select system call with FIFO
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <unistd.h>    
#include <stdio.h>    
void main()
{
	char data[]="Hello world";
	int fd=open("./queue",O_WRONLY);
	int wB=write(fd,&data,sizeof(data));
	close(fd);

}
