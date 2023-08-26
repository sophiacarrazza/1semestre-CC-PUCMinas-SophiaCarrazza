#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int tam = 10;
    int vet1[tam], vet2[tam], vet3[tam], s;

    printf("Digite os termos desejados do vetor 1\n");

    for (int i = 0; i<tam; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os termos desejados do vetor 2\n");

    for (int i = 0; i<tam; i++) {
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < tam; i++) {
        s = vet1[i] + vet2[i];
        vet3[i] = s;

    }
printf("O vetor da soma dos outros vetores sao:\n");
    for (int i = 0; i<tam; i++) {
        printf("%d ", vet3[i]);
    }


}
