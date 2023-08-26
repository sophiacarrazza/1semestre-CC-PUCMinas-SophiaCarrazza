#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet [10];
    int vet2 [10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    for (int j = 0; j < 10; j++){
            vet2[j] = vet[9-j];

    }

    for (int f = 0; f < 10; f++){
    printf("%d ", vet[f]);
    }

    printf("\n");
    for (int f = 0; f < 10; f++){
    printf("%d ", vet2[f]);
    }


    return 0;
}
