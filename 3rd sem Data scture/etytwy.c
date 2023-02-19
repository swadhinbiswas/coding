#include <stdio.h>
int main()
{
    int a, b, c, big, arr[3];
    scanf("%d%d%d", &a, &b, &c);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i] < arr[j])
            {
                big = arr[i];
                arr[i] = arr[j];
                arr[j] = big;
            }
        }
    }
    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);

    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}