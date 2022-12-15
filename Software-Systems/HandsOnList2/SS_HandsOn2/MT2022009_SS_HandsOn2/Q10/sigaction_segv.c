//Akash Anand
//MT2022009


//10. Write a separate program using sigaction system call to catch the following signals.
// a. SIGSEGV
// b. SIGINT
// c. SIGFPE

#include <signal.h>
#include <stdio.h>  
#include <unistd.h> 

void callback(int val)
{
    printf("Signal SIGSEGV %d has been caught!\n",val);
    _exit(0);
}

void main()
{
    int signalStatus; 
    struct sigaction act;
    act.sa_handler = callback;
    act.sa_flags = 0;

    signalStatus = sigaction(SIGSEGV, &act, NULL);
    raise(SIGSEGV); 
        
}

