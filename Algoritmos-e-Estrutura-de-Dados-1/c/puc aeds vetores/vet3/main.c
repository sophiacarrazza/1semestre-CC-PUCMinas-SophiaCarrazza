#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maiorn, menorn, soma;
    float media;
    int vet[10];

    printf("Digite os numeros a seguir\n");
    for (int i= 0; i <10 ; i++)
    {
        scanf("%d", &vet[i]);
    }
    soma = 0;
    menorn = vet[0];
    maiorn = vet[0];

    for (int i= 0; i <10 ; i++)
    {
        soma = soma + vet[i];
        if (vet[i] < menorn)
        {
            menorn = vet[i];
        }
        if (vet[i] > maiorn)
        {
            maiorn = vet[i];
        }
    }
    media = soma/10.0;


    printf("maior nota: %d\n", maiorn);
    printf("menor nota: %d\n", menorn);
    printf("media dos alunos: %.2f\n", media);
    return 0;
}

