#include<stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
   if(m>n)
   {
    for ( int i=n+1; i<m; i++ )
    {
        if(i%5==2||i%5==3)
        {
            printf("%d\n", i);
        }
    }
   }
   else if(m<n)
   {
    for ( int i=m+1; i<n; i++ )
    {
        if(i%5==2||i%5==3)
        {
            printf("%d\n", i);
        }
    }
   
}
    return 0;
}