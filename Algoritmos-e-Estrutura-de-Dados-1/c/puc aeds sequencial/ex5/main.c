#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x, c, rq, rc, si, co;
    printf("insira um numero");
    scanf("%f", &x);

    c = x*x*x;
    rq= sqrt(x);
    rc= cbrt(x);
    si= sin(x);
    co= cos(x);

    printf("seu numero ao cubo: %.2f\n",c);
    printf("a raiz quadrada de seu numero: %.2f\n",rq);
    printf("a raiz cubica de seu numero: %.2f\n",rc);
    printf("o seno de seu numero: %.2f\n",si);
    printf("o cosseno de seu numero: %.2f\n",co);
    return 0;
}
