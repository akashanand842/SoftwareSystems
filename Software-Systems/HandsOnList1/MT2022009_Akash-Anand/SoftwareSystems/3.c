/**
 3.c
 Name:-  Akash Anand
 Roll Number:- MT2022009
  
 Question:- Write a program to create a file and print the file descriptor value. Use creat ( ) system call
 */
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void main(int argc, char *argv[]) {
	int fd;

	fd = creat(argv[1], S_IRWXU);
	
  if (fd == -1) {
	perror("Error");
  } 
  else {
	printf("File is successfully created with file descriptor value : %d\n", fd);
  }
}
