//Akash Anand
//MT2022009


//3. Write a program to set (any one) system resource limit. Use setrlimit system call. 

#include <sys/time.h>
#include <sys/resource.h>
#include <stdio.h>
int main()
{
	 struct rlimit output, input;
	 printf("maximum size of the process's virtual memory\n");
	 int k=getrlimit(RLIMIT_AS, &output);
	 printf("soft limit : %lu\n",output.rlim_cur);
	 printf("hard limit : %lu\n",output.rlim_max);
	 input.rlim_cur=output.rlim_cur-11111111111111;
	 input.rlim_max=output.rlim_max;
	 k= setrlimit(RLIMIT_AS, &input);
	 printf("new size of the process's virtual memory\n");
         k=getrlimit(RLIMIT_AS, &output);
         printf("soft limit : %lu\n",output.rlim_cur);
         printf("hard limit : %lu\n",output.rlim_max);

}

