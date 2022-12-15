//Akash Anand
//MT2022009


// Question : Write a simple program to create three threads.

#include <pthread.h> 
#include <stdio.h>  
#include<unistd.h> 

void *sampleFunction(void *data)
{
    printf("Running in thread: %lu\n", pthread_self());
}

void main()
{
    sampleFunction(NULL);
    pthread_t threadOne, threadTwo, threadThree;

    if (pthread_create(&threadOne, NULL, sampleFunction, NULL))
        perror("Error while creating thread one");
    if (pthread_create(&threadTwo, NULL, sampleFunction, NULL))
        perror("Error while creating thread two");
    if (pthread_create(&threadThree, NULL, sampleFunction, NULL))
        perror("Error while creating thread three");

    pthread_exit(NULL);
}
