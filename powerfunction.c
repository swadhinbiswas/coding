#include<stdio.h>
int power(int x, int y)
{
    double p=1.00;
    if(y>=0){
    while(y--)
        p*=x;
printf("%f\n", p);
    }

else{
    while(y++)
    {
        p/=x;
    }
    printf("%f\n", p);
}
    return p;
    }

int main()
{
    int x,y;
   
    scanf("%d%d",&x,&y);
power(x,y);

}