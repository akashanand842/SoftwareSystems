//Akash Anand
//MT2022009


//13. Write two programs: first program is waiting to catch SIGSTOP signal, the second program will send the signal (using kill system call). Find out whether the first program is able to catch the signal or not.
#include <sys/types.h>
#include <signal.h>
#include<stdio.h>
#include<unistd.h>

void callback()
{
    printf("I have caught the signal\n");
    _exit(0);
}
int main()
{
	printf(" I am ready to catch, my id is %d", getpid());
	__sighandler_t signalStatus;
	signalStatus = signal(SIGSTOP, (void *)callback);
	getchar();
}

