#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, x, y, s;
    double r, n;

    printf("menu de opçoes: \n 1. Somar dois numeros \n 2. Raiz quadrada de um numero \n Digite a opcao desejada:");
    scanf("%d", &a);
    if(a==1){
        scanf("%d %d", &x, &y);
        s = x + y;
        printf("a soma e: %d",s);
    }
        if(a==2){
        scanf("%lf", &n);
        r = sqrt(n);
        printf("a raiz quadrada e: %lf",r);
    }
}
