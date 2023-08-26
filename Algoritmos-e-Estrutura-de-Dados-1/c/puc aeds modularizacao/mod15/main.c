#include <stdio.h>
#include <stdlib.h>
float elevado(float x, float p){
    if (p == 0){
        return 1;
    } else if(p ==1){
        return x;
    } else if (p>0){
        return x * elevado(x, p-1);
    } else if (p<0){
        return 1.0/elevado(x, -p);
    }
}


int main()
{
    float num, pot;
    printf("Digite um numero e digite sua potencia\n");
    scanf("%f %f", &num, &pot);

    printf("O calculo desta potencia e: %.2f\n", elevado(num, pot));

    return 0;
}
