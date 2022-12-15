//Akash Anand
//MT2022009


//9. Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal - Use sigaction system call.
#include <signal.h>
#include <stdio.h>  
#include <unistd.h> 
void main()
{
	int i=0;
    int signalStatus; 
    struct sigaction act;
    act.sa_handler = SIG_IGN ;
    act.sa_flags = 0;

     signalStatus = sigaction(SIGINT, &act, NULL);
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
      act.sa_handler = SIG_DFL;
    act.sa_flags = 0;
     signalStatus = sigaction(SIGINT, &act, NULL);
    raise(SIGINT); 
     printf("%d SIGINT caught\n",++i);

        
}

