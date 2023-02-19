#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char strv[500];
    int l;
    fgets(strv, sizeof(strv),stdin);
    l=strlen(strv);
    for(int i=l;i>=0;i--)
    {
        printf("%c",strv[i]);
    }
}
