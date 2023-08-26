#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, a, p;

    p=1;

    for (a=1; a<=100; a++)
    {
        puts("digite 100 numeros para fazer o produto");
        scanf("%f", &n);

        p = p*n;

    }
    printf("%f", p);
    return 0;
}
