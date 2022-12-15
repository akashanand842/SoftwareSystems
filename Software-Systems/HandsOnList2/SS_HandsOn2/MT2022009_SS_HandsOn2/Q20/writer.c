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
	char data[]="Hello world";
	printf("%lu",sizeof(data));
	int fd=open("./queue",O_WRONLY);
	int wB=write(fd,&data,sizeof(data));
	close(fd);

}
