/*
  5.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
   Question:- Write a program to create five new files with infinite loop. Execute the program in the background
 * and check the file descriptor table at /proc/pid/fd.
 */
#include<stdio.h>
#include<fcntl.h>

int main(){
	int fd;
	char *name[] = {
			"Q5_first.txt",
			"Q5_second.txt",
			"Q5_third.txt",
			"Q5_fourth.txt",
			"Q5_fivth.txt"
			};
	int c = 0;
	while(1){
		if(c < 5){
			fd = open(name[c], 0744);
			c++;
		}
		
	
	}
}
