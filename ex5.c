#include <stdio.h>

int main()
{
    int x[4], y[4], i=0;

    while(i<4)
    {
        scanf("%d", &x[i]);
        i++;
    }

    i=0;

    while(i<4)
    {
        scanf("%d", &y[i]);
        i++;
    }

    i=0;

    while(i<4)
    {
        printf("%d ", x[i]+y[i]);
        i++;
    }

    printf("\n");

    return 0;
}