/*
26a.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
 */
 
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
 
 
int main(){
	char *path="/bin/ls";
	char *argument1="-l";
	execl(path,path,argument1,NULL);

	return 0;
}
