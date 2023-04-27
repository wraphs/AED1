#include <stdio.h>

int main()
{
    int n, v[1000], i=0, maior;

    scanf("%d", &n);

    while(i<n)
    {
        scanf("%d", &v[i]);
        i++;
    }

    i=0;
    maior=v[i];

    while(i<n-1)
    {
        if(v[i+1]>maior) maior=v[i+1];
        i++;
    }

    printf("maior: %d\n", maior);

}