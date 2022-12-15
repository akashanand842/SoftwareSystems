/*
27a.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execle
d. execv
e. execvp
*/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	char *command="/bin/ls";
	char *opt="-Rl";
	char *arg1="7.c";
	char *arg2 = "8.c";
	printf("Output\n");
	execl(command, command, opt, arg1, arg2, NULL);

	return 0;
}
