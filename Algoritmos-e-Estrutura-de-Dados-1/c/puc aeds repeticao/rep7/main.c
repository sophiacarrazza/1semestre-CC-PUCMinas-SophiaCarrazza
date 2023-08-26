#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, a, s, x;
   s=0;

        puts("digite a quantidade de numeros a serem somados");
        scanf("%d", &x);

        puts("digite os numeros para fazer a soma dos impares");

   for (a=1;a<=x;a++) {

        scanf("%d", &n);

        if (n%2 != 0) {
        s = s+n;
        }
   }
   printf("soma: %d", s);
    return 0;
}
