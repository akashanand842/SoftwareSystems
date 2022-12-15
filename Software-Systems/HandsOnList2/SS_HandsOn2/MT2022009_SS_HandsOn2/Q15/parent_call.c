//Akash Anand
//MT2022009


//15. Write a simple program to send some data from parent to the child process.
#include <unistd.h> 
#include <stdio.h>  
void main()
{
    int pipePar[2];
    int pipeChi[2]; 
    char *writeBuff1="food?\n"; 
    char *writeBuff2="yes\n";
    char *readBuff;
    int pipeSt1,pipeSt2;           
    int rB, wB1=sizeof(writeBuff1), wB2=sizeof(writeBuff2); 
    pipeSt1=pipe(pipePar);
    pipeSt2=pipe(pipeChi);
     if(pipeSt1 == -1 || pipeSt2 == -1)
	{
        	perror("Error while creating the pipe! ");
		return ;
	}
    if(fork())
    {
    	printf("Parent writing to the child\n");
    	wB1 = write(pipePar[1], &writeBuff1, sizeof(writeBuff1));
    	printf("wrote %d characters\n",wB1);
	 printf("Parent Reading from the Child\n");
    	 rB = read(pipeChi[0], &readBuff, wB2);
    	 printf("read %d characters\n",rB);
     	 write(1,readBuff,sizeof(readBuff));

    }
    else
    {
     printf("child Reading from the parent\n");
    rB = read(pipePar[0], &readBuff, wB1);
    printf("read %d characters\n",rB);
     write(1,readBuff,sizeof(readBuff));
     printf("Child writing to the parent\n");
        wB2 = write(pipeChi[1], &writeBuff2, sizeof(writeBuff2));
        printf("wrote %d characters\n",wB2);
   }
}

