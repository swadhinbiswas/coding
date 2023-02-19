#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a,b;
    float sum;
    for(int i=0;i<n;i++)
    { scanf("%d", &a);
     scanf("%d", &b); }
    if(b==0)
    { 
        printf("divisao impossivel\n");
    }
  else
   {
    sum= a/b;
    printf("%.2f\n", sum);
   }
 return 0;
}