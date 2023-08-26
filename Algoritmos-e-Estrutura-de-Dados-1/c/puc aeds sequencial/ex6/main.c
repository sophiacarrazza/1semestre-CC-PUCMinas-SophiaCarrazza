#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, r;
    printf("insira dois numeros abaixo\n");

    scanf("%d %d", &x, &y);

    r = x%y;

    printf("resto da divisao: %d\n", r);
    return 0;
}
