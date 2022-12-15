/**
 	12.c
 	Name:-  Akash Annad
	Roll Number:- MT2022009
 
	Question:- Write a program to find out the opening mode of a file. Use fcntl.
 */
#include<stdio.h>
#include<sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>
#include<unistd.h>


int main(){
	int fd;
	fd = open("test_Q12.txt", O_RDWR);
	if(fd != -1){
		printf("File Open MODE :   \n");
		int val = fcntl(fd, F_GETFL, 0);
		switch(val & O_ACCMODE){
			case 0:
	 			printf("Flag of opened file: O_RDONLY\n");
	 			break;
			case 1:
			 	printf("Flag of opened file: O_WRONLY\n");
			 	break;
        	case 2:
			 	printf("Flag of opened file: O_RDWR\n");
			 	break;
	 	    case 64:
			 	printf("Flag of opened file: O_CREAT\n");	
			 	break;
	     	case 512:
			 	printf("Flag of opened file: O_TRUNC\n");
			 	break;
	 		case 1024:
			 	printf("Flag of opened file: O_APPEND\n");
			 	break;
	    	default:
	 			printf("Not able to identify the flag type of the file.\n");
	 	}
	}
	else{
		printf("error");
	}
	return 0;
}
