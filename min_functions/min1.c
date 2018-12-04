/*
    Auther       : Heinz Samuelsson
    Date         : 2016-08-19
    File         : min1.c
    Reference    : -
    Description  : -
*/ 
 
#include <stdio.h>
#include <stdlib.h>
 
#define MIN(a,b)(((a)<(b))?(a):(b))
 
int main()
{
  printf("min:%d\n", MIN(33, MIN(10,20)));
  printf("min:%d\n", MIN(22,MIN(99,2)));
  printf("min:%d\n", MIN(6,MIN(12,11)));

  int x = MIN(26,MIN(12,91));
  printf("x:%d\n", x);

  return 0;
}
