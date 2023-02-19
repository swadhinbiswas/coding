#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n ==61)
    {
        printf("Brasilia\n");
    }
   else if(n==71)
    {
        printf("Salvador\n");
    }
     else  if(n==11)
    {
        printf("Sao Paluo\n");
    }
     else  if(n==21)
    {
        printf("Rio de Janeiro\n");

    }
     else  if(n==32)
    { printf("Juiz de Fora");
    }
     else  if(n==19)
    {
        printf("Campinas\n");
    }
    else   if(n==27)
    {
        printf("Victoria\n");
    }
     else  if(n==31)
    { printf("Belo Horizonte");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    return 0;
}



int main()
{
   int N;
    scanf("%d",&N);
    if(N==61)
        printf("Brasilia\n");
    else if(N==71)
        printf("Salvador\n");
    else if(N==11)
        printf("Sao Paulo\n");
    else if(N==21)
        printf("Rio de Janeiro\n");
    else if(N==32)
        printf("Juiz de Fora\n");
    else if(N==19)
        printf("Campinas\n");
    else if(N==27)
        printf("Vitoria\n");
    else if(N==31)
        printf("Bela Horizonte\n");
    else
        printf("DDD nao cadastrado\n");
    return 0;
}