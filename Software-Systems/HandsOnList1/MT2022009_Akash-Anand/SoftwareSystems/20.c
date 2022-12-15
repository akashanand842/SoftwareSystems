/*
20.c
Name:-  Akash Anand
Roll Number:- MT2022009

Question:- Find out the priority of your running program. Modify the priority with nice command.
 */

#include <unistd.h> 
#include <stdio.h>  
#include <stdlib.h>

void main()
{
    int priority, newPri;
    printf("Enter the priority you want to set : ");
    scanf("%d", &newPri);
    
    priority = nice(0); 
    printf("Current priority: %d\n", priority);
    priority = nice(newPri); 
   	printf("New priority: %d\n", priority);
}
