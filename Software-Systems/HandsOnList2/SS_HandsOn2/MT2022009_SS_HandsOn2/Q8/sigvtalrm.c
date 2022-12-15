//Akash Anand
//MT2022009


//8. Write a separate program using signal system call to catch the following signals.
// a. SIGSEGV
// b. SIGINT
// c. SIGFPE
// d. SIGALRM (use alarm system call)
// e. SIGALRM (use setitimer system call)
// f. SIGVTALRM (use setitimer system call)
// g. SIGPROF (use setitimer system call

#include <signal.h>
#include <stdio.h>  
#include <unistd.h> 

#include <sys/time.h>
void callback()
{
    printf("RING RING VIRTUAL ALARM\n");
    _exit(0);
}

void main()
{
    __sighandler_t signalStatus; 

    signalStatus = signal(SIGVTALRM, (void *)callback);
     struct timeval time,time1;
	 time.tv_sec=2;
	 time.tv_usec=10;
	 time1.tv_sec=0;
	 time.tv_usec=0;
	 struct itimerval new_val;
	 new_val.it_interval=time1;
	 new_val.it_value=time;
	int chk= setitimer(ITIMER_VIRTUAL, &new_val,NULL);
	if(chk==-1)
	{
		printf("Failed to set alarm");
	}
	while(1);
}

