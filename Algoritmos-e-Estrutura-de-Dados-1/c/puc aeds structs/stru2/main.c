#include <stdio.h>
#include <stdlib.h>
const int n = 2;
typedef struct{
 char marca[20];
 char modelo[50];
 char cor[15];
 char ano[5];
}Carro;


int main()
{

    Carro carros[n];
    for (int i=0; i < n; i++) {
        printf("\nDigite os dados do carro %d\n", i+1);
        printf("Marca: ");
        scanf(" %[^\n]", carros[i].marca);
        printf("Modelo: ");
        scanf(" %[^\n]", carros[i].modelo);
        printf("Cor: ");
        scanf(" %[^\n]", carros[i].cor);
        printf("Ano: ");
        scanf(" %[^\n]", carros[i].ano);
    }

    printf("\nCarros Cadastrados:\n");
    for (int i=0; i < n; i++) {
        printf("\nCarro %d:\n",i+1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Cor: %s\n", carros[i].cor);
        printf("Ano: %s\n", carros[i].ano);
    }
    return 0;
}
