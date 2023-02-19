#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char buf[100];
    int num=0,alfa=0,spa=0,i=0;
    fgets(buf,sizeof(buf),stdin);
    while(buf[i]!=0)
    {
        if('a' <=buf[i]<='z' && 'A'<=buf[i]<='Z')
        {
            alfa++;
        }
    }
}