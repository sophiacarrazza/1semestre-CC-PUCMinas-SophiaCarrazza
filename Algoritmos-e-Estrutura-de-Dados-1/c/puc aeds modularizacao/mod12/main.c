#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void printArray(int n, int v[]) {
for (int i = 0; i<n; i++) {
    printf("%d ", v[i]);
}

}

float mediaArray(int n, int v[]) {
    int soma = 0;
for (int i = 0; i<n; i++) {
    soma += i;
}
    float media = soma/(float)n;
    return media;
}

int maxArray(int n, int v[]){
    int maior = v[0];
    for (int i=0; i<n; i++){
        if(v[i]>v[0]){
            maior = v[i];
        }
    }
    return maior;

}

int minArray(int n, int v[]){
    int menor = v[0];
    for (int i=0; i<n; i++){
        if(v[i]<v[0]){
            menor = v[i];
        }
    }
    return menor;

}

int main()
{
    int n;
    printf("Digite a quantidade de elementos do array:\n");
    scanf("%d", &n);

    int v[n];
    printf("Digite os elementos do array:\n");
    for (int i= 0; i<n; i++){
        scanf("%d", &v[i]);
    }
    printf("O array digitado e: ");
    printArray(n, v);

    float m = mediaArray(n, v);

    printf("\nA media dos elementos desse array e: %.2f\n", m);

    printf("O maior numero desse Array e: %d\n", maxArray(n, v));

    printf("O menor numero desse Array e: %d\n", minArray(n, v));

    return 0;
}
