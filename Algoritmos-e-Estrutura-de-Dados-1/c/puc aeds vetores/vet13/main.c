#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int a = 5;
    const int b = 5;
    const int c = a + b;
    int veta [a], vetb [b], vetc [c];

    printf("Digite os valores do vetor a:\n");
    for (int i = 0; i < a; i++){
        scanf("%d", &veta[i]);
    }

    printf("Digite os valores do vetor b:\n");
    for (int i = 0; i < b; i++){
        scanf("%d", &vetb[i]);
    }

    for (int i = 0; i < a; i++){
        vetc[i] = veta[i];
    }
    for (int i = 0; i < b; i++){
        vetc[i+a] = vetb[i];
    }

    for (int f = 0; f < a; f++){
    printf("%d ", veta[f]);
    }
    printf(" \n");
    for (int f = 0; f < b; f++){
    printf("%d ", vetb[f]);
    }
    printf(" \n");
    for (int f = 0; f < c; f++){
    printf("%d ", vetc[f]);
    }

}
