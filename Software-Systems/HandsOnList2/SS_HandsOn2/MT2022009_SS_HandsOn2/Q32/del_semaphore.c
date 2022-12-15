//Akash Anand
//MT2022009


//32. Write a program to implement semaphore to protect any critical section.
// a. rewrite the ticket number creation program using semaphore
// b. protect shared memory from concurrent write access
// c. protect multiple pseudo resources ( may be two) using counting semaphore
// d. remove the created semaphore

#include <sys/types.h>
#include <sys/ipc.h>   
#include <sys/sem.h>   
#include <unistd.h>   
#include <stdio.h> 

void main()
{
	int semkey = ftok("./bisemaphore", 1);
	int semId=semget(semkey,0,0);

	 int semctlStatus = semctl(semId, 0, IPC_RMID);
}
