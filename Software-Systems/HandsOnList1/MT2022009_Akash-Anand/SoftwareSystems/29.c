/*
29.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
*/
#include <stdio.h>
#include <sched.h>
#include <sys/types.h>
#include <unistd.h>


void main() {
    pid_t pid = getpid();
    int curr = sched_getscheduler(pid);
    struct sched_param priority;
    
    priority.sched_priority = 10;

    switch (curr) {
    
    case SCHED_FIFO:
        printf("Current policy is FIFO\n");
        sched_setscheduler(pid, SCHED_RR, &priority);
        curr = sched_getscheduler(pid);
        printf("Current policy is %d\n", curr);
        break;
    case SCHED_RR:
        printf("Current policy is RR\n");
        sched_setscheduler(pid, SCHED_FIFO, &priority);
        curr = sched_getscheduler(pid);
        printf("Current policy is %d\n", curr);
        break;
    case SCHED_OTHER:
        printf("Current policy is OTHER\n");
        sched_setscheduler(pid, SCHED_RR, &priority);
        curr = sched_getscheduler(pid);
        printf("Current policy is %d\n", curr);
        break;
    default:
        perror("Error\n");
    }
}
