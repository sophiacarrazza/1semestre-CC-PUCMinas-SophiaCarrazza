#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs, min;

    scanf("%d", &hrs);

    min = hrs * 60;

    printf("%d horas sao %d minutos\n",hrs, min);
    return 0;
}
