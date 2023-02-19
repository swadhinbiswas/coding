#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char buf[1024],bu="ok"
    int i=0,count=0;
    fgets(buf,sizeof(buf),stdin);
    for(i=0; buf[i]!='\0'; i++)
    {
        if(bu==buf[i])
        {
               ++count;
        }
    }
printf("%d\n",count);
    
}