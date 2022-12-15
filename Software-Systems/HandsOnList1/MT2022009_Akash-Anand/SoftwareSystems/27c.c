/*
27c.c
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
    char *command = "/bin/ls";
    char *opt = "-Rl";
    char *arg = "7.c"; 
	char *arg1 = "8.c";
    printf("Output using execle\n");
    execle(command, command, opt, arg, arg1, NULL, NULL);
    printf("\n");
}

