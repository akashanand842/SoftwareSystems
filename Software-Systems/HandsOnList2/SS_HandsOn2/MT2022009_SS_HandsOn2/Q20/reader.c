//Akash Anand
//MT2022009


//20. Write two programs so that both can communicate by FIFO -Use one way communication
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <unistd.h>    
#include <stdio.h>    
void main()
{
	char data[100];
	int fd=open("./queue",O_RDONLY);
	int rB=read(fd,&data,100);
	printf("%s",data);
	close(fd);

}

