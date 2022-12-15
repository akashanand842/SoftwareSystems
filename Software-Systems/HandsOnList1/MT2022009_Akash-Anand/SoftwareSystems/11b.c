/*
  11b.c
  Name:- Akash Anand
  Roll Number:- MT2022009
  
  Question:- Write a program to open a file, duplicate the file descriptor and append the file with both the
  descriptors and check whether the file is updated properly or not.
  b. use dup2
 */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void main(int argc, char *argv[]) {
	int fd = open(argv[1], O_WRONLY | O_APPEND);
	if (fd == -1) {
		perror("Error");
		return;
	}
	
	
	int dfd = dup2(fd, 100);
	
	
	int wd = write(fd, "ORIGINAL FILE DESCRIPTOR\n", sizeof("ORIGINAL FILE DESCRIPTOR\n");
	if (wd == -1) {
		perror("Error");
	}

	
	wd = write(dfd, "DUPLICATE FILE DESCRIPTOR\n", sizeof("DUPLICATE FILE DESCRIPTOR\n"));
	if (wd == -1) {
		perror("Errorr");
	}
}
