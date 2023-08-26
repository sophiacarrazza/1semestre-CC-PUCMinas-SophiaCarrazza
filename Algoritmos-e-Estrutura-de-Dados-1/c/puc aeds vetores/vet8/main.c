#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet1 [15], vet2[15], vet3[15];

printf("Insira os valores do primeiro vetor:\n");
    for (int i = 0; i < 15; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Insira os valores do segundo vetor:\n");
    for (int i = 0; i < 15; i++){
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < 15; i++){
        if (vet1[i] == vet2[i]) {
            vet3[i] = 1;
        }
        else {
            vet3[i] = 0;
        }
    }

    printf("os vetores sao:\n");

    for (int i = 0; i < 15; i++){
        printf("%d ", vet1[i]);
    }
printf(" \n");

    for (int i = 0; i < 15; i++){
        printf("%d ", vet2[i]);
    }
printf(" \n");

    for (int i = 0; i < 15; i++){
        printf("%d ", vet3[i]);
    }


    return 0;
}
