#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet [100];

    for (int i = 0; i < 100; i++){
        scanf("%d", &vet[i]);
    }

    printf("os numeros positivos nessa lista sao\n");
    for (int i = 0; i < 100; i++){
            if (vet[i] > 0) {
        printf("%d ", vet[i]);
            }
    }
    return 0;
}
