/*
 17.c
 Name:-  Akash Anand
 Roll Number:- MT2022009
  
 Question:- Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
 */
 
 
#include <unistd.h>
#include <fcntl.h>
#include <sys/file.h>
#include<stdio.h>

int main(){
	struct{
		int ticket;
	}db;
	
	struct flock flck;
	int fd;
	fd = open("databaseQ17", O_RDWR);
	read(fd, &db, sizeof(db));
	
	int i,k;
	flck.l_type=F_WRLCK;
	flck.l_whence=SEEK_SET;
	flck.l_start=0;
    flck.l_len=0;
	flck.l_pid=getpid();
	printf("Before the crictical Section...\n");
	fcntl(fd, F_SETLKW, &flck);
	printf("Current Ticket : %d\n", db.ticket);
	//updating
	db.ticket++;
	lseek(fd, 0, SEEK_SET);
	printf("Inside Critical Section\n");
	write(fd, &db, sizeof(db));
	printf("Enter to unlock..\n");
	getchar();
	flck.l_type = F_UNLCK;
	printf("Unlocked\n");
	fcntl(fd, F_SETLK, &flck);
	printf("Finished\n");	
}



