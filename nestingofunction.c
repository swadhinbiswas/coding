#include<stdio.h>
int diffrent(int p,int q)
{
    if (p!=q)
    return 1;
    else 
    return 0;
}
float ratio(int x,int y,int z){
    if(diffrent(y,z))
    return (x/(y-z));
    else 
    return 0.0;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%f\n",ratio(a,b,c));
}