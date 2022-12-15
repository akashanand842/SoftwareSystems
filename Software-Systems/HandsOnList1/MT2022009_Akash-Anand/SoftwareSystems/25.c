/*
25.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
 */


#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

void main()
{
    pid_t A, B, C, terminatedChild;
    int waitStatus;

    if ((A = fork()) == 0) {
        printf("Child A created\n");
        printf("A sleep for 5 sec\n");
        sleep(5);
        printf("A is now awake!\n");
        _exit(0);
    } 
    else {
        if ((B = fork()) == 0) {
            printf("Child B created...\n");
            printf("B sleep for 10 sec\n");
            sleep(10);
            printf("B is now awake!\n");
            _exit(0);
        } 
        else {
            if ((C = fork()) == 0) {
                printf("Child C created...\n");
                printf("C sleep for 15 sec\n");
                sleep(15);
                printf("C is now awake!\n");
                _exit(0);
            } 
            else {
                terminatedChild = waitpid(C, &waitStatus, 0);
                if (terminatedChild == C) {
                    if (waitStatus == 0)
                        printf("C has terminated with exit status = 0\n");
                    else
                        printf("Child has exited with exit status : %d\n", waitStatus);
                }
            }
        }
    }
}
