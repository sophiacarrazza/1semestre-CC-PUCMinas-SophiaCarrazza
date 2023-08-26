#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[10];
    printf("Digite os numeros a seguir\n");
    for (int i= 0; i <10 ; i++){
        scanf("%d", &vet[i]);
    }

    for (int i= 0; i <9 ; i++){
        printf("%d, ", vet[i]);
    }
        printf("%d", vet[9]);
    return 0;
}
