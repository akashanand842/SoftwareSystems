/*
  1b.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Question:- Create a hardlink using link system call
  Input:- First argument(file) should exist and second argument will be created by the program
 */
 #include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]) {

	int s = link(argv[1], argv[2]);
	
	if (s == -1) {
		perror("Error creating harlink: ");
	} 
	
	else {
	
		printf("hardlink successfully created\n");
	}
	
	return 0;
}
