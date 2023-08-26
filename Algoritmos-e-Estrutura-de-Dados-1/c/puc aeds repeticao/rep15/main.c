#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, t1 = 0, t2 = 1, prox;


    printf("Informe a quantidade de termos: \n");
    scanf("%d", &n);


    printf("Sequencia de Fibonacci: \n");

    for(i=1; i<=n; i++) {

        printf("%d,", t1); //coloca o printf no inicio para ja dar o valor do primeiro antes de rodar o for pro segundo valor
        prox = t1 + t2;
        //ele ta somando o primeiro termo (inicialmente 0)com o segundo (primeiramente 1)
        t1 = t2;
        t2 = prox;
    }

    return 0;
}
