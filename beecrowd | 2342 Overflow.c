#include<stdio.h>
int main() {
   int a,b,lim;
   char n;
   scanf("%d",&lim);
   scanf("%d%c%d",&a,&n,&b);
   if(n=='+')
   {
    if(a+b<=lim)
    printf("OK\n");
    else{
       printf("OVERFLOW\n");
    }
   }
   if(n=='*')
   {
    if(a*b<=lim){
  printf("OK\n");
   }
   else{
    
      printf("OVERFLOW\n");
   }
   }
   return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main2(){
	int lim, x, y;
	char p;
	
	scanf("%d", &lim);
	scanf("%d %c %d", &x, &p, &y);
	
	if(p == '+')
		if(x + y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	else
		if(x * y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	
	return 0;
}
