//Akash Anand
//MT2022009


//21. Write two programs so that both can communicate by FIFO -Use two way communications.
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <unistd.h>    
#include <stdio.h>    
void main()
{

	char data2[100];
	int fd2=open("./queue1",O_RDONLY);
	int rB=read(fd2,&data2,100);
	printf("%s",data2);

	char data1[]="Message from chatter2";
        int fd1=open("./queue2",O_WRONLY);
        int wB=write(fd1,&data1,sizeof(data1));


	close(fd1);
	close(fd2);

}

