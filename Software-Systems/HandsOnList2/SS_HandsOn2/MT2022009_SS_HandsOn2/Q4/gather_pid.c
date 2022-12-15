//Akash Anand
//MT2022009


//4. Write a program to measure how much time is taken to execute 100 getppid () system call. Use time stamp counter.

#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

#ifdef _MSC_VER
#include<intrin.h>
#else
#include<x86intrin.h>
#endif

void main()
{
	int str, end,pid,i=0;
	struct timeval timestamp;
	str= __rdtsc();
	while(i<100)
	{
		pid=getppid();
		i++;
	}
	end= __rdtsc();

	printf("pid: %d\n",pid);
	printf("time taken: %d\n", end-str);
}	

