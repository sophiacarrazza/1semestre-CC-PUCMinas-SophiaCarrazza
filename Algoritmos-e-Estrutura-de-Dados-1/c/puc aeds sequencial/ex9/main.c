#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, a;
    printf("informe o raio da circunferencia\n");

    scanf("%f", &r);

    a = 3.14 * (r * r);

    printf("a area da circunferencia e aprox: %.2f\n", a);
    return 0;
}
