//Akash Anand
//MT2022009


//12. Write a program to create an orphan process. Use kill system call to send SIGKILL signal to the parent process from the child process.
#include <sys/types.h> 
#include <signal.h>    
#include <unistd.h>    
#include <stdio.h>  

int  main()
{
	int killstat;
	if(fork())
	{
		while(1);
	}
	else
	{
		printf("My father is %d\n",getppid());
		sleep(2);
		killstat=kill(getppid(),SIGKILL);
		sleep(10);
		 printf("My father is %d\n",getppid());

	}
}

