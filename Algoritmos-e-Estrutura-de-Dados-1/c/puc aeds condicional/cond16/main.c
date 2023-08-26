#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, h, f, g;
    printf("Insira o valor do ponto x\n");
    scanf("%f", &x);

    h = x*x -16;
    printf("h = %.2f\n", h);

    if(h >= 0) {
        f = h;
        printf("f = %.2f\n", f);

    } else if (h<0){
        f = 1;
        printf("f = %.2f\n", f);

    }

    if(x > 5){
        g = x*x +16;
        printf("g = %.2f\n", g);

    } else if (x<= 5) {
        g = -x/2;
        printf("g = %.2f\n", g);

    }
    return 0;
}
