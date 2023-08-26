#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float pp, pt;
    printf("Insira o numero e o peso de um planeta\n");
    scanf("%d %f", &n, &pt);

    if ("n == 1"){
        pp = (pt *  0.37);
        printf("Esse peso no planeta Mercurio equivale a: %.2f\n", pp);

    } else  if ("n == 2"){
        pp = (pt *  0.88);
        printf("Esse peso no planeta Venus equivale a: %.2f\n", pp);

    } else  if ("n == 3"){
        pp = (pt *  0.38);
        printf("Esse peso no planeta Marte equivale a: %.2f\n", pp);

    } else  if ("n == 4"){
        pp = (pt *  2.64);
        printf("Esse peso no planeta Marte equivale a: %.2f\n", pp);

    } else  if ("n == 5"){
        pp = (pt *  1.15);
        printf("Esse peso no planeta Jupiter equivale a: %.2f\n", pp);

    } else  if ("n == 6"){
        pp = (pt *  1.17);
        printf("Esse peso no planeta Urano equivale a: %.2f\n", pp);
    }




    return 0;
}
