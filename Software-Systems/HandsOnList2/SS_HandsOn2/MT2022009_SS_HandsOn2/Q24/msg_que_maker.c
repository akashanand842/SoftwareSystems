//Akash Anand
//MT2022009


//24. Write a program to create a message queue and print the key and message queue id.
#include <sys/types.h>
#include <sys/ipc.h>   
#include <sys/msg.h>  
#include <stdio.h>     
#include <unistd.h>    

void main()
{
    key_t queueKey;      
    int queueIdentifier; 

    queueKey = ftok("./MsgQue", 1);

    queueIdentifier = msgget(queueKey, IPC_CREAT | IPC_EXCL | 0700);
    queueIdentifier = msgget(queueKey,0);

    printf("Key: %d\n", queueKey);
    printf("Message Queue Identifier: %d\n", queueIdentifier);
}
