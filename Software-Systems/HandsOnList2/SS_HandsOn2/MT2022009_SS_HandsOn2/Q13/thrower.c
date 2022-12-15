//Akash Anand
//MT2022009


//13. Write two programs: first program is waiting to catch SIGSTOP signal, the second program will send the signal (using kill system call). Find out whether the first program is able to catch the signal or not.

#include <sys/types.h> 
#include <signal.h>    
#include <unistd.h>    
#include <stdio.h>  
#include <stdlib.h>
int  main(int argc, char* argv[])
{

	if(argc!=2)
	{
		printf("too many or too few arguments\n");
		return 0;
	}
	int aim =atoi(argv[1]);
		printf("I am throwing to %d\n",aim);
		int killstat=kill(aim,SIGSTOP);
		sleep(2);
}


