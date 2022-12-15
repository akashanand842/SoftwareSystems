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
	int fd;
	struct{
		int ticket;
	}db;
	
	db.ticket = 100;
	fd = open("databaseQ17", O_CREAT | O_RDWR, 0744);
	write(fd, &db, sizeof(db));
	close(fd);
	fd = open("databseQ17", O_RDONLY);
	read(fd, &db, sizeof(db));
	printf("Ticket No = %d\n", db.ticket);
	close(fd);
	
	
}
