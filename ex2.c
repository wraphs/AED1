#include <stdio.h>

int main()
{
    int n[2], i=0;

    while(i<2)
    {
        scanf("%d", &n[i]);
        i++;
    }

    printf("soma: %d\n", n[0]+n[1]);

    if(n[0]>=n[1]) printf("maior: %d, menor: %d\n", n[0], n[1]);
    if(n[1]>n[0]) printf("maior: %d, menor: %d\n", n[1], n[0]);

}