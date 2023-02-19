#include<stdio.h>
int main()
{
    int n;
     scanf("%d", &n);
     
     int arr[n];
     for(int i=0;i<n;i++)
     {
     arr[n]=(i-1)*(i-2)*(i-3);
     
     }
     printf("%d ",arr[6]);
     return 0;
     }

