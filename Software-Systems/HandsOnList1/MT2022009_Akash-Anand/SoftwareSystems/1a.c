/*
  1a.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
  Q1-  Create a softlink using symlink system call
  Input:- First argument(file) should exist and second argument will be created by the program
 */
 #include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
	// argv[1]  = source file
	// argv[2] is link to that source file
	int s = symlink(argv[1], argv[2]);
	
	if (s == -1) {
		perror("Error creating softlink: ");
	} 
	else {
	
		printf("softlink successfully created\n");
	
	}
	
	return 0;
}
