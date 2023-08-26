#include <stdio.h>
#include <stdlib.h>
const int n = 2;
typedef struct{
 char nome[50];
 char endereco[100];
 char telefone[15];
}Cliente;


int main()
{
    Cliente clientes[n];
    for (int i=0; i < n; i++) {
        printf("\nDigite os dados do cliente %d\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", clientes[i].nome);
        printf("Endereco: ");
        scanf(" %[^\n]", clientes[i].endereco);
        printf("Telefone: ");
        scanf(" %[^\n]", clientes[i].telefone);
    }

    printf("\nClientes Cadastrados:\n");
    for (int i=0; i < n; i++) {
        printf("\nCliente %d:\n",i+1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Endereco: %s\n", clientes[i].endereco);
        printf("Telefone: %s\n", clientes[i].telefone);
    }
    return 0;
}
