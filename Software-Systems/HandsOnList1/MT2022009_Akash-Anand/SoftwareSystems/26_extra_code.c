/*
26.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
*/


#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){

	printf("No. of command line arguments : %d\n",argc);
	printf("They are : ");
	for(int i=0;i<argc;i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
