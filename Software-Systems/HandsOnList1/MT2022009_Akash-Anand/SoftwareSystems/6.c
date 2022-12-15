/*
  6.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
 Question:- Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
 */
#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main(){
	char buf[100];
	int fd;
	fd = read(0, buf, sizeof(buf));
	write(1, buf, fd);
	
}
