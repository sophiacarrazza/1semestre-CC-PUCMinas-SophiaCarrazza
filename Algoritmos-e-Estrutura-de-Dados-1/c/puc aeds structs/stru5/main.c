#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char nome[50];
    float preco;
}Produto;


void imprimir(Produto p){
    printf("As infos do produto sao:\n");
    printf("\nCodigo: %d\n", p.codigo);
    printf("\nNome: %s\n", p.nome);
    printf("\nPreco: %.2f\n", p.preco);
}

Produto criarproduto(int cod, char nom[], float preco){
    Produto p;
    p.codigo = cod;
    strcpy(p.nome, nom);
    p.preco = preco;
    return p;
}

Produto media(int cod, char nom[], float preco){
    Produto p;
    p.codigo = cod;
    strcpy(p.nome, nom);
    p.preco = preco;
    return p;
}

int main()
{
    Produto p = criarproduto(56, "livro", 34.99);
    imprimir(p);

    return 0;
}
