#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b)
{
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
}

int main () {

    printf("Insira dois numeros para retornar o maior");
    int a, b;

    scanf("%d %d", &a, &b);

    int m = maior(a,b);

    printf("o maior numero e: %d",m);


}
