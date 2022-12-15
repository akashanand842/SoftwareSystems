//Akash Anand
//MT2022009


//22. Write a program to wait for data to be written into FIFO within 10 seconds, use select system call with FIFO
#include <sys/select.h>
#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	char str[50];
	struct timeval time;
	time.tv_sec=10;
	int fd=open("./queue",O_NONBLOCK|O_RDONLY);
	fd_set red;
	fd_set* red1=&red;
	FD_ZERO(red1);
	FD_SET(fd,red1);
	int k=select(1000, red1, NULL,NULL, &time);
	if(k==0)
	{
		printf("\nno input was given in 10 seconds\n");
		return 1;
	}
	int p=read(fd,&str,50);
	printf("\ninput found: %s\n",str);
}

