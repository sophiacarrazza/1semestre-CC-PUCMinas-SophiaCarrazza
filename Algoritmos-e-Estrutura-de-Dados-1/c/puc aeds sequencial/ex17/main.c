#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hrs, min;

    scanf("%f", &min);

    hrs = min / 60.00;


    if (hrs == 1) {
    printf("%.2f minutos sao %.2f hora\n", min, hrs);
    } else {
    printf("%.2f minutos sao %.2f horas\n", min, hrs);
    }
    return 0;
}
