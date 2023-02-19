#include <stdio.h>

int main ()
{

	unsigned short a, c;

	scanf("%hu %hu", &a, &c);

	if (a % 2 == 0 && c % 2 == 0)
		printf("1\n");
	else if (a % 2 == 1 && c % 2 == 1)
		printf("1\n");
	else
		printf("0\n");
        return 0;

}