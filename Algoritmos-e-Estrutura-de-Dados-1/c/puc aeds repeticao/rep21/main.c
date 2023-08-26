#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c1=0, c2=0, c3=0, c4=0, n=0, b=0, x;
    float pb;

    printf("Digite seu voto por meio dos codigos: \n");
    scanf("%d", &x);

    while (x != 0) {
        if(x == 1) {
        c1++;
    } else if (x == 2){
        c2++;
    } else if (x == 3){
        c3++;
    } else if (x == 4){
        c4++;
    } else if (x == 5){
        n++;
    } else if (x == 6){
        b++;
    } else {
        printf("Voto inválido!\n");
    }
    pb = b/(c1+c2+c3+c4+n+b);
    }

    printf("Votos para o candidato 1: %d\n", c1);
    printf("Votos para o candidato 2: %d\n", c2);
    printf("Votos para o candidato 3: %d\n", c3);
    printf("Votos para o candidato 4: %d\n", c4);
    printf("Votos nulos: %d\n", n);
    printf("Porcentagem de votos em branco sobre o total de votos: %.2f\n", pb);
    return 0;
}
