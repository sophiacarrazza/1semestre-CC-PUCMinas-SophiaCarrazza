#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int *p = &x; //declaracao de ponteiro
    int *f = &y;

    printf("Os enderecos sao:\n");
    printf("%p ", p);
    printf("%p ", f);
    printf(" \n");

    printf("O maior endereco e:\n");
    if (p > f){
        printf("%p ", p);
    } else {
        printf("%p ", f);
    }
    return 0;
}
