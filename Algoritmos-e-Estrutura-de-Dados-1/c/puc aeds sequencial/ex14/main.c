#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p, s1, s2;

    printf("digite o valor do produto: \n");
    scanf("%f", &p);

    s1 = p * 0.90;

    s2 = p * 1.20;
    printf("o valor do produto com desconto de 10 e: %.2f\n", s1);

    printf("o valor do produto com aumento de 20 e: %.2f", s2);
}
