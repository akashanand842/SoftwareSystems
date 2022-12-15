/*
19.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question: Write a program to find out time taken to execute getpid system call. Use time stamp counter.
 */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>

unsigned long long rdtsc(){

	unsigned long long dst;
	__asm__ __volatile__("rdtsc":"=A"(dst));
	return dst;
}


int main(){
	long long int s,e;
	s=rdtsc();
	int pid=getpid();
	e=rdtsc();//number of clock cycles
	long long int time=(e-s)/2.9;
	printf("Difference is %llu ns\n",time);
	return 0;
}
