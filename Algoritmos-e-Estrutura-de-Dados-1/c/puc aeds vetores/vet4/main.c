#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int vet[30];

    for (int i= 0; i <30 ; i++)
    {
        vet[i]= pow(i, 2);
    }
    for (int i=0; i<30; i++) {
    printf("%d ", vet[i]);
    }
}
