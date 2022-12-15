//Akash Anand
//MT2022009


//19. Create a FIFO file by
// a. mknod command
// b. mkfifo command
// c. use strace command to find out, which command (mknod or mkfifo) is better.
// c. mknod system call
// d. mkfifo library function

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
	char* st="./makenod_fifo_sys";
	int k=mknod(st,00777|S_IFIFO,0);
	printf("%d\n",k);
	char* st2="./makefifo_fifo_lib";
	k=mkfifo(st2,00777);
        printf("%d\n",k);

}

