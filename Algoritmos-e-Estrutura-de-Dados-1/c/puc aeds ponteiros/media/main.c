#include <stdio.h>
#include <stdlib.h>

void median(int n, float* media){
float soma=0, num;
for (int i=0; i<n; i++) {

    printf("Digite o %d numero: \n", i+1);
    scanf("%f",&num);
    soma += num;
}
*media = soma/n;
}
int main()
{
    float media;
    int n;
    printf("Digite a quantidade de numeros que serao operados na media\n");
    scanf("%d", &n);

    median(n, &media);

    printf("A media dos numeros digitados e: %.2f\n", media);

    return 0;
}
