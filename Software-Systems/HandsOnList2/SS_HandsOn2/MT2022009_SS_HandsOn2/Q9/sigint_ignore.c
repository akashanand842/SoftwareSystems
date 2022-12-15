//Akash Anand
//MT2022009


//9. Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal - Use signal system call.
#include <signal.h>
#include <stdio.h>  
#include <unistd.h> 
void main()
{
	int i=0;
    __sighandler_t signalStatus; 
    signalStatus = signal(SIGINT, SIG_IGN);
    raise(SIGINT); 
    printf("%d SIGINT ignored\n",++i);
      raise(SIGINT);
    printf("%d SIGINT ignored\n",++i);

      raise(SIGINT);
    printf("%d SIGINT ignored\n",++i);

      raise(SIGINT);
    printf("%d SIGINT ignored\n",++i);

      raise(SIGINT);
    printf("%d SIGINT ignored\n",++i);
     signalStatus = signal(SIGINT, SIG_DFL);
    raise(SIGINT); 
     printf("%d SIGINT caught\n",++i);

        
}

