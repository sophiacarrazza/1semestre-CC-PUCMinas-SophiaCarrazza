#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, a, p, x;
   p=1;

        puts("digite a quantidade de numeros a serem multiplicados");
        scanf("%d", &x);

        puts("digite os numeros para fazer o produto dos pares");

   for (a=1;a<=x;a++) {

        scanf("%d", &n);

        if (n%2 == 0) {
        p = p*n;
        }
   }
   printf("produto: %d", p);
    return 0;
}
