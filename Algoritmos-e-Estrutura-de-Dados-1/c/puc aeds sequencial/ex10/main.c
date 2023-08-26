#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;
    printf("informe os coeficientes a, b e c\n");

    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - (4 * a * c) ;

    if (delta < 0) {
        printf("essa equacao nao possui numeros reais!\n");
    }

    else if (delta == 0) {
        x1 = -b / 2* a ;
        printf("a raiz dessa equacao e: %.2f\n", x1);

    } else {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("as raizes dessa equacao sao: %.2f %.2f\n", x1, x2);

    }
    return 0;
}

