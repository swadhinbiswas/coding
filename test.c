#define M 19
#include<ctype.h>
#include <stdio.h>
int main()
{
    char clog;
    clog=getchar();
    if(isalpha(clog)>0)
    {
    printf("the character is a letter\n");
    }
    else
    if(isdigit(clog)>0)
{
        printf("this character is a digit\n");
}

return 0;
}