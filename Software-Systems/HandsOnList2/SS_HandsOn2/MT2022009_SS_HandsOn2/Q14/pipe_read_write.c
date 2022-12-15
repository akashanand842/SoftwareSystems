//AKASH ANAND
//MT2022009


//14. Write a simple program to create a pipe, write to the pipe, read from pipe and display on the monitor.
#include <unistd.h> 
#include <stdio.h>  
void main()
{
    int pipefd[2];              
    char *writeBuff = "educate\n"; 
    char *readBuff;
    int pipeSt;           
    int rB, wB; 
    pipeSt=pipe(pipefd);
     if (pipeSt == -1)
        perror("Error while creating the pipe! ");
    printf("Writing to the pipe!\n");
    wB = write(pipefd[1], &writeBuff, sizeof(writeBuff));
    printf("wrote %d characters\n",wB);
     printf("Reading from the pipe\n");
    rB = read(pipefd[0], &readBuff, wB);
    printf("read %d characters\n",rB);
     write(1,readBuff,sizeof(readBuff));
}

