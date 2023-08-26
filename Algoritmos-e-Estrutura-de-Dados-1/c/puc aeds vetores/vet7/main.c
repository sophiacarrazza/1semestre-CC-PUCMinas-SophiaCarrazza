#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("digite a quantidade de casas na lista\n");
    scanf("%d", &n);

   int vet [n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("os numeros impares nessa lista sao\n");
    for (int i = 0; i < n; i++){
            if (vet[i]%2 != 0) {
        printf("%d ", vet[i]);
            }
    }
    return 0;
}
