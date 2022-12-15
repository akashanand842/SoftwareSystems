/*
 15.c
 Name:-  Akash Anand
 Roll Number:- MT2022009
  
 Question:- Write a program to display the environmental variable of the user (use environ).le.
 */
#include <stdio.h>

extern char **environ;

int isValid(char *var) {
	return var[0] == 'U' && var[1] == 'S' && var[4] == '=';
}

void main() {
	int i = -1;
	while (environ[++i] != NULL) {
		if (isValid(environ[i])) {
			printf("%s\n", environ[i]);
		}
	}
}
