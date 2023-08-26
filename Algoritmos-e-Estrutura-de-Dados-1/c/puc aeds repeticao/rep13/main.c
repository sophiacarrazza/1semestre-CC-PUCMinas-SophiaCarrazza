#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, cont=0;

    printf("Digite um numero para descobrir se ele e primo ou nao\n");
    scanf("%d", &n);

    for (a=1; a<=n; a++)
    {
        if(n%a == 0)
        {
            cont++;
        }
    }
    if(cont == 2)
    {
        printf("O numero %d e primo\n", n);
    }
    else
    {
        printf("O numero %d nao e primo\n", n);
    }
    return 0;
}
