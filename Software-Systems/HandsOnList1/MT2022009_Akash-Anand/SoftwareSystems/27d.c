/*
27d.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execle
d. execv
e. execvp
*/
#include <unistd.h>
#include <stdio.h>

void main()
{
    char *arguments[] = {"/bin/ls", "-Rl", "7.c", "8.c", NULL};
    printf(" Output using execv\n");
    execv(arguments[0], arguments);
    printf("\n");
}
