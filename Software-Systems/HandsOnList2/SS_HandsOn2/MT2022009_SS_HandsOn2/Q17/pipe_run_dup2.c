//Akash Anand
//MT2022009


//17. Write a program to execute ls -l | wc.
// a. use dup
// b. use dup2
// c. use fcntl

#include <unistd.h>   
#include <sys/types.h>
#include <stdio.h>     
void main()
{
    int pipefd[2];
    int pipeSt;
    pipeSt=pipe(pipefd);
    if(fork())
    {
	dup2(pipefd[0],0);
	close(pipefd[1]);
	execl("/usr/bin/wc","wc",NULL);
    }
    else
    {
        dup2(pipefd[1],1);
        close(pipefd[0]);
        execl("/usr/bin/ls","ls","-l",NULL);		
    }
}

