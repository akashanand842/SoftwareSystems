/*
23.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to create a Zombie state of the running program.
 */


#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>

void main()
{
    pid_t childPId;

    if ((childPId = fork()) != 0) {
        printf("Parent PID: %d\n", getpid());
        printf("Putting parent to sleep for 100s!\n");
        sleep(100);
        printf("Parent is now awake!\n");
    }
    else {
        printf("Child PID: %d\n", getpid());
        printf("Exiting child!\n");
        exit(0);
    }
}
