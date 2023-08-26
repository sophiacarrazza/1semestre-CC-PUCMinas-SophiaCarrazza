#include <stdio.h>
#include <stdlib.h>

float calculamedia(char tipo, float n1, float n2, float n3){
    if(tipo == 'a'){
        return(n1+n2+n3/3);
    } else if (tipo == 'p'){
        return(((n1*5)+(n2*3)+(n3*2))/10);
    } else {
        return(-1);
    }

}


int main()
{
    int n;
    char tipo;
    float m, n1, n2, n3;
    printf("Digite a quantidade de alunos e o tipo da media\n");
    printf("(Digite 'a' para media aritmetica e 'p' para media ponderada de pesos 5, 3 e 2)\n");
    scanf("%d %c",&n, &tipo);

    for(int i = 0; i < n; i++) {
        printf("Digite as 3 notas do aluno %d\n", i+1);
        scanf("%f %f %f",&n1, &n2, &n3);
        m = calculamedia(tipo, n1, n2, n3);
        printf("A media do aluno %d e %1.f\n", i+1, m);


    }
    return 0;
}
