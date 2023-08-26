#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{
    int f = 1;
    float s = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
        f *= (n-j);
        }
    s += (1/f);

    }
    return s;
}

int main()
{
    int n;
    printf("Insira o numero que voce deseja realizar este calculo\n");
    scanf("%d", &n);

    float resultado = soma(n);

    printf("O calculo do numero %d e %f\n",n, resultado);
    return 0;
}
