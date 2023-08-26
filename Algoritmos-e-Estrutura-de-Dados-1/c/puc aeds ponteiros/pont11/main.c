#include <stdio.h>
#include <stdlib.h>

int main()
{
   const int n = 5;
    int *p;

    p = (int*)malloc(n*sizeof(int));

    printf("Digite os %d numeros inteiros\n",n);
   for (int i=0; i<n; i++) {

        scanf("%d", &p[i]);
    }
   printf("Os enderecos alocados para os valores foram:\n");
    for (int i=0; i<n; i++) {
        printf("%p ", &p[i]);
    }

   p = (int*)realloc(p,n*sizeof(int));

   printf("\nDigite mais %d numeros para serem incrementados ao array\n", n);
    for (int i=n; i<n*2; i++) {
        scanf("%d", &p[i]);
    }
    printf("\nOs enderecos alocados para os %d valores foram:\n",n*2);
    for (int i=0; i<n*2; i++) {
        printf("%p ", &p[i]);
    }

    printf("\nOs valores alocados foram:\n");
    for (int i=0; i<n*2; i++) {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
