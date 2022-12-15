/**
 13.c
 Name:-  Akash Anand
 Roll Number:- MT2022009
  
 Question:- Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
 verify whether the data is available within 10 seconds or not (check in $man 2 select).
 */
#include<stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
	struct timeval time;
	
	
	fd_set rfd, wfd;
	
	
	FD_SET(STDIN_FILENO, &rfd);
	FD_SET(STDOUT_FILENO, &wfd);
	
	
	time.tv_sec = 10;
	time.tv_usec = 0;
	
	int value = select(1, &rfd, &wfd, NULL, &time);
	
	if (value == -1) {
		perror("Error");
	} 
	else if (value) {
		printf("Data Available\n");
	} 
	else {
		printf("10 seconds completed, data is still not here.\n");
	}
}
