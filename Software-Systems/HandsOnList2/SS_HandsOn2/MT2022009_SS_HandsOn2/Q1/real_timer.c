//Akash Anand
//MT2022009


//1. Write a separate program (for each time domain) to set a interval timer in 10sec and 10 micro second
// a. ITIMER_REAL
// b. ITIMER_VIRTUAL
// c. ITIMER_PROF


#include <sys/time.h>
#include <stdio.h>
int main()
{

	 struct timeval time,time1;
	 time.tv_sec=10;
	 time.tv_usec=10;
	 time1.tv_sec=0;
	 time1.tv_usec=0;
	 struct itimerval new_val;
	 new_val.it_interval=time1;
	 new_val.it_value=time;
	int chk= setitimer(ITIMER_REAL, &new_val,NULL);
	if(chk==-1)
	{
		printf("Failed to set alarm");
		return 1;
	}
	char a= getchar();
}
