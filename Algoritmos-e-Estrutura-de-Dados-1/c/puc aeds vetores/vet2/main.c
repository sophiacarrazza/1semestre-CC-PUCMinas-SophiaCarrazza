#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[100];

    vet[0]= pow(0, 2);

    for (int i=0; i <100; i++) {
        if (i%2 == 0) {
            vet[i]= pow(i, 2);
        } else {
             vet[i]= pow(i, 3);
        }
    }

     for (int i= 0; i <100 ; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
