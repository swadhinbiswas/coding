#include <stdio.h>
#include <stdlib.h>


int main()
{
    char atr[1024];
    int l=0;
    fgets(atr,sizeof(atr),stdin);
    while(atr[l]!='\0')
    {
        printf("%c ", atr[l]);

    l++;
    }
    printf("\n");
}