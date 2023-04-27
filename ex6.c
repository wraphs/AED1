#include <stdio.h>

int main()
{
    int v[5], m[2][2], i=0, a=0, b=0, contador=0;

    while(i<5)
    {
        scanf("%d", &v[i]);
        i++;
    }

    while(a<2)
    {
        while(b<2)
        {
            scanf("%d", &m[a][b]);
            b++;
        }
        b=0;
        a++;
    }

    i=0;
    a=0;
    b=0;

    while(i<5)
    {
        while(a<2)
        {
            while(b<2)
            {
                if(v[i]==m[a][b]) contador++;
                b++;
            }
            b=0;
            a++;
        }
        a=0;
        i++;
    }

    printf("%d\n", contador);


    return 0;
}