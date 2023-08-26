#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
printf("Numeros Primos 1-1000\n");
bool primo;
int i, div, nump = 0;

for(i=1; i<=1000; i++)
{
    primo = true;
    for(div=2; div<=i/2; div++)
    {
        if(i % div == 0) primo = false;
    }
    if(primo)
    {
        printf("%i, ",i);
        nump++;
    }
}
        printf("\n A quantidade de numeros primos e %i \n", nump);

    return 0;
}
