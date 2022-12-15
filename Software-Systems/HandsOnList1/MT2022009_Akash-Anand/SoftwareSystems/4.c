/*
  4.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Question:- Write a program to open an existing file with read write mode. Try O_EXCL flag also.
 */
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	int fd;
	fd = open("TestQuestion4.txt", O_RDWR | O_CREAT | O_EXCL, 0744);
	int fd1 = open("TestQuestion4.txt", O_RDWR);
	if(fd == -1){
		perror("Error Details");
	}
	
	printf("Success\n fd = %d\n fd1 = %d\n", fd, fd1);
	
}
