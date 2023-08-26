#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, a, p;
    printf("insira os valores dos lados de seu retangulo\n");
    scanf("%d %d", &x, &y);

    a = x*y;
    p = 2*x + 2*y;

    printf("area: %d\n", a);
    printf("perimetro: %d\n", p);
    return 0;
}
