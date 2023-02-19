#include <stdlib.h>
#include<stdio.h>

int main()
{
    char *name;
    int length ;
    char *cptr=name;
  while(*cptr!='\0')
  {
    printf("%c %u/n",*cptr,cptr);
    cptr++;
  }
  length=cptr-name;
  printf("%d\n",length);
}