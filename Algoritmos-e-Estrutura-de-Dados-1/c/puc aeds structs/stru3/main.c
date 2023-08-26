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
    FILE* arq = fopen("cars.txt", "w+");
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

    fprintf(arq,"\nCarros Cadastrados:\n");
    for (int i=0; i < n; i++) {
        fprintf(arq,"\nCarro %d:\n",i+1);
        fprintf(arq,"Marca: %s\n", carros[i].marca);
        fprintf(arq,"Modelo: %s\n", carros[i].modelo);
        fprintf(arq,"Cor: %s\n", carros[i].cor);
        fprintf(arq,"Ano: %s\n", carros[i].ano);
    }
    return 0;
}
