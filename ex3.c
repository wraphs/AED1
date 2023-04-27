#include <stdio.h>

int main()
{
    double a, b;
    int n;

    scanf("%lf %lf", &a, &b);

    printf("Digite a operacao desejada:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &n);

    if(n==1) printf("%.2lf\n", a+b);
    if(n==2) printf("%.2lf\n", a-b);
    if(n==3) printf("%.2lf\n", a*b);
    if(n==4)
    {
        if(b!=0) printf("%.2lf\n", a/b);
        else printf("nao pode dividir por zero, bobinho\n");
    }
}