#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int vet1 [20], s=0, n;

printf("Insira os valores do vetor:\n");
    for (int i = 0; i < 20; i++){
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < 20; i++){
        n = (vet1[i] - vet1[19-i]);
        s = s + pow(n, 2);
    }

printf("%d", s);

}
