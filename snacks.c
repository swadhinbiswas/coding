#include<stdio.h>
int main() 
{
    int x, y;
    scanf("%d%d", &x, &y);
    float price=0;
    if(x ==1)
    {
      price=(float)(y*4.00);
    }
        if(x ==2)
    {
      price=(float)(y*4.50);
    }
        if(x ==3)
    {
      price=(float)(y*5.00);
    }
    
        if(x ==4)
    {
      price=(float)(y*2.00);
    }
        if(x ==5)
    {
      price=(float)(y*1.50);
    }
        printf("Total: R$ %0.2f\n", price);
        return 0;
}