/*
  7.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Question:- Write a program to copy file1 into file2 ($cp file1 file2).
 */

#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main(){
	char buf[100];
	int fd;
	
	fd = open("test_Q7", O_RDONLY);
	int sz = read(fd, buf, sizeof(buf));
	buf[sz] = '\0';
	close(fd);
	
	fd = creat("Dest_File_Q7", 0744);
	sz = write(fd, buf, sz);
	
	close(fd);
}
