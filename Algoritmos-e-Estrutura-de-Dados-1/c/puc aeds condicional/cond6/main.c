#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, m;
    scanf("%f %f %f", &a, &b, &c);

    m = ((a+b+c)/3);

    if(m>=0 && m<4){
        printf("%.2f, Reprovado", m);
    }
    if(m>=4 && m<7){
        printf("%.2f, Exame",m);
    }
    if(m>=7 && m<=10){
        printf("%.2f, Aprovado",m);
    }


}
