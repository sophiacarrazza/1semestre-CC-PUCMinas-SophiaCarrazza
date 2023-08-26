#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, p, ns;

    printf("digite o valor do seu salario atual e o percentual de aumento: \n");
    scanf("%f %f", &s, &p);

    ns = (s)*(1+(p/100));

    printf("seu novo salario e: %.2f", ns);

    return 0;
}
