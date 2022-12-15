/*
 28.c
 Name:-  Akash Anand
 Roll Number:- MT2022009

Question:- Write a program to get maximum and minimum real time priority.
 */
#include <stdio.h>
#include <sched.h>


void main() {
    int max = sched_get_priority_max(SCHED_RR);
    if (max == -1)
        perror("Error\n");
    else
        printf("Maximum priority with RR Scheduling Policy: %d\n", max);

    int min = sched_get_priority_min(SCHED_RR);
    if (min == -1)
        perror("Error\n");
    else
        printf("Minimum priority with RR Scheduling Policy: %d\n", min);
}
