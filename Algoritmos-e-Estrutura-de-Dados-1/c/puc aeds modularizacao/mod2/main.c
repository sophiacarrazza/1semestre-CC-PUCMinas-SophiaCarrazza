#include <stdio.h>
#include <stdlib.h>

float rendapercapta(float sal[], int filhos[], int qntsal) {
    //parametros sao oq vc precisa chamar do int main pra fazer a funcao
    // nesse caso, float sal[], int filhos[], int qntsal
    //mas o somasal e somapop, por exemplo, nao precisam estar ali, pq elas tao so dentro da propria funcao.
    float somasal = 0;
    int somapop = qntsal;
    for(int i = 0; i < qntsal; i++){
        somasal += sal[i];
        somapop += filhos[i];
    }
    return (somasal/somapop);

}
int main()
{
    int qntsal;
    printf("Digite a quantidade de adultos nesta populacao\n");
    scanf("%d", &qntsal);

    float sal[qntsal], r;
    int filhos[qntsal];

    for (int i = 0; i < qntsal; i++){
    printf("Digite o salario do adulto %d e sua quantidade de filhos\n", i+1);
    scanf("%f", &sal[i]);
    scanf("%d", &filhos[i]);
    }
    r = rendapercapta(sal, filhos, qntsal);
        printf("A Renda Per Capita dessa populacao e: %f\n", r);

    return 0;
}
