/*
  10.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
 Question:- Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
 bytes (use lseek) and write again 10 bytes.
 a. check the return value of lseek
 b. open the file with od and check the empty spaces in between the data.
 */

#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

void main(){
	
	int fd = open("seekQ10", O_CREAT | O_RDWR, 0744);
	if (fd == -1) {
		perror("Error opening the file");
		return;
	}
	write(fd, "Hello Everyone\n", sizeof("Hello Everyone\n"));
	int mvd = lseek(fd, 10L, SEEK_CUR);
	
	write(fd, "Thank You\n", sizeof("Thank You\n"));
	
	printf("space moved = %d", mvd);
	
	close(fd);
}
