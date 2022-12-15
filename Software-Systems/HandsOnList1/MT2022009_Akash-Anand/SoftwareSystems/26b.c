/*
26b.c
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
	char *path="./26_extra_code.out";
	char *arg1="Akash ";
	char *arg2="Anand";
	execl(path, path, arg1, arg2, NULL);

	return 0;
}
