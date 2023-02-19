#include<stdio.h>
#include<math.h>
int main() {
  int arr[50],n,m;
  scanf("%d",&n);
  arr[0] =1;
  arr[1] =1;
  for(m=1; m<n; m++)
{
arr[m]=arr[m-1]+arr[m-2];
}
printf("%d\n",arr[n-1]);
return 0;
}