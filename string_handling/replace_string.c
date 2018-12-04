/*
    Auther       : Heinz Samuelsson
    Date         : 2018-09-06
    File         : string_rep.c
    Reference    : -
    Description  : -
*/ 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <stdbool.h>
 
 
int main(int argc, char *argv[])
{
	int i=0;
	char s[50] = "Jennie";

	while(s[i]!='\0')
	{
	    //if(s[i]=='n')
	    //{
	        s[i]='*';
	    //}
	    i++;
	}

	printf("%s\n", s);

        return 0;
}
