/**
  11a.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Question:- Write a program to open a file, duplicate the file descriptor and append the file with both the
  descriptors and check whether the file is updated properly or not.
  a. use dup
 */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void main(int argc, char *argv[]) {
	int fd = open(argv[1], O_WRONLY, O_APPEND);
	if (fd == -1) {
		perror("Error opening the file");
		return;
	}

	int dfd = dup(fd);

	
	int wb = write(fd, "ORIGINAL FILE DESCRIPTOR\n", sizeof("ORIGINAL FILE DESCRIPTOR\n"));
	if (wb == -1) {
		perror("Error");
	}

	
	wb = write(dfd, "DUPLICATE FILE DESCRIPTOR\n", sizeof("DUPLICATE FILE DESCRIPTOR\n"));
	if (wb == -1) {
		perror("Error");
	}
}
