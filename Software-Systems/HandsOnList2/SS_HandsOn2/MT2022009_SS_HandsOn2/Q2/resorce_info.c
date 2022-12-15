//Akash Anand
//MT2022009


//2. Write a program to print the system resource limits. Use getrlimit system call.


#include <sys/time.h>
#include <sys/resource.h>
#include <stdio.h>
void run_getrlim(int res, struct rlimit output)
{
	 int k=getrlimit(RLIMIT_AS, &output);
	 printf("soft limit : %lu\n",output.rlim_cur);
         printf("hard limit : %lu\n",output.rlim_max);
}
int main()
{
	 struct rlimit output;
	 printf("maximum size of the process's virtual memory:\n");
	 run_getrlim(RLIMIT_AS,output);         
	 printf("the maximum size of a core file:\n");
         run_getrlim(RLIMIT_CORE,output);
	  printf("the amount of CPU time that the process can consume:\n");
         run_getrlim(RLIMIT_CPU,output);
	 printf("the maximum size of the process's data  segment:\n");
         run_getrlim(RLIMIT_DATA,output);
	 printf("the maximum size in bytes of files that the process may create:\n");
         run_getrlim(RLIMIT_FSIZE,output);
	 printf("the combined number of flock(2) locks and fcntl(2) leases that this process may establish:\n");
         run_getrlim(RLIMIT_LOCKS,output);
	 printf("the  maximum  number of bytes of memory that may be locked into RAM:\n");
         run_getrlim(RLIMIT_MEMLOCK,output);
	 printf("the number of bytes that can be allocated for POSIX message queues for the real user ID  of  the  calling process:\n");
         run_getrlim(RLIMIT_MSGQUEUE,output);
	 printf("ceiling  to  which  the  process's nice value can be raised using setpriority(2):\n");
         run_getrlim(RLIMIT_NICE,output);
	 printf("the maximum file descriptor number that can be opened  by  this process:\n");
         run_getrlim(RLIMIT_NOFILE,output);
	 printf("the number of extant process (or, more precisely on Linux, threads) for the real user ID of the calling process:\n");
         run_getrlim(RLIMIT_NPROC,output);
	 printf("the process's resident set:\n");
         run_getrlim(RLIMIT_RSS,output);
	 printf("the  real-time  priority  that  may  be  set  for  this  process :\n");
         run_getrlim(RLIMIT_RTPRIO ,output);
	 printf("the amount of CPU time that a process scheduled under a real-time scheduling policy:\n");
         run_getrlim(RLIMIT_RTTIME,output);
	 printf("the  number  of  signals that may be queued for the real user ID of the calling process:\n");
         run_getrlim(RLIMIT_SIGPENDING,output);
	 printf(" maximum size of the process stack, in bytes:\n");
         run_getrlim(RLIMIT_STACK,output);


}

