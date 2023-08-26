#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int t = 10;
    int vet [t];

    printf("Digite os valores do primeiro vetor:\n");
    for (int i = 0; i < t; i++){
        scanf("%d", &vet[i]);
    }

    printf("O vetor original e o invertido sao:\n");
    for (int f = 0; f < t; f++){
    printf("%d ", vet[f]);
    }
    printf(" \n");

    for (int f = 0; f < t; f++){
    printf("%d ", vet[t-1-f]);
    }


    return 0;
}
