/*
 16a.c
 Name:-  Akash Anand
 Roll Number:- MT2022009
  
 Question:- Write a program to perform mandatory locking.
a. Implement write lock
b. Implement read lock
 */

#include <unistd.h>
#include <fcntl.h>
#include <sys/file.h>
#include<stdio.h>

int main()

{

	struct flock flck;
	int i;
	//write lock F_WRLCK
	flck.l_type=F_WRLCK;
	flck.l_whence=SEEK_SET;
	flck.l_start=0;
    flck.l_len=0;
	flck.l_pid=getpid();
	i=open("secretFile_Q16.txt", O_RDWR);
	//lock using F_SETLKW
	fcntl(i, F_SETLKW, &flck);
	printf("\n Write lock ON: Type something\n");		
	char c=getchar();
	flck.l_type=F_UNLCK;
	//Unlocked
	fcntl(i,F_SETLKW,&flck);

}
