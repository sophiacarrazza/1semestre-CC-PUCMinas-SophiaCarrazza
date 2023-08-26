#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, ns;

    printf("digite o valor de seu salario atual:\n");
    scanf("%f", &s);

    ns = s * 1.25;

    printf("seu novo salario e: %.2f \n", ns);
    return 0;
}
