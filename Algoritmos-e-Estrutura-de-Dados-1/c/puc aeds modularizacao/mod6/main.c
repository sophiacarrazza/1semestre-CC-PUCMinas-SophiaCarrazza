#include <stdio.h>
#include <stdlib.h>

int fat(int n)
{
    int f = 1;
    for (int i=0; i<n; i++){
        f *= (n-i);
    }
    return f;
}

int main()
{
    int n;
    printf("Insira o numero que voce deseja realizar a fatoracao\n");
    scanf("%d", &n);

    int f = fat(n);

    printf("O fatorial do numero %d e %d\n",n, f);
    return 0;
}
