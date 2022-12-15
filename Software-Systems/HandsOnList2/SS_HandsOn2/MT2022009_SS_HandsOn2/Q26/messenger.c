//Akash Anand
//MT2022009


//26. Write a program to send messages to the message queue. Check $ipcs -q
#include <sys/types.h> 
#include <sys/ipc.h>   
#include <sys/msg.h>   
#include <stdio.h>   
#include <unistd.h>    
#include <errno.h>
int main()
{
	struct msgbuf 
	{
		long mtype;
		char* mtext;
	}msgs;
	msgs.mtype=2;
	msgs.mtext="Hello world";
	int qkey=ftok("./MsgQue",1);
	int qId=msgget(qkey,0);
	printf("Key: %d\n", qkey);
    	printf("Message Queue Identifier: %d\n\n", qId);
	int msg=msgsnd( qId, &msgs ,100, 0);
}

