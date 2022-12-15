/*
22.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.
 */

#include <unistd.h>    
#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     

void main()
{
    int cPid, fd;
    fd = open("test_Q22_X", O_CREAT | O_WRONLY | O_APPEND, 0744);

    if ((cPid = fork()) != 0) // Only parent enter 
        write(fd, "Parent1\nP2", sizeof("Parent\n!"));
    else // Only child enter
        write(fd, "Child1\nC2", sizeof("Child\n!"));
    
    close(fd);
}
