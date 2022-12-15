/*
  9.c
  Name:-  Akash Anand
  Roll Number:- MT2022009
  
 Question:- Write a program to print the following information about a given file.
 * a. inode
 * b. number of hard links
 * c. uid
 * d. gid
 * e. size
 * f. block size
 * g. number of blocks
 * h. time of last access
 * i. time of last modification
 * j. time of last change
 
 */

#include<stdio.h>
#include<sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>

int main(){
	int fd = creat("test_Q9.txt", 0744);
	if(fd == -1){
		printf("File not created ");
	}
	else{
		struct stat fileStats;
		int i = fstat(fd, &fileStats);
		if(i != 0){
			printf("Error");
		}
		else{
			printf("Inode : %d\n", (int)fileStats.st_ino);
			printf("Number of Hard Links : %d\n", (int)fileStats.st_nlink);
			printf("Uid : %d\n", (int)fileStats.st_uid);
			printf("Gid : %d\n", (int)fileStats.st_gid);
			printf("Size : %d\n", (int)fileStats.st_size);
			printf("Block Size : %d\n", (int)fileStats.st_blksize);
			printf("Number of Blocks : %d\n", (int)fileStats.st_blocks);
			printf("time of Last Access : %s\n", ctime(&fileStats.st_atime));
			printf("Time of last Modification : %s\n", ctime(&fileStats.st_mtime));
			printf("Time of last change : %s\n", ctime(&fileStats.st_ctime));
		}
	}
	
	
}
