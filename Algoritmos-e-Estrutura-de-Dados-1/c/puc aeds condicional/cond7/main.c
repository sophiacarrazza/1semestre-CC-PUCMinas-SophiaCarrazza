#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, p1, p2, p3, m, mn;

    printf("digite sua nota do trabalho de laboratorio, da avaliacao semestral e do exame final\n");
    scanf("%f %f %f", &a, &b, &c);

    printf("digite os pesos de cada nota\n");
    scanf("%f %f %f", &p1, &p2, &p3);

    printf("digite a media necessaria para sua aprovacao\n");
    scanf("%f", &mn);

    m = ((a*p1)+(b*p2)+(c*p3)/(p1+p2+p3));

    if(m>=mn){
        printf("%.2f, Aprovado", m);
    }
    if(m>=4 && m<mn){
        printf("%.2f, Exame Especial",m);
    }
    if(m<4){
        printf("%.2f, Reprovado",m);
    }
    return 0;
}
