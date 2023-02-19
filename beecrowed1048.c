#include<stdio.h>
int main()
{
    float n,n2,n3 ;
    scanf("%f",&n);
    if(0<n&& n<=400){
n2=0.15*n;
n3=n2+n;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%%\n",n3,n2);
    }
    if(400<n && n<=800)
    {
        n2=0.12*n;
        n3=n2+n;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%%\n",n3,n2);

    }
    if(800<n && n<=1200)
    {
        n=0.10*n;
        n3=n2+n;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%%\n",n3,n2);
    }
    if(1200<n && n<=2000){
        n2=0.07*n;
        n3=n2+n;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%%\n",n3,n2);
    }
    if(n>2000)
    {
        n2=.04*n;
        n3=n2+n;
         printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4%%\n",n3,n2);

    }
    return 0;
}