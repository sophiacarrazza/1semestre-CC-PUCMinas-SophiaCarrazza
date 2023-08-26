#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float servico(int n){
    float s = 0;
    for (int i=1; i<n+1; i++){
        s+= ((i*i+1.0)/(i+3.0));
    }
    return s;
}

int main()
{
    int n;
    printf("Digite um numero para o servico da formula ser calculado\n");
    scanf("%d", &n);

    float s = servico(n);

    printf("O servico calculado com o numero %d e %.2f\n",n, s);
    return 0;
}
