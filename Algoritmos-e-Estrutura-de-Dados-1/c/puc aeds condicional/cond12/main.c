#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sa, ns;
    printf("Insira seu salario atual\n");
    scanf("%f", &sa);

    if (sa < 700) {
        ns = (sa * 1.3);
        printf("Seu novo salario e: %.2f\n", ns);


    } else if (sa >=700) {
        ns = (sa * 1.1);
        printf("Seu novo salario e: %.2f\n", ns);
    }
    return 0;
}
