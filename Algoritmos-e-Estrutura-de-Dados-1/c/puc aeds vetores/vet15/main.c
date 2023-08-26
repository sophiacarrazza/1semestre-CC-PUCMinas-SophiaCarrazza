#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const x =4;
    int v[x];
    printf("digite os numeros de um vetor com %d elementos\n", x);
    for(int i=0; i<x; i++){
        scanf("%d", &v[i]);
    }

    printf("O vetor digitado e:\n");
    for(int i=0; i<x; i++){
        printf("%d ", v[i]);
    }

    printf("\nOs elementos repetidos desse vetor sao:\n");
    for(int i=0; i<x; i++){
        if (v[i]==v[i+i]){
            printf("%d ", v[i]);
        }
    }


    return 0;
}
