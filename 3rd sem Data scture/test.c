#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main()

{
    char line[80];
    gets(line);
    printf("%s\n", line);
    printf("%s\n", gets(line));
}