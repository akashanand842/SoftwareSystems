/*
  8.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Question:- Write a program to open a file in read only mode, read line by line and display each line as it is read.
  Close the file when end of file is reached.

*/

#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main(){
	char buf;
	int fd;
	
	fd = open("test_Q8", O_RDONLY);
	while(read(fd, &buf, 1)){
		if(buf == '\n')
			getchar();
		else
			write(1, &buf, 1);
	}
	
	close(fd);
}
