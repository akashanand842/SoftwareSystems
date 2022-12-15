/*
24.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to create an orphan process.
 */

#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
    pid_t childPId;

    if ((childPId = fork()) != 0) {
        printf("Parent PID: %d\n", getpid());
        printf("Parent sleep for 10s\n");
        sleep(10);
        printf("Parent Exitting\n");
        exit(0);
    } 
    else {
        printf("Child PID: %d\n", getpid());
        printf("Child sleep for 100s!\n");
        sleep(100);
        printf("Child is now awake!\n");
    }
}
