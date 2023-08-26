#include <stdio.h>
#include <stdlib.h>

int soma (int v[], int n) {
    if (n < 0){
        return 0;
    }
    else {
        return v[n] += soma(v, n-1);
    }

}

int main()
{
    int n;
    printf("Digite a quantidade de numeros no array\n");
    scanf("%d", &n);

    int v[n];
    printf("Digite os valores dos numeros do array\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int r = soma(v, n);

    printf("A soma de todos os elementos deste array e:%d", r);

    return 0;
}
