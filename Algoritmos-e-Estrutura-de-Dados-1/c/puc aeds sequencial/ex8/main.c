#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bmaior, bmenor, h, at;

    printf("insira os valores da base maior, da base menor e da altura do trapezio\n");

    scanf("%f %f %f", &bmaior, &bmenor, &h);

    at = ((bmaior+bmenor) * h) / 2.0 ;

    printf("a area do trapezio e: %.2f\n", at);
    return 0;
}
