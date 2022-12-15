/**
  1c.c
  Name:- Akash Anand
  Roll Number:- MT2022009
  
  Question:- Create a pipe file using FIFO (mkfifo Library Function or mknod system call)
  Input:- Both arguments(files) will be created by the program only
 */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void main(int argc, char *argv[]) {
	
	// making fifo using mknod system call
	int mk = mknod(argv[2], __S_IFIFO | S_IRWXU, 0);

	if (mk == -1) {
		perror("Error creating FIFO using mknod");
	}
	else {
	
		printf("FIFO file created successfully using mknod\n");
	}
}
