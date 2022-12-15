//Akash Anand
//MT2022009


//32. Write a program to implement semaphore to protect any critical section.
// a. rewrite the ticket number creation program using semaphore
// b. protect shared memory from concurrent write access
// c. protect multiple pseudo resources ( may be two) using counting semaphore
// d. remove the created semaphore


#include <sys/types.h> 
#include <sys/ipc.h>   
#include <sys/shm.h> 
#include <unistd.h>    
#include <stdio.h> 
int main()
{
	char* spoint;
	char* stake;
	int skey=ftok("./shr",1);
	int sId=shmget(skey,100,IPC_CREAT|0766);
}
