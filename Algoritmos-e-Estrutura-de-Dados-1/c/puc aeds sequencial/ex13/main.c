#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sf, v, ns, c;

    printf("digite o valor do seu salario fixo e o valor de suas vendas: \n");
    scanf("%f %f", &sf, &v);

    c = 0.04 * v;

    ns = sf + c;

    printf("o valor de suas comissoes e: %.2f", c);

    printf("seu salario final e: %.2f", ns);

    return 0;
}
