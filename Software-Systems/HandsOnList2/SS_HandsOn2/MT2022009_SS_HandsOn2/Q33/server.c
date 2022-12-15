//Akash Anand
//MT2022009


//33. Write a program to communicate between two machines using socket.
#include <sys/types.h> 
#include <sys/socket.h> 
#include <netinet/ip.h>
#include <stdio.h>      
#include <unistd.h>   

void main()
{
	int soc=socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in addr,client;
	char data[100];

	addr.sin_addr.s_addr = htonl(INADDR_ANY);
    	addr.sin_family = AF_INET;
    	addr.sin_port = htons(5050);
	int bin = bind(soc, (struct sockaddr*)&addr, sizeof(addr));

	int list=listen(soc,2);
	printf("server listening...\n" );

	int size=(int)sizeof(client);
	int cfd=accept(soc,(struct sockaddr*)&client,&size);
	printf("Server to client Connection successfully established\n");
	char send[20]="this is the SERVER!";
	int wB = write(cfd, &send, 20);
	int rB = read(cfd, &data, 50);
	printf("%s\n",data);
	close(soc);
}

