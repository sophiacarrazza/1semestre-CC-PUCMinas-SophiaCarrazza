#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("digite dois numeros a e b");
    scanf("%d %d", &a, &b);
    if (a==b){
        printf("a e b sao iguais");
    }
    else if (a>b){
        printf("a e maior");
    } else {
        printf("b e maior");
    }

}
