#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int t = 5;
    const int c = t*2;
    int veta [t], vetb [t], vetc [c];

    printf("Digite os valores do vetor a:\n");
    for (int i = 0; i < t; i++){
        scanf("%d", &veta[i]);
    }

    printf("Digite os valores do vetor b:\n");
    for (int g = 0; g < t; g++){
        scanf("%d", &vetb[g]);
    }

    for (int i = 0; i < t; i++){
        vetc[i*2] = veta[i];
        vetc[(i*2)+1] = vetb[i];
    }

    for (int f = 0; f < t; f++){
        printf(" %d", veta[f]);
    }
    printf(" \n");
    for (int d = 0; d < t; d++){
        printf(" %d", vetb[d]);
    }
    printf(" \n");
    for (int v = 0; v < c; v++){
        printf(" %d", vetc[v]);
    }

}
