#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Digite os 3 lados para a formacao de um triangulo\n");
    scanf("%d %d %d", &a, &b, &c);

    if ( (abs(b - c) < a && a < (b + c)) || (abs( a - c ) < b && b < (a + c)) || (abs( a - b ) < c && c < (a + b))) {
        printf("triangulo valido");
    } else {
        printf("triangulo invalido");
}

        return 0;
}
