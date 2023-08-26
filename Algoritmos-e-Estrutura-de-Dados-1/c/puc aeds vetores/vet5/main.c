#include <stdio.h>
#include <stdlib.h>

int main()
{
    int neg=0, spos=0;
    int vet[10];
    printf("Digite os numeros a seguir\n");
    for (int i= 0; i <10 ; i++){
        scanf("%d", &vet[i]);
    }
     for (int i= 0; i <10 ; i++){
        if (vet[i] < 0) {
            neg++;
        } else {
        spos = spos + vet[i];
        }
    }
    printf("Quantidade de numeros negativos: %d\n", neg);
    printf("Soma dos numeros positivos: %d\n", spos);
    return 0;
}
