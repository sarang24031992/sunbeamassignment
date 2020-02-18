/*
 * file.c
 *
 *  Created on: Feb 16, 2020
 *      Author: lenovo
 */



#include "stdio.h"
#include "string.h"

 int main(int argc, char* argv[])
 {
 	char *p=strtok(argv[1],",");
	printf("%s",argv[0]);

 	while(*p!='\0')
 	{
 		printf("%s\n", p);
 		p = strtok(NULL,",");

 	}
 	return 0;
