/*
21.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program, call fork and print the parent and child process id.
 */

#include <sys/types.h> 
#include <unistd.h>    
#include <stdio.h>     

void main()
{
    int childID, parentID;

    parentID = getpid();

    printf("Parent PID: %d\n", parentID);

    childID = fork();

    if (childID != 0)
        printf("Child PID: %d\n", childID);
}
